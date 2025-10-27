// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duco_msg:srv/Grippers.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__GRIPPERS__TRAITS_HPP_
#define DUCO_MSG__SRV__DETAIL__GRIPPERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duco_msg/srv/detail/grippers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace duco_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const Grippers_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
    out << ", ";
  }

  // member: force
  {
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Grippers_Request & msg,
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

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
    out << "\n";
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grippers_Request & msg, bool use_flow_style = false)
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
  const duco_msg::srv::Grippers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  duco_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duco_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const duco_msg::srv::Grippers_Request & msg)
{
  return duco_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<duco_msg::srv::Grippers_Request>()
{
  return "duco_msg::srv::Grippers_Request";
}

template<>
inline const char * name<duco_msg::srv::Grippers_Request>()
{
  return "duco_msg/srv/Grippers_Request";
}

template<>
struct has_fixed_size<duco_msg::srv::Grippers_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<duco_msg::srv::Grippers_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<duco_msg::srv::Grippers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace duco_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const Grippers_Response & msg,
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
  const Grippers_Response & msg,
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

inline std::string to_yaml(const Grippers_Response & msg, bool use_flow_style = false)
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
  const duco_msg::srv::Grippers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  duco_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duco_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const duco_msg::srv::Grippers_Response & msg)
{
  return duco_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<duco_msg::srv::Grippers_Response>()
{
  return "duco_msg::srv::Grippers_Response";
}

template<>
inline const char * name<duco_msg::srv::Grippers_Response>()
{
  return "duco_msg/srv/Grippers_Response";
}

template<>
struct has_fixed_size<duco_msg::srv::Grippers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<duco_msg::srv::Grippers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<duco_msg::srv::Grippers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<duco_msg::srv::Grippers>()
{
  return "duco_msg::srv::Grippers";
}

template<>
inline const char * name<duco_msg::srv::Grippers>()
{
  return "duco_msg/srv/Grippers";
}

template<>
struct has_fixed_size<duco_msg::srv::Grippers>
  : std::integral_constant<
    bool,
    has_fixed_size<duco_msg::srv::Grippers_Request>::value &&
    has_fixed_size<duco_msg::srv::Grippers_Response>::value
  >
{
};

template<>
struct has_bounded_size<duco_msg::srv::Grippers>
  : std::integral_constant<
    bool,
    has_bounded_size<duco_msg::srv::Grippers_Request>::value &&
    has_bounded_size<duco_msg::srv::Grippers_Response>::value
  >
{
};

template<>
struct is_service<duco_msg::srv::Grippers>
  : std::true_type
{
};

template<>
struct is_service_request<duco_msg::srv::Grippers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<duco_msg::srv::Grippers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DUCO_MSG__SRV__DETAIL__GRIPPERS__TRAITS_HPP_
