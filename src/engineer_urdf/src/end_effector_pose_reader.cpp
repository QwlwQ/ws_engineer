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


//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//这个节点有问题，暂时没有解决，不要使用！！！
#include "rclcpp/rclcpp.hpp"
#include "moveit/move_group_interface/move_group_interface.h"
// 3.自定义节点类；
class EndEffectorPoseReader: public rclcpp::Node{
public:
    EndEffectorPoseReader():Node("end_effector_pose_node_cpp"){
        timer_ = this->create_wall_timer(std::chrono::seconds(1), 
                                         std::bind(&EndEffectorPoseReader::getPose, this));
    }
    void initializeMoveGroup(){
        move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(shared_from_this(), "hand");
    }
private:
    void getPose()
    {
        if (!move_group_) {
            RCLCPP_ERROR(this->get_logger(), "MoveGroupInterface is not initialized!");
            return;
        }
        auto pose = move_group_->getCurrentPose();
        RCLCPP_INFO(this->get_logger(), "位置：x=%.3f, y=%.3f, z=%.3f", pose.pose.position.x, pose.pose.position.y, pose.pose.position.z);
        RCLCPP_INFO(this->get_logger(), "方向：x=%.3f, y=%.3f, z=%.3f, w=%.3f", pose.pose.orientation.x, pose.pose.orientation.y, pose.pose.orientation.z, pose.pose.orientation.w);
    }
    std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char const *argv[])
{
   // 2.初始化ROS2客户端；
   rclcpp::init(argc, argv);
   // 4.调用spin函数，并传入节点对象指针；
   auto node = std::make_shared<EndEffectorPoseReader>();
   node->initializeMoveGroup();
   rclcpp::spin(node);
   // 5.资源释放。
   rclcpp::shutdown();
   return 0;
}