// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aivt_interfaces:msg/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef AIVT_INTERFACES__MSG__DETAIL__TARGET_POSE__TRAITS_HPP_
#define AIVT_INTERFACES__MSG__DETAIL__TARGET_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aivt_interfaces/msg/detail/target_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aivt_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_pose
  {
    if (msg.target_pose.size() == 0) {
      out << "target_pose: []";
    } else {
      out << "target_pose: [";
      size_t pending_items = msg.target_pose.size();
      for (auto item : msg.target_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_pose.size() == 0) {
      out << "target_pose: []\n";
    } else {
      out << "target_pose:\n";
      for (auto item : msg.target_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetPose & msg, bool use_flow_style = false)
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

}  // namespace aivt_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aivt_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aivt_interfaces::msg::TargetPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  aivt_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aivt_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const aivt_interfaces::msg::TargetPose & msg)
{
  return aivt_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aivt_interfaces::msg::TargetPose>()
{
  return "aivt_interfaces::msg::TargetPose";
}

template<>
inline const char * name<aivt_interfaces::msg::TargetPose>()
{
  return "aivt_interfaces/msg/TargetPose";
}

template<>
struct has_fixed_size<aivt_interfaces::msg::TargetPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aivt_interfaces::msg::TargetPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aivt_interfaces::msg::TargetPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIVT_INTERFACES__MSG__DETAIL__TARGET_POSE__TRAITS_HPP_
