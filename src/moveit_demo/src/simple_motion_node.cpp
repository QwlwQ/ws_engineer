#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <geometry_msgs/msg/pose_stamped.hpp>

class SimpleMotionNode : public rclcpp::Node
{
public:
  SimpleMotionNode() : Node("simple_motion_node")
  {
    // 用 timer 延迟执行，避免 shared_from_this() 出错
    timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&SimpleMotionNode::doMotionPlanning, this));
  }

private:
  void doMotionPlanning()
  {
    timer_->cancel();  // 保证只执行一次

    moveit::planning_interface::MoveGroupInterface move_group(shared_from_this(), "arm_group");

    geometry_msgs::msg::Pose target_pose;
    target_pose.position.x = -0.4;
    target_pose.position.y = 0.2;
    target_pose.position.z = 0.37;
    target_pose.orientation.w = 1.0;

    move_group.setPoseTarget(target_pose);

    moveit::planning_interface::MoveGroupInterface::Plan plan;
    bool success = static_cast<bool>(move_group.plan(plan));
    if (success)
    {
      RCLCPP_INFO(this->get_logger(), "规划成功！执行中...");
      move_group.execute(plan);
    }
    else
    {
      RCLCPP_ERROR(this->get_logger(), "规划失败！");
    }
  }

  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SimpleMotionNode>());
  rclcpp::shutdown();
  return 0;
}
