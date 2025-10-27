// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duco_msg:srv/RobotControl.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__ROBOT_CONTROL__TRAITS_HPP_
#define DUCO_MSG__SRV__DETAIL__ROBOT_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duco_msg/srv/detail/robot_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace duco_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: arm_num
  {
    out << "arm_num: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_num, out);
    out << ", ";
  }

  // member: block
  {
    out << "block: ";
    rosidl_generator_traits::value_to_yaml(msg.block, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: arm_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_num: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_num, out);
    out << "\n";
  }

  // member: block
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "block: ";
    rosidl_generator_traits::value_to_yaml(msg.block, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotControl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace duco_msg

namespace rosidl_generator_traits
{

[[deprecated("use duco_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const duco_msg::srv::RobotControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  duco_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duco_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const duco_msg::srv::RobotControl_Request & msg)
{
  return duco_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<duco_msg::srv::RobotControl_Request>()
{
  return "duco_msg::srv::RobotControl_Request";
}

template<>
inline const char * name<duco_msg::srv::RobotControl_Request>()
{
  return "duco_msg/srv/RobotControl_Request";
}

template<>
struct has_fixed_size<duco_msg::srv::RobotControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<duco_msg::srv::RobotControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<duco_msg::srv::RobotControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace duco_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotControl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace duco_msg

namespace rosidl_generator_traits
{

[[deprecated("use duco_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const duco_msg::srv::RobotControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  duco_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duco_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const duco_msg::srv::RobotControl_Response & msg)
{
  return duco_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<duco_msg::srv::RobotControl_Response>()
{
  return "duco_msg::srv::RobotControl_Response";
}

template<>
inline const char * name<duco_msg::srv::RobotControl_Response>()
{
  return "duco_msg/srv/RobotControl_Response";
}

template<>
struct has_fixed_size<duco_msg::srv::RobotControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<duco_msg::srv::RobotControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<duco_msg::srv::RobotControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<duco_msg::srv::RobotControl>()
{
  return "duco_msg::srv::RobotControl";
}

template<>
inline const char * name<duco_msg::srv::RobotControl>()
{
  return "duco_msg/srv/RobotControl";
}

template<>
struct has_fixed_size<duco_msg::srv::RobotControl>
  : std::integral_constant<
    bool,
    has_fixed_size<duco_msg::srv::RobotControl_Request>::value &&
    has_fixed_size<duco_msg::srv::RobotControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<duco_msg::srv::RobotControl>
  : std::integral_constant<
    bool,
    has_bounded_size<duco_msg::srv::RobotControl_Request>::value &&
    has_bounded_size<duco_msg::srv::RobotControl_Response>::value
  >
{
};

template<>
struct is_service<duco_msg::srv::RobotControl>
  : std::true_type
{
};

template<>
struct is_service_request<duco_msg::srv::RobotControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<duco_msg::srv::RobotControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DUCO_MSG__SRV__DETAIL__ROBOT_CONTROL__TRAITS_HPP_
