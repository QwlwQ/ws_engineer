/*
   需求：
   流程：
    1.包含头文件；
    2.初始化ROS2客户端；
    3.自定义节点类；
      
    4.调用spin函数，并传入节点对象指针；
    5.资源释放。
*/
// 1.包含头文件；
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "base_interfaces/msg/user_pose.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "engineer_protocol/uart_serial_driver.hpp"

//关节角度
using sensor_msgs::msg::JointState;
//末端执行器位姿接口
using base_interfaces::msg::UserPose;
//占位
using std::placeholders::_1;

//串口端口
uart::SerialPort serial_ = uart::SerialPort(1);

// 3.自定义节点类；
class UartSerial: public rclcpp::Node{
public:
  UartSerial():Node("uart_serial_node_cpp"){
    subscription_ = this->create_subscription<JointState>("/joint_states", 10, 
                                                          std::bind(&UartSerial::joint_state_callback, this, _1));
    publisher_ = this->create_publisher<UserPose>("/ee_pose", 10);
    timer_ = this->create_wall_timer(
      std::chrono::milliseconds(100),  // 每100ms运行一次
      std::bind(&UartSerial::run_loop, this)
    );
  }
  void run_loop(){
    serial_.updateReceiveInformation();
    auto pose = UserPose();
    pose.x   = serial_.returnReceive().x;
    pose.y   = serial_.returnReceive().y;
    pose.z   = serial_.returnReceive().z;
    RCLCPP_INFO(this->get_logger(), "\nx = %f\n y = %f\n z = %f\n", 100.0*pose.x, 100.0f*pose.y, 100.0*pose.z);
    pose.yaw   = serial_.returnReceive().yaw;
    pose.pitch = serial_.returnReceive().pitch;
    pose.roll  = serial_.returnReceive().roll;
    publisher_->publish(pose);
  }

private:
  void joint_state_callback(const JointState::SharedPtr msg){
    // RCLCPP_INFO(this->get_logger(), "关节角度：");
    // for(size_t i = 0; i < msg->position.size(); i++)
    // {
    //     RCLCPP_INFO(this->get_logger(), "Joint %zu: %f", i, msg->position[i]*57.32f);
    // } 
    // RCLCPP_INFO(this->get_logger(), "Joint %zu: %f", 0, msg->position[0]*57.32f);
    // RCLCPP_INFO(this->get_logger(), "Joint %zu: %f", 1, msg->position[3]*57.32f);
    // RCLCPP_INFO(this->get_logger(), "Joint %zu: %f", 2, msg->position[1]*57.32f);
    // RCLCPP_INFO(this->get_logger(), "Joint %zu: %f", 3, msg->position[2]*57.32f);
    // RCLCPP_INFO(this->get_logger(), "Joint %zu: %f", 4, msg->position[4]*57.32f);
    // RCLCPP_INFO(this->get_logger(), "Joint %zu: %f", 5, msg->position[5]*57.32f);
    serial_.updataWriteData(msg->position[0]*57.32f,
                            msg->position[1]*57.32f,
                            msg->position[2]*57.32f,
                            msg->position[3]*57.32f,
                            msg->position[4]*57.32f,
                            msg->position[5]*57.32f
                           );
  }

  rclcpp::Subscription<JointState>::SharedPtr subscription_;
  rclcpp::Publisher<UserPose>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char const *argv[])
{
  // 2.初始化ROS2客户端；
  rclcpp::init(argc, argv);
  // 4.调用spin函数，并传入节点对象指针；
  auto node = std::make_shared<UartSerial>();
  rclcpp::spin(node);
  // 5.资源释放
  rclcpp::shutdown();
  return 0;
}