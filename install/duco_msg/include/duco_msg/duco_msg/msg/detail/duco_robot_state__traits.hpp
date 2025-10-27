// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duco_msg:msg/DucoRobotState.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__DUCO_ROBOT_STATE__TRAITS_HPP_
#define DUCO_MSG__MSG__DETAIL__DUCO_ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duco_msg/msg/detail/duco_robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace duco_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const DucoRobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_expect_position
  {
    if (msg.joint_expect_position.size() == 0) {
      out << "joint_expect_position: []";
    } else {
      out << "joint_expect_position: [";
      size_t pending_items = msg.joint_expect_position.size();
      for (auto item : msg.joint_expect_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_expect_velocity
  {
    if (msg.joint_expect_velocity.size() == 0) {
      out << "joint_expect_velocity: []";
    } else {
      out << "joint_expect_velocity: [";
      size_t pending_items = msg.joint_expect_velocity.size();
      for (auto item : msg.joint_expect_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_expect_accelera
  {
    if (msg.joint_expect_accelera.size() == 0) {
      out << "joint_expect_accelera: []";
    } else {
      out << "joint_expect_accelera: [";
      size_t pending_items = msg.joint_expect_accelera.size();
      for (auto item : msg.joint_expect_accelera) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_actual_position
  {
    if (msg.joint_actual_position.size() == 0) {
      out << "joint_actual_position: []";
    } else {
      out << "joint_actual_position: [";
      size_t pending_items = msg.joint_actual_position.size();
      for (auto item : msg.joint_actual_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_actual_velocity
  {
    if (msg.joint_actual_velocity.size() == 0) {
      out << "joint_actual_velocity: []";
    } else {
      out << "joint_actual_velocity: [";
      size_t pending_items = msg.joint_actual_velocity.size();
      for (auto item : msg.joint_actual_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_actual_accelera
  {
    if (msg.joint_actual_accelera.size() == 0) {
      out << "joint_actual_accelera: []";
    } else {
      out << "joint_actual_accelera: [";
      size_t pending_items = msg.joint_actual_accelera.size();
      for (auto item : msg.joint_actual_accelera) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_actual_current
  {
    if (msg.joint_actual_current.size() == 0) {
      out << "joint_actual_current: []";
    } else {
      out << "joint_actual_current: [";
      size_t pending_items = msg.joint_actual_current.size();
      for (auto item : msg.joint_actual_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_temperature
  {
    if (msg.joint_temperature.size() == 0) {
      out << "joint_temperature: []";
    } else {
      out << "joint_temperature: [";
      size_t pending_items = msg.joint_temperature.size();
      for (auto item : msg.joint_temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: driver_temperature
  {
    if (msg.driver_temperature.size() == 0) {
      out << "driver_temperature: []";
    } else {
      out << "driver_temperature: [";
      size_t pending_items = msg.driver_temperature.size();
      for (auto item : msg.driver_temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cart_expect_position
  {
    if (msg.cart_expect_position.size() == 0) {
      out << "cart_expect_position: []";
    } else {
      out << "cart_expect_position: [";
      size_t pending_items = msg.cart_expect_position.size();
      for (auto item : msg.cart_expect_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cart_expect_velocity
  {
    if (msg.cart_expect_velocity.size() == 0) {
      out << "cart_expect_velocity: []";
    } else {
      out << "cart_expect_velocity: [";
      size_t pending_items = msg.cart_expect_velocity.size();
      for (auto item : msg.cart_expect_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cart_expect_accelera
  {
    if (msg.cart_expect_accelera.size() == 0) {
      out << "cart_expect_accelera: []";
    } else {
      out << "cart_expect_accelera: [";
      size_t pending_items = msg.cart_expect_accelera.size();
      for (auto item : msg.cart_expect_accelera) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cart_actual_position
  {
    if (msg.cart_actual_position.size() == 0) {
      out << "cart_actual_position: []";
    } else {
      out << "cart_actual_position: [";
      size_t pending_items = msg.cart_actual_position.size();
      for (auto item : msg.cart_actual_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cart_actual_velocity
  {
    if (msg.cart_actual_velocity.size() == 0) {
      out << "cart_actual_velocity: []";
    } else {
      out << "cart_actual_velocity: [";
      size_t pending_items = msg.cart_actual_velocity.size();
      for (auto item : msg.cart_actual_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cart_actual_accelera
  {
    if (msg.cart_actual_accelera.size() == 0) {
      out << "cart_actual_accelera: []";
    } else {
      out << "cart_actual_accelera: [";
      size_t pending_items = msg.cart_actual_accelera.size();
      for (auto item : msg.cart_actual_accelera) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: slave_ready
  {
    if (msg.slave_ready.size() == 0) {
      out << "slave_ready: []";
    } else {
      out << "slave_ready: [";
      size_t pending_items = msg.slave_ready.size();
      for (auto item : msg.slave_ready) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: collision
  {
    out << "collision: ";
    rosidl_generator_traits::value_to_yaml(msg.collision, out);
    out << ", ";
  }

  // member: collision_axis
  {
    out << "collision_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_axis, out);
    out << ", ";
  }

  // member: emc_stop_signal
  {
    out << "emc_stop_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.emc_stop_signal, out);
    out << ", ";
  }

  // member: robot_state
  {
    out << "robot_state: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_state, out);
    out << ", ";
  }

  // member: robot_error
  {
    out << "robot_error: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DucoRobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_expect_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_expect_position.size() == 0) {
      out << "joint_expect_position: []\n";
    } else {
      out << "joint_expect_position:\n";
      for (auto item : msg.joint_expect_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_expect_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_expect_velocity.size() == 0) {
      out << "joint_expect_velocity: []\n";
    } else {
      out << "joint_expect_velocity:\n";
      for (auto item : msg.joint_expect_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_expect_accelera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_expect_accelera.size() == 0) {
      out << "joint_expect_accelera: []\n";
    } else {
      out << "joint_expect_accelera:\n";
      for (auto item : msg.joint_expect_accelera) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_actual_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_actual_position.size() == 0) {
      out << "joint_actual_position: []\n";
    } else {
      out << "joint_actual_position:\n";
      for (auto item : msg.joint_actual_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_actual_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_actual_velocity.size() == 0) {
      out << "joint_actual_velocity: []\n";
    } else {
      out << "joint_actual_velocity:\n";
      for (auto item : msg.joint_actual_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_actual_accelera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_actual_accelera.size() == 0) {
      out << "joint_actual_accelera: []\n";
    } else {
      out << "joint_actual_accelera:\n";
      for (auto item : msg.joint_actual_accelera) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_actual_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_actual_current.size() == 0) {
      out << "joint_actual_current: []\n";
    } else {
      out << "joint_actual_current:\n";
      for (auto item : msg.joint_actual_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_temperature.size() == 0) {
      out << "joint_temperature: []\n";
    } else {
      out << "joint_temperature:\n";
      for (auto item : msg.joint_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: driver_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.driver_temperature.size() == 0) {
      out << "driver_temperature: []\n";
    } else {
      out << "driver_temperature:\n";
      for (auto item : msg.driver_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cart_expect_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cart_expect_position.size() == 0) {
      out << "cart_expect_position: []\n";
    } else {
      out << "cart_expect_position:\n";
      for (auto item : msg.cart_expect_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cart_expect_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cart_expect_velocity.size() == 0) {
      out << "cart_expect_velocity: []\n";
    } else {
      out << "cart_expect_velocity:\n";
      for (auto item : msg.cart_expect_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cart_expect_accelera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cart_expect_accelera.size() == 0) {
      out << "cart_expect_accelera: []\n";
    } else {
      out << "cart_expect_accelera:\n";
      for (auto item : msg.cart_expect_accelera) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cart_actual_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cart_actual_position.size() == 0) {
      out << "cart_actual_position: []\n";
    } else {
      out << "cart_actual_position:\n";
      for (auto item : msg.cart_actual_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cart_actual_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cart_actual_velocity.size() == 0) {
      out << "cart_actual_velocity: []\n";
    } else {
      out << "cart_actual_velocity:\n";
      for (auto item : msg.cart_actual_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cart_actual_accelera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cart_actual_accelera.size() == 0) {
      out << "cart_actual_accelera: []\n";
    } else {
      out << "cart_actual_accelera:\n";
      for (auto item : msg.cart_actual_accelera) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: slave_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.slave_ready.size() == 0) {
      out << "slave_ready: []\n";
    } else {
      out << "slave_ready:\n";
      for (auto item : msg.slave_ready) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision: ";
    rosidl_generator_traits::value_to_yaml(msg.collision, out);
    out << "\n";
  }

  // member: collision_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_axis, out);
    out << "\n";
  }

  // member: emc_stop_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emc_stop_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.emc_stop_signal, out);
    out << "\n";
  }

  // member: robot_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_state: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_state, out);
    out << "\n";
  }

  // member: robot_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_error: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DucoRobotState & msg, bool use_flow_style = false)
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
  const duco_msg::msg::DucoRobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  duco_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duco_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const duco_msg::msg::DucoRobotState & msg)
{
  return duco_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<duco_msg::msg::DucoRobotState>()
{
  return "duco_msg::msg::DucoRobotState";
}

template<>
inline const char * name<duco_msg::msg::DucoRobotState>()
{
  return "duco_msg/msg/DucoRobotState";
}

template<>
struct has_fixed_size<duco_msg::msg::DucoRobotState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<duco_msg::msg::DucoRobotState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<duco_msg::msg::DucoRobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DUCO_MSG__MSG__DETAIL__DUCO_ROBOT_STATE__TRAITS_HPP_
