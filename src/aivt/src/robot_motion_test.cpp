#include "rclcpp/rclcpp.hpp"
#include "duco_msg/srv/robot_move.hpp"
#include "duco_msg/msg/duco_robot_state.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include <vector>
#include <array>
#include <mutex>

#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>
#include <chrono>
//

using std::placeholders::_1;

class RobotMotionTest: public rclcpp::Node{
public:
    RobotMotionTest():Node("robot_motion_test"){
        client_ = this->create_client<duco_msg::srv::RobotMove>("/duco_robot/robot_move");
        
        //创建关节状态订阅器
        joint_state_sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
            "joint_states", 10, std::bind(&RobotMotionTest::jointStateCallback, this, _1));
        //创建笛卡尔坐标订阅器
        duco_robot_state_sub_ = this->create_subscription<duco_msg::msg::DucoRobotState>(
            "duco_cobot/robot_state", 10, std::bind(&RobotMotionTest::ducoRobotStateCallback, this, _1));

        while(!client_->wait_for_service(std::chrono::seconds(1))){
            RCLCPP_INFO(this->get_logger(), "等待服务中...");
        }


        //初始化键盘设置
        initializeKeyboard();

        /* 设置定时器： */
        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&RobotMotionTest::timerCallback, this));
    }

    ~RobotMotionTest() {
        // 恢复终端设置
        restoreKeyboard();
    }

