// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duco_msg:msg/VirtualServoPose.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__TRAITS_HPP_
#define DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duco_msg/msg/detail/virtual_servo_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace duco_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const VirtualServoPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: arm_group
  {
    out << "arm_group: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_group, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VirtualServoPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: arm_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_group: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_group, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VirtualServoPose & msg, bool use_flow_style = false)
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
  const duco_msg::msg::VirtualServoPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  duco_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duco_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const duco_msg::msg::VirtualServoPose & msg)
{
  return duco_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<duco_msg::msg::VirtualServoPose>()
{
  return "duco_msg::msg::VirtualServoPose";
}

template<>
inline const char * name<duco_msg::msg::VirtualServoPose>()
{
  return "duco_msg/msg/VirtualServoPose";
}

template<>
struct has_fixed_size<duco_msg::msg::VirtualServoPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<duco_msg::msg::VirtualServoPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<duco_msg::msg::VirtualServoPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__TRAITS_HPP_
