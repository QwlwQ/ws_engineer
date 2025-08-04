// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces:msg/UserPose.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__MSG__DETAIL__USER_POSE__BUILDER_HPP_
#define BASE_INTERFACES__MSG__DETAIL__USER_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces/msg/detail/user_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces
{

namespace msg
{

namespace builder
{

class Init_UserPose_roll
{
public:
  explicit Init_UserPose_roll(::base_interfaces::msg::UserPose & msg)
  : msg_(msg)
  {}
  ::base_interfaces::msg::UserPose roll(::base_interfaces::msg::UserPose::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::msg::UserPose msg_;
};

class Init_UserPose_pitch
{
public:
  explicit Init_UserPose_pitch(::base_interfaces::msg::UserPose & msg)
  : msg_(msg)
  {}
  Init_UserPose_roll pitch(::base_interfaces::msg::UserPose::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_UserPose_roll(msg_);
  }

private:
  ::base_interfaces::msg::UserPose msg_;
};

class Init_UserPose_yaw
{
public:
  explicit Init_UserPose_yaw(::base_interfaces::msg::UserPose & msg)
  : msg_(msg)
  {}
  Init_UserPose_pitch yaw(::base_interfaces::msg::UserPose::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_UserPose_pitch(msg_);
  }

private:
  ::base_interfaces::msg::UserPose msg_;
};

class Init_UserPose_z
{
public:
  explicit Init_UserPose_z(::base_interfaces::msg::UserPose & msg)
  : msg_(msg)
  {}
  Init_UserPose_yaw z(::base_interfaces::msg::UserPose::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_UserPose_yaw(msg_);
  }

private:
  ::base_interfaces::msg::UserPose msg_;
};

class Init_UserPose_y
{
public:
  explicit Init_UserPose_y(::base_interfaces::msg::UserPose & msg)
  : msg_(msg)
  {}
  Init_UserPose_z y(::base_interfaces::msg::UserPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_UserPose_z(msg_);
  }

private:
  ::base_interfaces::msg::UserPose msg_;
};

class Init_UserPose_x
{
public:
  Init_UserPose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserPose_y x(::base_interfaces::msg::UserPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_UserPose_y(msg_);
  }

private:
  ::base_interfaces::msg::UserPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::msg::UserPose>()
{
  return base_interfaces::msg::builder::Init_UserPose_x();
}

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__MSG__DETAIL__USER_POSE__BUILDER_HPP_
