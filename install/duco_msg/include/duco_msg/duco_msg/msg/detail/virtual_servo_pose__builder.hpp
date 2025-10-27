// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duco_msg:msg/VirtualServoPose.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__BUILDER_HPP_
#define DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duco_msg/msg/detail/virtual_servo_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duco_msg
{

namespace msg
{

namespace builder
{

class Init_VirtualServoPose_arm_group
{
public:
  explicit Init_VirtualServoPose_arm_group(::duco_msg::msg::VirtualServoPose & msg)
  : msg_(msg)
  {}
  ::duco_msg::msg::VirtualServoPose arm_group(::duco_msg::msg::VirtualServoPose::_arm_group_type arg)
  {
    msg_.arm_group = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::msg::VirtualServoPose msg_;
};

class Init_VirtualServoPose_pose
{
public:
  Init_VirtualServoPose_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualServoPose_arm_group pose(::duco_msg::msg::VirtualServoPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_VirtualServoPose_arm_group(msg_);
  }

private:
  ::duco_msg::msg::VirtualServoPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::msg::VirtualServoPose>()
{
  return duco_msg::msg::builder::Init_VirtualServoPose_pose();
}

}  // namespace duco_msg

#endif  // DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__BUILDER_HPP_
