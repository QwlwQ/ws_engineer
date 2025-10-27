#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"
#include "duco_msg/msg/duco_robot_state.hpp"
#include "duco_msg/srv/robot_move.hpp"
#include <Eigen/Dense>

#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>
class TCPCalibration: public rclcpp::Node{
public:
    TCPCalibration():Node("tcp_calibration_node_cpp")
    {
        initializeKeyboard();
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&TCPCalibration::timerCallback, this));
        teach_mode_pub_ = this->create_publisher<std_msgs::msg::Bool>("/teach_mode_control", 10);
        duco_robot_state_sub_ = this->create_subscription<duco_msg::msg::DucoRobotState>(
                                "duco_cobot/robot_state", 10, std::bind(&TCPCalibration::ducoRobotStateCallback, this, std::placeholders::_1));
        robot_move_client_ = this->create_client<duco_msg::srv::RobotMove>("/duco_robot/robot_move");
    }

    ~TCPCalibration()
    {
        restoreKeyboard();
    }
private:
    //初始化键盘配置
    void initializeKeyboard() 
    {
        tcgetattr(STDIN_FILENO, &original_termios_);
        struct termios new_termios = original_termios_;
        new_termios.c_lflag &= ~(ICANON | ECHO);  
        tcsetattr(STDIN_FILENO, TCSANOW, &new_termios);
        int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
        fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
    }

    //恢复终端（键盘输入）属性设置
    void restoreKeyboard() 
    {
        tcsetattr(STDIN_FILENO, TCSANOW, &original_termios_);
    }

    //获取键盘输入
    char getKeyboardInput() 
    {
        char c = 0;
        if (read(STDIN_FILENO, &c, 1) > 0) 
        {
            return c;
        }
        return 0;
    }

    //处理键盘输入
    void keyPressHandle(char key)
    {
        switch(key)
        {
            //打开示教模式
            case '1':
                setTeachMode(true);
                break;
            //关闭示教模式
            case '2':
                setTeachMode(false);
                break;
            //保存当前末端法兰位姿
            case '3':
                savePoses();
                break;
            //tcp计算
            case '4':
                calculateTCP();
                break;
            //保存测试用末端法兰位姿
            case '5':
                saveTestPose();
                break;
            //直接运行测试位姿态
            case '6':
                moveFlangeToPose();
                break;
            //通过计算将工具运动到点位
            case '7':
                moveToolToPose();
                break;
            //归位
            case '0':
                moveHome();
                break;
            default:
                break;          
        }
    }
    
    //示教模式切换
    void setTeachMode(bool enable)
    {
        std_msgs::msg::Bool msg;
        msg.data = enable;
        teach_mode_pub_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "teach mode: %s", enable ? "true" : "false");
    }

    //保存计算位姿（多个）
    void savePoses(void)
    {
        std::lock_guard<std::mutex> lock(duco_robot_state_mutex_);
        std::array<float, 6> pose;
        if(!current_duco_robot_state_)  
        {
            RCLCPP_INFO(this->get_logger(), "no duco robot state");
            return;
        }
        for(int i = 0; i < 6; i++)
        {
            pose[i] = current_duco_robot_state_->cart_actual_position[i];
        }
        saved_poses_.push_back(pose);
        RCLCPP_INFO(this->get_logger(), "has saved %zu pose", saved_poses_.size());
    }

    //tcp计算
    void calculateTCP(void)
    {
        if(saved_poses_.size() < 4)
        {
            RCLCPP_INFO(this->get_logger(), "need at least 4 pose, has saved %zu pose", saved_poses_.size());
            return;
        }

        //原始xyz和rpy转为矩阵形式
        std::vector<Eigen::Isometry3f> poses;
        for(const auto& p : saved_poses_)
        {
            Eigen::Isometry3f pose = Eigen::Isometry3f::Identity();
            
            //xyz
            pose.translation() = Eigen::Vector3f(p[0], p[1], p[2]);
            //rpy
            Eigen::AngleAxisf rollAngle(p[3], Eigen::Vector3f::UnitX());
            Eigen::AngleAxisf pitchAngle(p[4], Eigen::Vector3f::UnitY());
            Eigen::AngleAxisf yawAngle(p[5], Eigen::Vector3f::UnitZ());
            Eigen::Quaternionf q = yawAngle * pitchAngle * rollAngle;
            pose.linear() = q.toRotationMatrix();

            poses.push_back(pose);
        }

        //迭代计算tcp
        Eigen::Vector3f tcp_position = Eigen::Vector3f::Zero();
        for(int iter = 0; iter < 20; iter++)
        {
            //计算每个位姿下工具位置
            std::vector<Eigen::Vector3f> tool_positions;
            for(const auto& pose : poses)
            {
                Eigen::Vector3f tool_position = pose.translation() + pose.rotation() * tcp_position;
                tool_positions.push_back(tool_position);
            }
            //计算平均位置
            Eigen::Vector3f target_position = Eigen::Vector3f::Zero();
            for(const auto& pos : tool_positions)
            {
                target_position += pos;
            }
            target_position /= poses.size();
            //更新TCP位置
            Eigen::Vector3f position_corrections = Eigen::Vector3f::Zero();
            for(size_t i = 0; i < poses.size(); i++)
            {
                Eigen::Vector3f error = target_position - tool_positions[i];
                Eigen::Vector3f correction = poses[i].rotation().transpose() * error;
                position_corrections += correction;
            }
            position_corrections /= poses.size();

            tcp_position += position_corrections;
            if(position_corrections.norm() < 1e-6)
            {
                break;
            }
        }
        tcp_position_ = tcp_position;

        //计算标定精度
        std::vector<Eigen::Vector3f> final_positions;
        for(const auto& pose : poses)
        {
            Eigen::Vector3f tool_position = pose.translation() + pose.rotation() * tcp_position;
            final_positions.push_back(tool_position);
        }
        Eigen::Vector3f mean_position = Eigen::Vector3f::Zero();
        for(const auto& pos : final_positions)
        {
            mean_position += pos;
        }
        mean_position /= final_positions.size();
        float max_error = 0.0;
        float sum_squared_error = 0.0;
        for(const auto& pos : final_positions)
        {
            float error = (pos - mean_position).norm();
            max_error = std::max(max_error, error);
            sum_squared_error += error * error;
        }
        float rms_error = sqrt(sum_squared_error / final_positions.size());

        //打印信息
        RCLCPP_INFO(this->get_logger(), "计算使用位姿数量：%zu", saved_poses_.size());
        RCLCPP_INFO(this->get_logger(), "TCP position: x=%.6f, y=%.6f, z=%.6f", tcp_position.x(), tcp_position.y(), tcp_position.z());
        RCLCPP_INFO(this->get_logger(), "max_error:%.6f, rms_error:%.6f", max_error, rms_error);
    }

    //保持tcp标定结果
    void saveTcpTranslation()
    {
        
    }

    //保存测试位姿（单个）
    void saveTestPose(void)
    {
        std::lock_guard<std::mutex> lock(duco_robot_state_mutex_);
        if(!current_duco_robot_state_)  
        {
            RCLCPP_INFO(this->get_logger(), "no duco robot state");
            return;
        }
        for(int i = 0; i < 6; i++)
        {
            saved_pose_[i] = current_duco_robot_state_->cart_actual_position[i];
        }
        has_saved_ = true;
        RCLCPP_INFO(this->get_logger(), "has saved test pose");
    }

    //运行至测试位姿
    void moveFlangeToPose(void)
    {
        if(!has_saved_ || !(robot_move_client_->service_is_ready()))
        {
            RCLCPP_INFO(this->get_logger(), "move test failed");
            return;
        }

        auto request = std::make_shared<duco_msg::srv::RobotMove_Request>();
        request->command = "movejpose2";
        request->arm_num = 0;
        request->p = {saved_pose_[0], saved_pose_[1], saved_pose_[2], saved_pose_[3], saved_pose_[4], saved_pose_[5]};
        request->q = {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f};
        request->v = 1.0 * M_PI;
        request->a = 5.0 * M_PI;
        request->r = 0.0f;
        request->tool = "default";
        request->wobj = "default";
        request->block = true;

        using ServiceResponseFuture = 
            rclcpp::Client<duco_msg::srv::RobotMove>::SharedFuture;
        auto response_received_callback = [this](ServiceResponseFuture future){
            try {
                auto response = future.get();        
            } catch (const std::exception& e) {

            }
        };
        robot_move_client_->async_send_request(request, response_received_callback);
    }

    //运行工具至测试位姿
    void moveToolToPose(void)
    {
        if(!has_saved_ || !(robot_move_client_->service_is_ready()))
        {
            RCLCPP_INFO(this->get_logger(), "move test failed");
            return;
        }

        Eigen::Vector3f tool_pos(saved_pose_[0], saved_pose_[1], saved_pose_[2]);
        Eigen::Vector3f tool_rpy(saved_pose_[3], saved_pose_[4], saved_pose_[5]);

        Eigen::AngleAxisf roll(tool_rpy[0], Eigen::Vector3f::UnitX());
        Eigen::AngleAxisf pitch(tool_rpy[1], Eigen::Vector3f::UnitY());
        Eigen::AngleAxisf yaw(tool_rpy[2], Eigen::Vector3f::UnitZ());
        Eigen::Quaternionf q = yaw * pitch * roll;
        
        Eigen::Isometry3f tool_pose = Eigen::Isometry3f::Identity();
        tool_pose.translation() = tool_pos;
        tool_pose.linear() = q.toRotationMatrix();
        
        Eigen::Isometry3f T_flange_tool = Eigen::Isometry3f::Identity();
        T_flange_tool.translation() = tcp_position_;
        
        Eigen::Isometry3f flange_pose = tool_pose * T_flange_tool.inverse();
        Eigen::Vector3f flange_pos = flange_pose.translation();
        Eigen::Matrix3f R = flange_pose.rotation();
        Eigen::Vector3f flange_rpy = R.eulerAngles(0, 1, 2);

        auto request = std::make_shared<duco_msg::srv::RobotMove_Request>();
        request->command = "movejpose2";
        request->arm_num = 0;
        request->p = {flange_pos.x(), flange_pos.y(), flange_pos.z(), flange_rpy[0], flange_rpy[1], flange_rpy[2]};
        request->q = {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f};
        request->v = 1.0 * M_PI;
        request->a = 5.0 * M_PI;
        request->r = 0.0f;
        request->tool = "default";
        request->wobj = "default";
        request->block = true;

        using ServiceResponseFuture = 
            rclcpp::Client<duco_msg::srv::RobotMove>::SharedFuture;
        auto response_received_callback = [this](ServiceResponseFuture future){
            try {
                auto response = future.get();        
            } catch (const std::exception& e) {

            }
        };
        robot_move_client_->async_send_request(request, response_received_callback);
    }

    //归位
    void moveHome()
    {
        auto request = std::make_shared<duco_msg::srv::RobotMove_Request>();
        request->command = "movej2";
        request->arm_num = 0;
        request->p = {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f};
        request->q = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
        request->v = 1.0 * M_PI;
        request->a = 5.0 * M_PI;
        request->r = 0.0f;
        request->tool = "default";
        request->wobj = "default";
        request->block = true;

        using ServiceResponseFuture = 
            rclcpp::Client<duco_msg::srv::RobotMove>::SharedFuture;
        auto response_received_callback = [this](ServiceResponseFuture future){
            try {
                auto response = future.get();        
            } catch (const std::exception& e) {

            }
        };
        robot_move_client_->async_send_request(request, response_received_callback);
    }

    //定时器回调函数处理键盘输入
    void timerCallback()
    {
        char key = getKeyboardInput();
        if(key != 0)
        {
            keyPressHandle(key);
        }
    }

    //机器人状态订阅回调函数
    void ducoRobotStateCallback(const duco_msg::msg::DucoRobotState::SharedPtr msg)
    {
        std::lock_guard<std::mutex> lock(duco_robot_state_mutex_);
        current_duco_robot_state_ = msg;
    }


    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr teach_mode_pub_;
    rclcpp::Subscription<duco_msg::msg::DucoRobotState>::SharedPtr duco_robot_state_sub_;
    rclcpp::Client<duco_msg::srv::RobotMove>::SharedPtr robot_move_client_;

    //终端配置
    struct termios original_termios_;
    //机器人状态
    duco_msg::msg::DucoRobotState::SharedPtr current_duco_robot_state_;
    mutable std::mutex duco_robot_state_mutex_;
    //保存的计算poses
    std::vector<std::array<float, 6>> saved_poses_;
    Eigen::Vector3f tcp_position_ = Eigen::Vector3f(0.009536f, 0.036170f, 0.206133f);
    //保存的测试pose
    std::array<float, 6> saved_pose_;
    bool has_saved_;


};

int main(int argc, char const *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TCPCalibration>());
    rclcpp::shutdown();
    return 0;
}