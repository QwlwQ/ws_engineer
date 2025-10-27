#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "duco_msg/srv/robot_move.hpp"
#include "duco_msg/msg/duco_robot_state.hpp"
#include <Eigen/Dense>
#include "aivt_interfaces/msg/target_pose.hpp"
#include "std_msgs/msg/float32.hpp"
#include "yaml-cpp/yaml.h"
                                                                                        
// ros2 topic pub --once /aivt/target_pose aivt_interfaces/msg/TargetPose "{target_pose: [-0.036, 0.027, 0.565, 0, 0, 0]}"

// ros2 topic pub --once /esp32/pressure std_msgs/msg/Float32 "data: 2000.0"

// ros2 topic pub --once /teach_mode_control std_msgs/msg/Bool "data: true"

// ros2 topic pub --once /record_state std_msgs/msg/Bool "data: true"
// ros2 topic pub --once /repeat_state std_msgs/msg/Bool "data: true"

typedef enum
{
   Grasp,
   Touch 
}ControlMode;

class RobotMotion: public rclcpp::Node{
public:
    RobotMotion():Node("robot_motion_node_cpp")
    {
        hand_eye_rotation_ <<  0.99789389888256841,   -0.060991208039304315, -0.022087080269985158,
                               0.060620753227566916,  0.99801487859534654,   -0.017071214966670648,
                               0.023084428757690807,  0.015696325819189193,  0.99961029131592516;
        hand_eye_translation_ << -0.017452621999230054,
                                 -0.11315470602859168,
                                 -0.0063662127247359548;
        tcp_translation_ << 0.0f, 0.0f, 0.21f;


        
        target_pose_sub_ = this->create_subscription<aivt_interfaces::msg::TargetPose>(
            "/aivt/target_pose", 10, std::bind(&RobotMotion::targetPoseCallback, this, std::placeholders::_1));
        pressure_sub_ = this->create_subscription<std_msgs::msg::Float32>(
            "/esp32/pressure", 10, std::bind(&RobotMotion::pressureCallback, this, std::placeholders::_1));
        duco_robot_state_sub_ = this->create_subscription<duco_msg::msg::DucoRobotState>(
                                "/duco_cobot/robot_state", 10,
                                std::bind(&RobotMotion::ducoRobotStateCallback, this, std::placeholders::_1));
        joint_state_sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
                            "/joint_states", 10,
                            std::bind(&RobotMotion::jointStateCallback, this, std::placeholders::_1));
        record_state_sub_ = this->create_subscription<std_msgs::msg::Bool>(
                            "/record_state", 10,
                            std::bind(&RobotMotion::recordStateCallback, this, std::placeholders::_1));
        repeat_state_sub_ = this->create_subscription<std_msgs::msg::Bool>(
                            "/repeat_state", 10,
                            std::bind(&RobotMotion::repeatStateCallback, this, std::placeholders::_1));
        tool_switch_motor_control_pub_ = this->create_publisher<std_msgs::msg::Bool>("/esp32/tool_switch_motor_control", 10);
        grasp_motor_control_pub_ = this->create_publisher<std_msgs::msg::Bool>("/esp32/grasp_motor_control", 10);

        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(200),
            std::bind(&RobotMotion::timerCallback, this));
        repeat_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100),
            std::bind(&RobotMotion::repeatTimerCallback, this));  

        robot_move_client_ = this->create_client<duco_msg::srv::RobotMove>("/duco_robot/robot_move");
        while(!robot_move_client_->wait_for_service(std::chrono::seconds(1))){
            RCLCPP_INFO(this->get_logger(), "等待服务中...");
        }
    }

    ~RobotMotion() 
    {

    }

