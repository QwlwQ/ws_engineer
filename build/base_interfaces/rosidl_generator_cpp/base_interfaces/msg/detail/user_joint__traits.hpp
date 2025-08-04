// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces:msg/UserJoint.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__MSG__DETAIL__USER_JOINT__TRAITS_HPP_
#define BASE_INTERFACES__MSG__DETAIL__USER_JOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_interfaces/msg/detail/user_joint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UserJoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint0
  {
    out << "joint0: ";
    rosidl_generator_traits::value_to_yaml(msg.joint0, out);
    out << ", ";
  }

  // member: joint1
  {
    out << "joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1, out);
    out << ", ";
  }

  // member: joint2
  {
    out << "joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2, out);
    out << ", ";
  }

  // member: joint3
  {
    out << "joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3, out);
    out << ", ";
  }

  // member: joint4
  {
    out << "joint4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint4, out);
    out << ", ";
  }

  // member: joint5
  {
    out << "joint5: ";
    rosidl_generator_traits::value_to_yaml(msg.joint5, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UserJoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint0: ";
    rosidl_generator_traits::value_to_yaml(msg.joint0, out);
    out << "\n";
  }

  // member: joint1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1, out);
    out << "\n";
  }

  // member: joint2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2, out);
    out << "\n";
  }

  // member: joint3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3, out);
    out << "\n";
  }

  // member: joint4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint4, out);
    out << "\n";
  }

  // member: joint5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint5: ";
    rosidl_generator_traits::value_to_yaml(msg.joint5, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UserJoint & msg, bool use_flow_style = false)
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

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::msg::UserJoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::msg::UserJoint & msg)
{
  return base_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::msg::UserJoint>()
{
  return "base_interfaces::msg::UserJoint";
}

template<>
inline const char * name<base_interfaces::msg::UserJoint>()
{
  return "base_interfaces/msg/UserJoint";
}

template<>
struct has_fixed_size<base_interfaces::msg::UserJoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces::msg::UserJoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces::msg::UserJoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES__MSG__DETAIL__USER_JOINT__TRAITS_HPP_
