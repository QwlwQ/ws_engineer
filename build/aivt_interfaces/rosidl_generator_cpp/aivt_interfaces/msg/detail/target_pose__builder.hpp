// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aivt_interfaces:msg/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef AIVT_INTERFACES__MSG__DETAIL__TARGET_POSE__BUILDER_HPP_
#define AIVT_INTERFACES__MSG__DETAIL__TARGET_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aivt_interfaces/msg/detail/target_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aivt_interfaces
{

namespace msg
{

namespace builder
{

class Init_TargetPose_target_pose
{
public:
  Init_TargetPose_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aivt_interfaces::msg::TargetPose target_pose(::aivt_interfaces::msg::TargetPose::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aivt_interfaces::msg::TargetPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aivt_interfaces::msg::TargetPose>()
{
  return aivt_interfaces::msg::builder::Init_TargetPose_target_pose();
}

}  // namespace aivt_interfaces

#endif  // AIVT_INTERFACES__MSG__DETAIL__TARGET_POSE__BUILDER_HPP_