private:
    void jointStateCallback(const sensor_msgs::msg::JointState::SharedPtr msg)
    {
        //使用互斥锁保护对current_joint_state_的访问
        std::lock_guard<std::mutex> lock(joint_state_mutex_);
        current_joint_state_ = msg;
    }

    void ducoRobotStateCallback(const duco_msg::msg::DucoRobotState::SharedPtr msg)
    {
        //使用互斥锁保护
        std::lock_guard<std::mutex> lock(duco_robot_state_mutex_);
        current_duco_robot_state_ = msg;
    }

    void saveCurrentJointPositions()
    {
        RCLCPP_INFO(this->get_logger(), "save start");
        std::lock_guard<std::mutex> lock(joint_state_mutex_);

        for(int i = 0; i < 6; i++)
        {
            saved_joint_positions_[i] = current_joint_state_->position[i];
            RCLCPP_INFO(this->get_logger(), "%f", saved_joint_positions_[i]);
        }
        has_saved_joint_position_ = true;
    }

    void saveCurrentCartesianPositions()
    {
        RCLCPP_INFO(this->get_logger(), "save start");
        std::lock_guard<std::mutex> lock(duco_robot_state_mutex_);

        for(int i = 0; i < 6; i++)
        {
            saved_cartesian_positions_[i] = current_duco_robot_state_->cart_actual_position[i];
            RCLCPP_INFO(this->get_logger(), "%f", saved_cartesian_positions_[i]);
        }
        has_saved_cartesian_position_ = true;
    }

    void moveToSavedJointPosition()
    {
        if(has_saved_joint_position_)
        {
            velocity_ = 1.0 * M_PI;
            acceleration_ = 5.0 * M_PI;
            executeJointMotion(saved_joint_positions_, velocity_, acceleration_);
        }
    }

    void moveToSavedCartesianPosition()
    {
        if(has_saved_cartesian_position_)
        {
            velocity_ = 1.0 * M_PI;
            acceleration_ = 5.0 * M_PI;
            executeCartesianMotion(saved_cartesian_positions_, velocity_, acceleration_);
        }
    }

    void initializeKeyboard() {
        // 获取当前终端设置
        tcgetattr(STDIN_FILENO, &original_termios_);
        // 设置新的终端属性
        struct termios new_termios = original_termios_;
        new_termios.c_lflag &= ~(ICANON | ECHO);  // 禁用规范模式和回显
        tcsetattr(STDIN_FILENO, TCSANOW, &new_termios);
        // 设置stdin为非阻塞模式
        int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
        fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
    }

    void restoreKeyboard() {
        tcsetattr(STDIN_FILENO, TCSANOW, &original_termios_);
    }

    char getKeyboardInput() {
        char c = 0;
        if (read(STDIN_FILENO, &c, 1) > 0) {
            return c;
        }
        return 0;
    }

    void handleKeyPress(char key)
    {
        switch(key){
            case '1':
                target_position_ = {0.448225, 0.038112, 0.418814, 0.001266, -3.120493, -1.585786};
                command_ = "movejpose2";
                velocity_ = 1.0 * M_PI;
                acceleration_ = 5.0 * M_PI; 
                executeRobotMotion(target_position_, command_, velocity_, acceleration_);
                break;
            case '2':
                target_position_ = {0.25f, 0.20f, 0.44f, -1.57f, 0.0f, 0.0f};
                command_ = "movejpose";
                velocity_ = 70;
                acceleration_ = 50; 
                executeRobotMotion(target_position_, command_, velocity_, acceleration_);
                break; 
            case '3':
            {
                target_position_ = {0.266f, 0.071f, 0.397f, -1.57f, -3.1f, 1.44f};
                command_ = "movejpose2";
                velocity_ = 2.5 * M_PI;
                acceleration_ = 100.0 * M_PI; 
                executeRobotMotion(target_position_, command_, velocity_, acceleration_);

                target_position_ = {0.238f, 0.145f, 0.525f, -1.57f, 0.0f, -1.57f};
                command_ = "movejpose2";
                velocity_ = 2.5 * M_PI;
                acceleration_ = 100.0 * M_PI; 
                executeRobotMotion(target_position_, command_, velocity_, acceleration_);

                target_position_ = {0.237f, 0.145f, 0.525f, -1.57f, 0.0f, -1.57f};
                command_ = "movejpose2";
                velocity_ = 2.5 * M_PI;
                acceleration_ = 100.0 * M_PI; 
                executeRobotMotion(target_position_, command_, velocity_, acceleration_);
                
                target_position_ = {0.238f, 0.145f, 0.525f, -1.57f, 0.0f, -1.57f};
                command_ = "movejpose2";
                velocity_ = 2.5 * M_PI;
                acceleration_ = 100.0 * M_PI; 
                executeRobotMotion(target_position_, command_, velocity_, acceleration_);

                target_position_ = {0.237f, 0.145f, 0.525f, -1.57f, 0.0f, -1.57f};
                command_ = "movejpose2";
                velocity_ = 2.5 * M_PI;
                acceleration_ = 100.0 * M_PI; 
                executeRobotMotion(target_position_, command_, velocity_, acceleration_);
                break; 
            }
            case '4':
                target_position_ = {0.266f, 0.071f, 0.397f, -1.57f, -3.1f, 1.44f};
                command_ = "movejpose2";
                velocity_ = 1.0 * M_PI;
                acceleration_ = 5.0 * M_PI; 
                executeRobotMotion(target_position_, command_, velocity_, acceleration_);
                break;
            case '5':
                target_position_ = {0.20f, 0.20f, 0.44f, -1.57f, 0.0f, 0.0f};
                velocity_ = 1.0 * M_PI;
                acceleration_ = 5.0 * M_PI;
                executeCartesianMotion(target_position_, velocity_, acceleration_);
                break;
            case '6':
                target_position_ = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
                velocity_ = 1.0 * M_PI;
                acceleration_ = 5.0 * M_PI;
                executeJointMotion(target_position_, velocity_, acceleration_);
                break;
            case '7':
                saveCurrentCartesianPositions();
                break;
            case '8':
                moveToSavedCartesianPosition();
                break;
            case '9':
                saveCurrentJointPositions();
                break;     
            case '0':
                moveToSavedJointPosition();
                break;
            default:
                break;          
        }
    }

    void timerCallback()
    {
        char key = getKeyboardInput();
        if(key != 0){
            handleKeyPress(key);
        }
    }

    void executeJointMotion(const std::vector<float>& target_position, const float velocity, const float acceleration)
    {
        auto request = std::make_shared<duco_msg::srv::RobotMove_Request>();
        request->command = "movej2";
        request->arm_num = 0;
        request->p = {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f};
        request->q = target_position;
        request->v = velocity;
        request->a = acceleration;
        request->r = 0.0f;
        request->tool = "default";
        request->wobj = "default";
        request->block = true;

        using ServiceResponseFuture = 
            rclcpp::Client<duco_msg::srv::RobotMove>::SharedFuture;
        
        auto response_received_callback = [this](ServiceResponseFuture future){
            try {
                auto response = future.get();
                RCLCPP_INFO(this->get_logger(), 
                    "机器人运动完成，响应: '%s'", response->response.c_str());
                // 运动完成，准备接收下一个目标
                RCLCPP_INFO(this->get_logger(), "等待下一个目标...");               
            } catch (const std::exception& e) {
                RCLCPP_ERROR(this->get_logger(), "机器人运动失败: %s", e.what());
            }
        };
        // 异步发送运动请求
        client_->async_send_request(request, response_received_callback);
    }

    void executeCartesianMotion(const std::vector<float>& target_position, const float velocity, const float acceleration)
    {
        auto request = std::make_shared<duco_msg::srv::RobotMove_Request>();
        request->command = "movejpose2";
        request->arm_num = 0;
        request->p = target_position;
        request->q = {1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f};
        request->v = velocity;
        request->a = acceleration;
        request->r = 0.0f;
        request->tool = "default";
        request->wobj = "default";
        request->block = true;

        using ServiceResponseFuture = 
            rclcpp::Client<duco_msg::srv::RobotMove>::SharedFuture;
        
        auto response_received_callback = [this](ServiceResponseFuture future){
            try {
                auto response = future.get();
                RCLCPP_INFO(this->get_logger(), 
                    "机器人运动完成，响应: '%s'", response->response.c_str());
                // 运动完成，准备接收下一个目标
                RCLCPP_INFO(this->get_logger(), "等待下一个目标...");               
            } catch (const std::exception& e) {
                RCLCPP_ERROR(this->get_logger(), "机器人运动失败: %s", e.what());
            }
        };
        // 异步发送运动请求
        client_->async_send_request(request, response_received_callback);
    }

    void executeRobotMotion(const std::vector<float>& target_position, const std::string command, const float velocity, const float acceleration) {
        RCLCPP_INFO(this->get_logger(), "开始执行机器人运动...");
        
        auto request = std::make_shared<duco_msg::srv::RobotMove::Request>();
        request->command = command;
        request->arm_num = 0;
        request->p = target_position;
        request->q = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
        request->v = velocity;    
        request->a = acceleration;       
        request->r = 0.0f;      
        request->tool = "default";
        request->wobj = "default";
        request->block = true; 
        
        using ServiceResponseFuture = 
            rclcpp::Client<duco_msg::srv::RobotMove>::SharedFuture;
            
        auto start_time = std::chrono::steady_clock::now();

        auto response_received_callback = [this, start_time](ServiceResponseFuture future){
            try {
                auto response = future.get();
                auto end_time = std::chrono::steady_clock::now();
        
                // 计算运动耗时
                auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
        
                RCLCPP_INFO(this->get_logger(), "机器人运动完成，响应: '%s'", response->response.c_str());
                RCLCPP_INFO(this->get_logger(), "运动耗时: %ld ms", elapsed);
                // 运动完成，准备接收下一个目标
                RCLCPP_INFO(this->get_logger(), "等待下一个目标...");               
            } catch (const std::exception& e) {
                RCLCPP_ERROR(this->get_logger(), "机器人运动失败: %s", e.what());
            }
        };
        // 异步发送运动请求
        client_->async_send_request(request, response_received_callback);
    }

    rclcpp::Client<duco_msg::srv::RobotMove>::SharedPtr client_;
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
    rclcpp::Subscription<duco_msg::msg::DucoRobotState>::SharedPtr duco_robot_state_sub_;
    rclcpp::TimerBase::SharedPtr timer_;

    std::vector<float> target_position_;
    std::string command_;
    float velocity_;
    float acceleration_;
    struct termios original_termios_;

    //关节状态相关
    sensor_msgs::msg::JointState::SharedPtr current_joint_state_;
    duco_msg::msg::DucoRobotState::SharedPtr current_duco_robot_state_;
    std::vector<float> saved_joint_positions_ = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    std::vector<float> saved_cartesian_positions_ = {0.0f, 0.0f, 0.0f, 0.0, 0.0f, 0.0f};
    bool has_saved_joint_position_;
    bool has_saved_cartesian_position_;
    //互斥锁保护关节状态数据
    mutable std::mutex joint_state_mutex_;
    mutable std::mutex duco_robot_state_mutex_;
};

int main(int argc, char const *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RobotMotionTest>());
    rclcpp::shutdown();
    return 0;
}