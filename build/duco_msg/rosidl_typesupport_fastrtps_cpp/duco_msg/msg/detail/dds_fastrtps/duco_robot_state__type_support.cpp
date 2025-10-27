// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from duco_msg:msg/DucoRobotState.idl
// generated code does not contain a copyright notice
#include "duco_msg/msg/detail/duco_robot_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "duco_msg/msg/detail/duco_robot_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace duco_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_duco_msg
cdr_serialize(
  const duco_msg::msg::DucoRobotState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_expect_position
  {
    cdr << ros_message.joint_expect_position;
  }
  // Member: joint_expect_velocity
  {
    cdr << ros_message.joint_expect_velocity;
  }
  // Member: joint_expect_accelera
  {
    cdr << ros_message.joint_expect_accelera;
  }
  // Member: joint_actual_position
  {
    cdr << ros_message.joint_actual_position;
  }
  // Member: joint_actual_velocity
  {
    cdr << ros_message.joint_actual_velocity;
  }
  // Member: joint_actual_accelera
  {
    cdr << ros_message.joint_actual_accelera;
  }
  // Member: joint_actual_current
  {
    cdr << ros_message.joint_actual_current;
  }
  // Member: joint_temperature
  {
    cdr << ros_message.joint_temperature;
  }
  // Member: driver_temperature
  {
    cdr << ros_message.driver_temperature;
  }
  // Member: cart_expect_position
  {
    cdr << ros_message.cart_expect_position;
  }
  // Member: cart_expect_velocity
  {
    cdr << ros_message.cart_expect_velocity;
  }
  // Member: cart_expect_accelera
  {
    cdr << ros_message.cart_expect_accelera;
  }
  // Member: cart_actual_position
  {
    cdr << ros_message.cart_actual_position;
  }
  // Member: cart_actual_velocity
  {
    cdr << ros_message.cart_actual_velocity;
  }
  // Member: cart_actual_accelera
  {
    cdr << ros_message.cart_actual_accelera;
  }
  // Member: slave_ready
  {
    cdr << ros_message.slave_ready;
  }
  // Member: collision
  cdr << (ros_message.collision ? true : false);
  // Member: collision_axis
  cdr << ros_message.collision_axis;
  // Member: emc_stop_signal
  cdr << (ros_message.emc_stop_signal ? true : false);
  // Member: robot_state
  cdr << ros_message.robot_state;
  // Member: robot_error
  cdr << ros_message.robot_error;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_duco_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  duco_msg::msg::DucoRobotState & ros_message)
{
  // Member: joint_expect_position
  {
    cdr >> ros_message.joint_expect_position;
  }

  // Member: joint_expect_velocity
  {
    cdr >> ros_message.joint_expect_velocity;
  }

  // Member: joint_expect_accelera
  {
    cdr >> ros_message.joint_expect_accelera;
  }

  // Member: joint_actual_position
  {
    cdr >> ros_message.joint_actual_position;
  }

  // Member: joint_actual_velocity
  {
    cdr >> ros_message.joint_actual_velocity;
  }

  // Member: joint_actual_accelera
  {
    cdr >> ros_message.joint_actual_accelera;
  }

  // Member: joint_actual_current
  {
    cdr >> ros_message.joint_actual_current;
  }

  // Member: joint_temperature
  {
    cdr >> ros_message.joint_temperature;
  }

  // Member: driver_temperature
  {
    cdr >> ros_message.driver_temperature;
  }

  // Member: cart_expect_position
  {
    cdr >> ros_message.cart_expect_position;
  }

  // Member: cart_expect_velocity
  {
    cdr >> ros_message.cart_expect_velocity;
  }

  // Member: cart_expect_accelera
  {
    cdr >> ros_message.cart_expect_accelera;
  }

  // Member: cart_actual_position
  {
    cdr >> ros_message.cart_actual_position;
  }

  // Member: cart_actual_velocity
  {
    cdr >> ros_message.cart_actual_velocity;
  }

  // Member: cart_actual_accelera
  {
    cdr >> ros_message.cart_actual_accelera;
  }

  // Member: slave_ready
  {
    cdr >> ros_message.slave_ready;
  }

  // Member: collision
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.collision = tmp ? true : false;
  }

  // Member: collision_axis
  cdr >> ros_message.collision_axis;

  // Member: emc_stop_signal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emc_stop_signal = tmp ? true : false;
  }

  // Member: robot_state
  cdr >> ros_message.robot_state;

  // Member: robot_error
  cdr >> ros_message.robot_error;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_duco_msg
get_serialized_size(
  const duco_msg::msg::DucoRobotState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_expect_position
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_expect_position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_expect_velocity
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_expect_velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_expect_accelera
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_expect_accelera[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_actual_position
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_actual_position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_actual_velocity
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_actual_velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_actual_accelera
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_actual_accelera[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_actual_current
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_actual_current[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_temperature
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_temperature
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.driver_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_expect_position
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.cart_expect_position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_expect_velocity
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.cart_expect_velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_expect_accelera
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.cart_expect_accelera[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_actual_position
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.cart_actual_position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_actual_velocity
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.cart_actual_velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_actual_accelera
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.cart_actual_accelera[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slave_ready
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.slave_ready[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: collision
  {
    size_t item_size = sizeof(ros_message.collision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: collision_axis
  {
    size_t item_size = sizeof(ros_message.collision_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emc_stop_signal
  {
    size_t item_size = sizeof(ros_message.emc_stop_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_state
  {
    size_t item_size = sizeof(ros_message.robot_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_error
  {
    size_t item_size = sizeof(ros_message.robot_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_duco_msg
max_serialized_size_DucoRobotState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: joint_expect_position
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_expect_velocity
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_expect_accelera
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_actual_position
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_actual_velocity
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_actual_accelera
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_actual_current
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_temperature
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: driver_temperature
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_expect_position
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_expect_velocity
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_expect_accelera
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_actual_position
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_actual_velocity
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_actual_accelera
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: slave_ready
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: collision
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: collision_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emc_stop_signal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: robot_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: robot_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = duco_msg::msg::DucoRobotState;
    is_plain =
      (
      offsetof(DataType, robot_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DucoRobotState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const duco_msg::msg::DucoRobotState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DucoRobotState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<duco_msg::msg::DucoRobotState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DucoRobotState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const duco_msg::msg::DucoRobotState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DucoRobotState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DucoRobotState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DucoRobotState__callbacks = {
  "duco_msg::msg",
  "DucoRobotState",
  _DucoRobotState__cdr_serialize,
  _DucoRobotState__cdr_deserialize,
  _DucoRobotState__get_serialized_size,
  _DucoRobotState__max_serialized_size
};

static rosidl_message_type_support_t _DucoRobotState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DucoRobotState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace duco_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_duco_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<duco_msg::msg::DucoRobotState>()
{
  return &duco_msg::msg::typesupport_fastrtps_cpp::_DucoRobotState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, duco_msg, msg, DucoRobotState)() {
  return &duco_msg::msg::typesupport_fastrtps_cpp::_DucoRobotState__handle;
}

#ifdef __cplusplus
}
#endif