private:
    //归位
    void moveHome()
    {
        auto request = std::make_shared<duco_msg::srv::RobotMove_Request>();
        request->command = "movej2";
        request->arm_num = 0;
        request->p = {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f};
        request->q = {0.0f, -1.2f, 1.2f, 0.0f, -1.57f, 0.0f};
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

    //关节空间控制
    void moveJointPose(float q0, float q1, float q2, float q3, float q4, float q5)
    {
        auto request = std::make_shared<duco_msg::srv::RobotMove_Request>();
        request->command = "movej2";
        request->arm_num = 0;
        request->p = {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f};
        request->q = {q0, q1, q2, q3, q4, q5};
        request->v = 1.25 * M_PI;
        request->a = 12.5 * M_PI;
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

    //笛卡尔空间控制
    void moveCartPose(float p0, float p1, float p2, float p3, float p4, float p5)
    {
        auto request = std::make_shared<duco_msg::srv::RobotMove_Request>();
        request->command = "movejpose2";
        request->arm_num = 0;
        request->p = {p0, p1, p2, p3, p4, p5};
        request->q = {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f};
        request->v = 5.0;
        request->a = 12.5;
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

    //直线运动
    void moveLinePose(float p0, float p1, float p2, float p3, float p4, float p5)
    {
        auto request = std::make_shared<duco_msg::srv::RobotMove_Request>();
        request->command = "movel";
        request->arm_num = 0;
        request->p = {p0, p1, p2, p3, p4, p5};
        request->q = {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f};
        request->v = 5.0;
        request->a = 12.5;
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

    //目标位姿进行手眼标定转换和tcp转换
    void transformTargetPose()
    {
        // 构建手眼标定变换矩阵
        Eigen::Isometry3f T_flange_camera = Eigen::Isometry3f::Identity();
        T_flange_camera.linear() = hand_eye_rotation_;
        T_flange_camera.translation() = hand_eye_translation_;
    
        // 构建相机坐标系下的目标位姿
        Eigen::Isometry3f T_camera_target = Eigen::Isometry3f::Identity();
        Eigen::Vector3f camera_target_pos(target_pose_[0], target_pose_[1], target_pose_[2]);
        Eigen::Vector3f camera_target_rpy(target_pose_[3], target_pose_[4], target_pose_[5]);
        Eigen::AngleAxisf camera_roll(camera_target_rpy[0], Eigen::Vector3f::UnitX());
        Eigen::AngleAxisf camera_pitch(camera_target_rpy[1], Eigen::Vector3f::UnitY());
        Eigen::AngleAxisf camera_yaw(camera_target_rpy[2], Eigen::Vector3f::UnitZ());
        Eigen::Quaternionf camera_target_q = camera_yaw * camera_pitch * camera_roll;
        T_camera_target.translation() = camera_target_pos;
        T_camera_target.linear() = camera_target_q.toRotationMatrix();

        //构建当前机器人末端法兰相对于基座的变换
        Eigen::Isometry3f T_base_flange = Eigen::Isometry3f::Identity();
        Eigen::Vector3f base_flange_pos(current_duco_robot_state_->cart_actual_position[0], current_duco_robot_state_->cart_actual_position[1], current_duco_robot_state_->cart_actual_position[2]);
        Eigen::Vector3f base_flange_rpy(current_duco_robot_state_->cart_actual_position[3], current_duco_robot_state_->cart_actual_position[4], current_duco_robot_state_->cart_actual_position[5]);
        Eigen::AngleAxisf base_roll(base_flange_rpy[0], Eigen::Vector3f::UnitX());
        Eigen::AngleAxisf base_pitch(base_flange_rpy[1], Eigen::Vector3f::UnitY());
        Eigen::AngleAxisf base_yaw(base_flange_rpy[2], Eigen::Vector3f::UnitZ());
        Eigen::Quaternionf base_flange_q = base_yaw * base_pitch * base_roll;
        T_base_flange.translation() = base_flange_pos;
        T_base_flange.linear() = base_flange_q.toRotationMatrix();

        //通过手眼标定将目标位姿转换到机器人基坐标系
        Eigen::Isometry3f T_base_target =  T_base_flange * T_flange_camera * T_camera_target;

        //构建tcp变换矩阵
        Eigen::Isometry3f T_flange_tool = Eigen::Isometry3f::Identity();
        T_flange_tool.translation() = tcp_translation_;
        
        //计算法兰盘位姿
        Eigen::Isometry3f T_base_flange_new = T_base_target * T_flange_tool.inverse();
        Eigen::Vector3f pos = T_base_flange_new.translation();
        Eigen::Matrix3f R = T_base_flange_new.rotation();
        Eigen::Vector3f rpy = R.eulerAngles(2, 1, 0);
        target_flange_pose_ = {pos.x(), pos.y(), pos.z(), rpy[0], rpy[1], rpy[2]};
    }

    //设置工具切换电机状态，true为grasp,false为touch
    void setToolSwitchState(bool state)
    {
        std_msgs::msg::Bool msg;
        msg.data = state;
        tool_switch_motor_control_pub_->publish(msg);
    }

    //设置夹爪电机状态，true为on,false为off
    void setGraspState(bool state)
    {
        std_msgs::msg::Bool msg;
        msg.data = state;
        grasp_motor_control_pub_->publish(msg);
    }

    //记录动作序列
    void recordMove()
    {
        std::array<float, 6> joint_state_record;
        float joint_state_dis = 0;
        for (int i = 0; i < 6; i++) {
            joint_state_record[i] = current_joint_state_->position[i];
            if(recorded_joint_state_.size() >= 1)
            {
                joint_state_dis += fabs(recorded_joint_state_.back()[i] - joint_state_record[i]); 
            }
        }
        
        RCLCPP_INFO(this->get_logger(), "%f", joint_state_dis);
        if(joint_state_dis >= 0.05 || recorded_joint_state_.size() < 1)
        {
            recorded_joint_state_.push_back(joint_state_record);
            RCLCPP_INFO(this->get_logger(), "record %zu move", recorded_joint_state_.size());
        }
        if(recorded_joint_state_.size() >= 20)
        {
            RCLCPP_INFO(this->get_logger(), "record end...");
            is_recording_ = false;
        }
    }

    //重现动作
    void repeatMove()
    {
        moveJointPose(recorded_joint_state_[repeat_index_][0], recorded_joint_state_[repeat_index_][1], recorded_joint_state_[repeat_index_][2],
                      recorded_joint_state_[repeat_index_][3], recorded_joint_state_[repeat_index_][4], recorded_joint_state_[repeat_index_][5]);
        repeat_index_++;
        if(repeat_index_ >= 20)
        {
            is_repeating_ = false;
            repeat_index_ = 0;
        }
    }

    void detectTask()
    {
        if(control_mode_ == ControlMode::Grasp)
        {
            transformTargetPose();
        }
        else if(control_mode_ == ControlMode::Touch)
        {
            transformTargetPose();
        }
    }

    void prepareTask()
    {
        if(control_mode_ == ControlMode::Grasp)
        {
            setToolSwitchState(true);
            setGraspState(false);
        }
        else if(control_mode_ == ControlMode::Touch)
        {
            setToolSwitchState(false);
            setGraspState(true);
        }
    }

    void moveTask()
    {
        if(control_mode_ == ControlMode::Grasp)
        {
            moveCartPose(target_flange_pose_[0] - 0.02 , target_flange_pose_[1], target_flange_pose_[2],
                        target_flange_pose_[3], target_flange_pose_[4], target_flange_pose_[5]);
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));

            moveCartPose(target_flange_pose_[0] , target_flange_pose_[1], target_flange_pose_[2],
                target_flange_pose_[3], target_flange_pose_[4], target_flange_pose_[5]);
        }
        else if(control_mode_ == ControlMode::Touch)
        {
            moveCartPose(target_flange_pose_[0] - 0.02 , target_flange_pose_[1], target_flange_pose_[2],
                target_flange_pose_[3], target_flange_pose_[4], target_flange_pose_[5]);
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));

            moveCartPose(target_flange_pose_[0] , target_flange_pose_[1], target_flange_pose_[2],
                target_flange_pose_[3], target_flange_pose_[4], target_flange_pose_[5]);
        }
    }

    void operateTask()
    {
        if(control_mode_ == ControlMode::Grasp)
        {
            for(int i = 0; i < 6; i++)
            {
                target_joint_state_[i] = current_joint_state_->position[i];
            }
            setGraspState(true);
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            moveJointPose(target_joint_state_[0], target_joint_state_[1], target_joint_state_[2],
                        target_joint_state_[3], target_joint_state_[4], target_joint_state_[5] + 0.2);
        }
        else if(control_mode_ == ControlMode::Touch)
        {
            for(int i = 0; i < 6; i++)
            {
                target_joint_state_[i] = current_joint_state_->position[i];
            }
            moveLinePose(target_flange_pose_[0] , target_flange_pose_[1] - 0.02, target_flange_pose_[2] - 0.02,
                target_flange_pose_[3], target_flange_pose_[4], target_flange_pose_[5]);
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            moveLinePose(target_flange_pose_[0] , target_flange_pose_[1] - 0.06, target_flange_pose_[2] - 0.04,
                    target_flange_pose_[3], target_flange_pose_[4], target_flange_pose_[5]);
        }
    }

    void resetTask()
    {
        if(control_mode_ == ControlMode::Grasp)
        {
            setGraspState(false);
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            moveJointPose(target_joint_state_[0], target_joint_state_[1], target_joint_state_[2],
                target_joint_state_[3], target_joint_state_[4], target_joint_state_[5]);
            moveHome();
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            setToolSwitchState(false);
            setGraspState(true);
        }
        else if(control_mode_ == ControlMode::Touch)
        {
            moveJointPose(target_joint_state_[0], target_joint_state_[1], target_joint_state_[2],
                target_joint_state_[3], target_joint_state_[4], target_joint_state_[5]);
            moveHome();
        }
    }

    //接收数据
    void targetPoseCallback(const aivt_interfaces::msg::TargetPose::SharedPtr msg)
    {
        for (size_t i = 0; i < 6; ++i)
        {
            target_pose_[i] = msg->target_pose[i];
        }
        std::thread([this]() {
            detectTask();
            prepareTask();
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            moveTask();
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            operateTask();
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            resetTask();
        }).detach();
    }

    //压力数据
    void pressureCallback(const std_msgs::msg::Float32::SharedPtr msg)
    {
        pressure = msg->data;
        if(pressure > 1500.0f)
        {
            moveHome();
        }
    }

    void ducoRobotStateCallback(duco_msg::msg::DucoRobotState::SharedPtr msg)
    {
        std::lock_guard<std::mutex> lock(duco_robot_state_mutex_);
        current_duco_robot_state_ = msg;
    }

    void jointStateCallback(sensor_msgs::msg::JointState::SharedPtr msg)
    {
        // std::lock_guard<std::mutex> lock(joint_state_mutex_);
        current_joint_state_ = msg;
    }

    void recordStateCallback(std_msgs::msg::Bool::SharedPtr msg)
    {
        is_recording_ = msg->data;
        RCLCPP_INFO(this->get_logger(), "record start...");
    }

    void repeatStateCallback(std_msgs::msg::Bool::SharedPtr msg)
    {
        is_repeating_ = msg->data;
    }

    void timerCallback()
    {
        if(is_recording_)
        {
            recordMove();
        }

    }

    void repeatTimerCallback()
    {
        if(is_repeating_)
        {
            repeatMove();
        }
    }

    rclcpp::Client<duco_msg::srv::RobotMove>::SharedPtr robot_move_client_;
    rclcpp::Subscription<aivt_interfaces::msg::TargetPose>::SharedPtr target_pose_sub_;
    rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr pressure_sub_;
    rclcpp::Subscription<duco_msg::msg::DucoRobotState>::SharedPtr duco_robot_state_sub_;
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr record_state_sub_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr repeat_state_sub_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr tool_switch_motor_control_pub_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr grasp_motor_control_pub_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::TimerBase::SharedPtr repeat_timer_;

    duco_msg::msg::DucoRobotState::SharedPtr current_duco_robot_state_;
    sensor_msgs::msg::JointState::SharedPtr current_joint_state_;
    mutable std::mutex duco_robot_state_mutex_;
    mutable std::mutex joint_state_mutex_;
    

    float pressure;
    ControlMode control_mode_ = ControlMode::Touch;
    std::array<float, 6> target_pose_;          //视觉识别结果
    std::array<float, 6> target_flange_pose_;   //转换后实际使用结果
    std::array<float, 6> target_joint_state_;
    std::vector<std::array<float, 6>> recorded_joint_state_;
    bool is_recording_;
    bool is_repeating_;
    int repeat_index_ = 0;
    Eigen::Matrix3f hand_eye_rotation_;
    Eigen::Vector3f hand_eye_translation_;
    Eigen::Vector3f tcp_translation_;
};


int main(int argc, char const *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RobotMotion>());
    rclcpp::shutdown();
    return 0;
}