// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from duco_msg:msg/DucoRobotState.idl
// generated code does not contain a copyright notice
#include "duco_msg/msg/detail/duco_robot_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "duco_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "duco_msg/msg/detail/duco_robot_state__struct.h"
#include "duco_msg/msg/detail/duco_robot_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DucoRobotState__ros_msg_type = duco_msg__msg__DucoRobotState;

static bool _DucoRobotState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DucoRobotState__ros_msg_type * ros_message = static_cast<const _DucoRobotState__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_expect_position
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_expect_position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_expect_velocity
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_expect_velocity;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_expect_accelera
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_expect_accelera;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_actual_position
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_actual_position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_actual_velocity
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_actual_velocity;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_actual_accelera
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_actual_accelera;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_actual_current
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_actual_current;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_temperature
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_temperature;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: driver_temperature
  {
    size_t size = 7;
    auto array_ptr = ros_message->driver_temperature;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cart_expect_position
  {
    size_t size = 7;
    auto array_ptr = ros_message->cart_expect_position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cart_expect_velocity
  {
    size_t size = 7;
    auto array_ptr = ros_message->cart_expect_velocity;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cart_expect_accelera
  {
    size_t size = 7;
    auto array_ptr = ros_message->cart_expect_accelera;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cart_actual_position
  {
    size_t size = 7;
    auto array_ptr = ros_message->cart_actual_position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cart_actual_velocity
  {
    size_t size = 7;
    auto array_ptr = ros_message->cart_actual_velocity;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cart_actual_accelera
  {
    size_t size = 7;
    auto array_ptr = ros_message->cart_actual_accelera;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: slave_ready
  {
    size_t size = 7;
    auto array_ptr = ros_message->slave_ready;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: collision
  {
    cdr << (ros_message->collision ? true : false);
  }

  // Field name: collision_axis
  {
    cdr << ros_message->collision_axis;
  }

  // Field name: emc_stop_signal
  {
    cdr << (ros_message->emc_stop_signal ? true : false);
  }

  // Field name: robot_state
  {
    cdr << ros_message->robot_state;
  }

  // Field name: robot_error
  {
    cdr << ros_message->robot_error;
  }

  return true;
}

static bool _DucoRobotState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DucoRobotState__ros_msg_type * ros_message = static_cast<_DucoRobotState__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_expect_position
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_expect_position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_expect_velocity
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_expect_velocity;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_expect_accelera
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_expect_accelera;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_actual_position
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_actual_position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_actual_velocity
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_actual_velocity;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_actual_accelera
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_actual_accelera;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_actual_current
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_actual_current;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_temperature
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_temperature;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: driver_temperature
  {
    size_t size = 7;
    auto array_ptr = ros_message->driver_temperature;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cart_expect_position
  {
    size_t size = 7;
    auto array_ptr = ros_message->cart_expect_position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cart_expect_velocity
  {
    size_t size = 7;
    auto array_ptr = ros_message->cart_expect_velocity;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cart_expect_accelera
  {
    size_t size = 7;
    auto array_ptr = ros_message->cart_expect_accelera;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cart_actual_position
  {
    size_t size = 7;
    auto array_ptr = ros_message->cart_actual_position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cart_actual_velocity
  {
    size_t size = 7;
    auto array_ptr = ros_message->cart_actual_velocity;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cart_actual_accelera
  {
    size_t size = 7;
    auto array_ptr = ros_message->cart_actual_accelera;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: slave_ready
  {
    size_t size = 7;
    auto array_ptr = ros_message->slave_ready;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: collision
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->collision = tmp ? true : false;
  }

  // Field name: collision_axis
  {
    cdr >> ros_message->collision_axis;
  }

  // Field name: emc_stop_signal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emc_stop_signal = tmp ? true : false;
  }

  // Field name: robot_state
  {
    cdr >> ros_message->robot_state;
  }

  // Field name: robot_error
  {
    cdr >> ros_message->robot_error;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duco_msg
size_t get_serialized_size_duco_msg__msg__DucoRobotState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DucoRobotState__ros_msg_type * ros_message = static_cast<const _DucoRobotState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_expect_position
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->joint_expect_position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_expect_velocity
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->joint_expect_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_expect_accelera
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->joint_expect_accelera;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_actual_position
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->joint_actual_position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_actual_velocity
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->joint_actual_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_actual_accelera
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->joint_actual_accelera;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_actual_current
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->joint_actual_current;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_temperature
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->joint_temperature;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driver_temperature
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->driver_temperature;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_expect_position
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->cart_expect_position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_expect_velocity
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->cart_expect_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_expect_accelera
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->cart_expect_accelera;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_actual_position
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->cart_actual_position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_actual_velocity
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->cart_actual_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_actual_accelera
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->cart_actual_accelera;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slave_ready
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->slave_ready;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name collision
  {
    size_t item_size = sizeof(ros_message->collision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name collision_axis
  {
    size_t item_size = sizeof(ros_message->collision_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emc_stop_signal
  {
    size_t item_size = sizeof(ros_message->emc_stop_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_state
  {
    size_t item_size = sizeof(ros_message->robot_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_error
  {
    size_t item_size = sizeof(ros_message->robot_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DucoRobotState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_duco_msg__msg__DucoRobotState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_duco_msg
size_t max_serialized_size_duco_msg__msg__DucoRobotState(
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

  // member: joint_expect_position
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_expect_velocity
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_expect_accelera
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_actual_position
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_actual_velocity
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_actual_accelera
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_actual_current
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_temperature
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: driver_temperature
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_expect_position
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_expect_velocity
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_expect_accelera
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_actual_position
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_actual_velocity
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_actual_accelera
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: slave_ready
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: collision
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: collision_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emc_stop_signal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robot_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robot_error
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
    using DataType = duco_msg__msg__DucoRobotState;
    is_plain =
      (
      offsetof(DataType, robot_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DucoRobotState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_duco_msg__msg__DucoRobotState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DucoRobotState = {
  "duco_msg::msg",
  "DucoRobotState",
  _DucoRobotState__cdr_serialize,
  _DucoRobotState__cdr_deserialize,
  _DucoRobotState__get_serialized_size,
  _DucoRobotState__max_serialized_size
};

static rosidl_message_type_support_t _DucoRobotState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DucoRobotState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, duco_msg, msg, DucoRobotState)() {
  return &_DucoRobotState__type_support;
}

#if defined(__cplusplus)
}
#endif
