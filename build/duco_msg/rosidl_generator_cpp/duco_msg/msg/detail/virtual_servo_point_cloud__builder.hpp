// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duco_msg:msg/VirtualServoPointCloud.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POINT_CLOUD__BUILDER_HPP_
#define DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POINT_CLOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duco_msg/msg/detail/virtual_servo_point_cloud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duco_msg
{

namespace msg
{

namespace builder
{

class Init_VirtualServoPointCloud_point_cloud
{
public:
  explicit Init_VirtualServoPointCloud_point_cloud(::duco_msg::msg::VirtualServoPointCloud & msg)
  : msg_(msg)
  {}
  ::duco_msg::msg::VirtualServoPointCloud point_cloud(::duco_msg::msg::VirtualServoPointCloud::_point_cloud_type arg)
  {
    msg_.point_cloud = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::msg::VirtualServoPointCloud msg_;
};

class Init_VirtualServoPointCloud_image
{
public:
  Init_VirtualServoPointCloud_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualServoPointCloud_point_cloud image(::duco_msg::msg::VirtualServoPointCloud::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_VirtualServoPointCloud_point_cloud(msg_);
  }

private:
  ::duco_msg::msg::VirtualServoPointCloud msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::msg::VirtualServoPointCloud>()
{
  return duco_msg::msg::builder::Init_VirtualServoPointCloud_image();
}

}  // namespace duco_msg

#endif  // DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POINT_CLOUD__BUILDER_HPP_
