

//ros2 run tf2_ros static_transform_publisher 0 0 0.0 0 0 1.57 virtual_base base_link

#include "rclcpp/rclcpp.hpp"
//move_group相关库函数
#include <moveit/move_group_interface/move_group_interface.h>
//pose设置方面
#include <geometry_msgs/msg/pose_stamped.hpp>
//目标位姿自定义msg接口
#include "base_interfaces/msg/user_pose.hpp"


using base_interfaces::msg::UserPose;
using geometry_msgs::msg::Pose;
using moveit::planning_interface::MoveGroupInterface;
using std::placeholders::_1;

class MoveController: public rclcpp::Node{
public:
    MoveController():Node("move_controller_node"){
        RCLCPP_INFO(this->get_logger(), "move_controller_node");
        subscription_ = this->create_subscription<UserPose>(
            "/ee_pose",
            10,
            std::bind(&MoveController::end_efforter_callback, this, std::placeholders::_1)
        );
    }
    //接受目标位姿回调函数
    void end_efforter_callback(const UserPose::SharedPtr pose){
        target_pose.position.x = pose->x;
        target_pose.position.y = pose->y;
        target_pose.position.y = 0.1;
        target_pose.position.z = pose->z;
        target_pose.orientation.w = 1.0;
        doMotionPlanning();
    }
    //执行运动规划
    void doMotionPlanning()
    {
        //根据group的名字获取move_group
        MoveGroupInterface move_group(shared_from_this(), "arm_group");    
        RCLCPP_INFO(this->get_logger(), "%f, %f, %f\n", target_pose.position.x, target_pose.position.y, target_pose.position.z);
        move_group.setPoseTarget(target_pose);
        bool move_done_flag = false;
        if(!move_done_flag)
        {
            moveit::planning_interface::MoveGroupInterface::Plan plan;
            bool success = static_cast<bool>(move_group.plan(plan));
            if (success)
            {
              RCLCPP_INFO(this->get_logger(), "规划成功！执行中...");
              move_group.execute(plan);
              move_done_flag = true;
            }
            else
            {
              RCLCPP_ERROR(this->get_logger(), "规划失败！");
            }
        }
    }
private:
    Pose target_pose;
    rclcpp::Subscription<UserPose>::SharedPtr subscription_;
};


int main(int argc, char const *argv[])
{
    rclcpp::init(argc, argv);
    
    auto node = std::make_shared<MoveController>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

