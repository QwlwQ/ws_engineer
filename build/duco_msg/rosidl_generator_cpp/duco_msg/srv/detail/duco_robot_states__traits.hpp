// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duco_msg:srv/DucoRobotStates.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__DUCO_ROBOT_STATES__TRAITS_HPP_
#define DUCO_MSG__SRV__DETAIL__DUCO_ROBOT_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duco_msg/srv/detail/duco_robot_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace duco_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const DucoRobotStates_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DucoRobotStates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DucoRobotStates_Request & msg, bool use_flow_style = false)
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
  const duco_msg::srv::DucoRobotStates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  duco_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duco_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const duco_msg::srv::DucoRobotStates_Request & msg)
{
  return duco_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<duco_msg::srv::DucoRobotStates_Request>()
{
  return "duco_msg::srv::DucoRobotStates_Request";
}

template<>
inline const char * name<duco_msg::srv::DucoRobotStates_Request>()
{
  return "duco_msg/srv/DucoRobotStates_Request";
}

template<>
struct has_fixed_size<duco_msg::srv::DucoRobotStates_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<duco_msg::srv::DucoRobotStates_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<duco_msg::srv::DucoRobotStates_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'robot_states'
#include "duco_msg/msg/detail/duco_robot_state__traits.hpp"

namespace duco_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const DucoRobotStates_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_states
  {
    out << "robot_states: ";
    to_flow_style_yaml(msg.robot_states, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DucoRobotStates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_states:\n";
    to_block_style_yaml(msg.robot_states, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DucoRobotStates_Response & msg, bool use_flow_style = false)
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
  const duco_msg::srv::DucoRobotStates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  duco_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duco_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const duco_msg::srv::DucoRobotStates_Response & msg)
{
  return duco_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<duco_msg::srv::DucoRobotStates_Response>()
{
  return "duco_msg::srv::DucoRobotStates_Response";
}

template<>
inline const char * name<duco_msg::srv::DucoRobotStates_Response>()
{
  return "duco_msg/srv/DucoRobotStates_Response";
}

template<>
struct has_fixed_size<duco_msg::srv::DucoRobotStates_Response>
  : std::integral_constant<bool, has_fixed_size<duco_msg::msg::DucoRobotState>::value> {};

template<>
struct has_bounded_size<duco_msg::srv::DucoRobotStates_Response>
  : std::integral_constant<bool, has_bounded_size<duco_msg::msg::DucoRobotState>::value> {};

template<>
struct is_message<duco_msg::srv::DucoRobotStates_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<duco_msg::srv::DucoRobotStates>()
{
  return "duco_msg::srv::DucoRobotStates";
}

template<>
inline const char * name<duco_msg::srv::DucoRobotStates>()
{
  return "duco_msg/srv/DucoRobotStates";
}

template<>
struct has_fixed_size<duco_msg::srv::DucoRobotStates>
  : std::integral_constant<
    bool,
    has_fixed_size<duco_msg::srv::DucoRobotStates_Request>::value &&
    has_fixed_size<duco_msg::srv::DucoRobotStates_Response>::value
  >
{
};

template<>
struct has_bounded_size<duco_msg::srv::DucoRobotStates>
  : std::integral_constant<
    bool,
    has_bounded_size<duco_msg::srv::DucoRobotStates_Request>::value &&
    has_bounded_size<duco_msg::srv::DucoRobotStates_Response>::value
  >
{
};

template<>
struct is_service<duco_msg::srv::DucoRobotStates>
  : std::true_type
{
};

template<>
struct is_service_request<duco_msg::srv::DucoRobotStates_Request>
  : std::true_type
{
};

template<>
struct is_service_response<duco_msg::srv::DucoRobotStates_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DUCO_MSG__SRV__DETAIL__DUCO_ROBOT_STATES__TRAITS_HPP_
