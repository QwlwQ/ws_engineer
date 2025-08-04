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
#include "sensor_msgs/msg/joint_state.hpp"

// 3.自定义节点类；
class JointStateReader: public rclcpp::Node{
public:
    JointStateReader():Node("joint_state_reader_node_cpp"){
        subscription_ = this->create_subscription<sensor_msgs::msg::JointState>(
            "/joint_states",
            10,
            std::bind(&JointStateReader::joint_state_callback, this, std::placeholders::_1)
        );
    }
private:
    void joint_state_callback(const sensor_msgs::msg::JointState::SharedPtr msg){
        RCLCPP_INFO(this->get_logger(), "关节角度：");
        for(size_t i = 0; i < msg->position.size(); i++)
        {
            RCLCPP_INFO(this->get_logger(), "Joint %zu: %f", i, msg->position[i]*57.32f);
        }
    }
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr subscription_;
};

int main(int argc, char const *argv[])
{
   // 2.初始化ROS2客户端；
   rclcpp::init(argc, argv);
   // 4.调用spin函数，并传入节点对象指针；
   rclcpp::spin(std::make_shared<JointStateReader>());
   // 5.资源释放。
   rclcpp::shutdown();
   return 0;
}
