// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duco_msg:msg/VirtualServoPointCloud.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POINT_CLOUD__TRAITS_HPP_
#define DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POINT_CLOUD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duco_msg/msg/detail/virtual_servo_point_cloud__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace duco_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const VirtualServoPointCloud & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: point_cloud
  {
    out << "point_cloud: ";
    to_flow_style_yaml(msg.point_cloud, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VirtualServoPointCloud & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: point_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_cloud:\n";
    to_block_style_yaml(msg.point_cloud, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VirtualServoPointCloud & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace duco_msg

namespace rosidl_generator_traits
{

[[deprecated("use duco_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const duco_msg::msg::VirtualServoPointCloud & msg,
  std::ostream & out, size_t indentation = 0)
{
  duco_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duco_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const duco_msg::msg::VirtualServoPointCloud & msg)
{
  return duco_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<duco_msg::msg::VirtualServoPointCloud>()
{
  return "duco_msg::msg::VirtualServoPointCloud";
}

template<>
inline const char * name<duco_msg::msg::VirtualServoPointCloud>()
{
  return "duco_msg/msg/VirtualServoPointCloud";
}

template<>
struct has_fixed_size<duco_msg::msg::VirtualServoPointCloud>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<duco_msg::msg::VirtualServoPointCloud>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<duco_msg::msg::VirtualServoPointCloud>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POINT_CLOUD__TRAITS_HPP_
