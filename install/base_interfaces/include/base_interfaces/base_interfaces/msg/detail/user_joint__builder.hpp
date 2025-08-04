// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces:msg/UserJoint.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__MSG__DETAIL__USER_JOINT__BUILDER_HPP_
#define BASE_INTERFACES__MSG__DETAIL__USER_JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces/msg/detail/user_joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces
{

namespace msg
{

namespace builder
{

class Init_UserJoint_joint5
{
public:
  explicit Init_UserJoint_joint5(::base_interfaces::msg::UserJoint & msg)
  : msg_(msg)
  {}
  ::base_interfaces::msg::UserJoint joint5(::base_interfaces::msg::UserJoint::_joint5_type arg)
  {
    msg_.joint5 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::msg::UserJoint msg_;
};

class Init_UserJoint_joint4
{
public:
  explicit Init_UserJoint_joint4(::base_interfaces::msg::UserJoint & msg)
  : msg_(msg)
  {}
  Init_UserJoint_joint5 joint4(::base_interfaces::msg::UserJoint::_joint4_type arg)
  {
    msg_.joint4 = std::move(arg);
    return Init_UserJoint_joint5(msg_);
  }

private:
  ::base_interfaces::msg::UserJoint msg_;
};

class Init_UserJoint_joint3
{
public:
  explicit Init_UserJoint_joint3(::base_interfaces::msg::UserJoint & msg)
  : msg_(msg)
  {}
  Init_UserJoint_joint4 joint3(::base_interfaces::msg::UserJoint::_joint3_type arg)
  {
    msg_.joint3 = std::move(arg);
    return Init_UserJoint_joint4(msg_);
  }

private:
  ::base_interfaces::msg::UserJoint msg_;
};

class Init_UserJoint_joint2
{
public:
  explicit Init_UserJoint_joint2(::base_interfaces::msg::UserJoint & msg)
  : msg_(msg)
  {}
  Init_UserJoint_joint3 joint2(::base_interfaces::msg::UserJoint::_joint2_type arg)
  {
    msg_.joint2 = std::move(arg);
    return Init_UserJoint_joint3(msg_);
  }

private:
  ::base_interfaces::msg::UserJoint msg_;
};

class Init_UserJoint_joint1
{
public:
  explicit Init_UserJoint_joint1(::base_interfaces::msg::UserJoint & msg)
  : msg_(msg)
  {}
  Init_UserJoint_joint2 joint1(::base_interfaces::msg::UserJoint::_joint1_type arg)
  {
    msg_.joint1 = std::move(arg);
    return Init_UserJoint_joint2(msg_);
  }

private:
  ::base_interfaces::msg::UserJoint msg_;
};

class Init_UserJoint_joint0
{
public:
  Init_UserJoint_joint0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserJoint_joint1 joint0(::base_interfaces::msg::UserJoint::_joint0_type arg)
  {
    msg_.joint0 = std::move(arg);
    return Init_UserJoint_joint1(msg_);
  }

private:
  ::base_interfaces::msg::UserJoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::msg::UserJoint>()
{
  return base_interfaces::msg::builder::Init_UserJoint_joint0();
}

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__MSG__DETAIL__USER_JOINT__BUILDER_HPP_
