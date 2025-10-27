// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duco_msg:srv/PoseEstimation.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__POSE_ESTIMATION__TRAITS_HPP_
#define DUCO_MSG__SRV__DETAIL__POSE_ESTIMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duco_msg/srv/detail/pose_estimation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace duco_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const PoseEstimation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseEstimation_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseEstimation_Request & msg, bool use_flow_style = false)
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
  const duco_msg::srv::PoseEstimation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  duco_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duco_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const duco_msg::srv::PoseEstimation_Request & msg)
{
  return duco_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<duco_msg::srv::PoseEstimation_Request>()
{
  return "duco_msg::srv::PoseEstimation_Request";
}

template<>
inline const char * name<duco_msg::srv::PoseEstimation_Request>()
{
  return "duco_msg/srv/PoseEstimation_Request";
}

template<>
struct has_fixed_size<duco_msg::srv::PoseEstimation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<duco_msg::srv::PoseEstimation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<duco_msg::srv::PoseEstimation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose_all'
// Member 'pose_pick'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace duco_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const PoseEstimation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << ", ";
  }

  // member: pose_all
  {
    if (msg.pose_all.size() == 0) {
      out << "pose_all: []";
    } else {
      out << "pose_all: [";
      size_t pending_items = msg.pose_all.size();
      for (auto item : msg.pose_all) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pose_pick
  {
    if (msg.pose_pick.size() == 0) {
      out << "pose_pick: []";
    } else {
      out << "pose_pick: [";
      size_t pending_items = msg.pose_pick.size();
      for (auto item : msg.pose_pick) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: center
  {
    if (msg.center.size() == 0) {
      out << "center: []";
    } else {
      out << "center: [";
      size_t pending_items = msg.center.size();
      for (auto item : msg.center) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: size
  {
    if (msg.size.size() == 0) {
      out << "size: []";
    } else {
      out << "size: [";
      size_t pending_items = msg.size.size();
      for (auto item : msg.size) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: server_id
  {
    out << "server_id: ";
    rosidl_generator_traits::value_to_yaml(msg.server_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseEstimation_Response & msg,
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

  // member: pose_all
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_all.size() == 0) {
      out << "pose_all: []\n";
    } else {
      out << "pose_all:\n";
      for (auto item : msg.pose_all) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pose_pick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_pick.size() == 0) {
      out << "pose_pick: []\n";
    } else {
      out << "pose_pick:\n";
      for (auto item : msg.pose_pick) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.center.size() == 0) {
      out << "center: []\n";
    } else {
      out << "center:\n";
      for (auto item : msg.center) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.size.size() == 0) {
      out << "size: []\n";
    } else {
      out << "size:\n";
      for (auto item : msg.size) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: server_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "server_id: ";
    rosidl_generator_traits::value_to_yaml(msg.server_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseEstimation_Response & msg, bool use_flow_style = false)
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
  const duco_msg::srv::PoseEstimation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  duco_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duco_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const duco_msg::srv::PoseEstimation_Response & msg)
{
  return duco_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<duco_msg::srv::PoseEstimation_Response>()
{
  return "duco_msg::srv::PoseEstimation_Response";
}

template<>
inline const char * name<duco_msg::srv::PoseEstimation_Response>()
{
  return "duco_msg/srv/PoseEstimation_Response";
}

template<>
struct has_fixed_size<duco_msg::srv::PoseEstimation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<duco_msg::srv::PoseEstimation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<duco_msg::srv::PoseEstimation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<duco_msg::srv::PoseEstimation>()
{
  return "duco_msg::srv::PoseEstimation";
}

template<>
inline const char * name<duco_msg::srv::PoseEstimation>()
{
  return "duco_msg/srv/PoseEstimation";
}

template<>
struct has_fixed_size<duco_msg::srv::PoseEstimation>
  : std::integral_constant<
    bool,
    has_fixed_size<duco_msg::srv::PoseEstimation_Request>::value &&
    has_fixed_size<duco_msg::srv::PoseEstimation_Response>::value
  >
{
};

template<>
struct has_bounded_size<duco_msg::srv::PoseEstimation>
  : std::integral_constant<
    bool,
    has_bounded_size<duco_msg::srv::PoseEstimation_Request>::value &&
    has_bounded_size<duco_msg::srv::PoseEstimation_Response>::value
  >
{
};

template<>
struct is_service<duco_msg::srv::PoseEstimation>
  : std::true_type
{
};

template<>
struct is_service_request<duco_msg::srv::PoseEstimation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<duco_msg::srv::PoseEstimation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DUCO_MSG__SRV__DETAIL__POSE_ESTIMATION__TRAITS_HPP_
