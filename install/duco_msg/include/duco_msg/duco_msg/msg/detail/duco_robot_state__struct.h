// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duco_msg:msg/DucoRobotState.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__DUCO_ROBOT_STATE__STRUCT_H_
#define DUCO_MSG__MSG__DETAIL__DUCO_ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DucoRobotState in the package duco_msg.
typedef struct duco_msg__msg__DucoRobotState
{
  double joint_expect_position[7];
  double joint_expect_velocity[7];
  double joint_expect_accelera[7];
  double joint_actual_position[7];
  double joint_actual_velocity[7];
  double joint_actual_accelera[7];
  double joint_actual_current[7];
  double joint_temperature[7];
  double driver_temperature[7];
  double cart_expect_position[7];
  double cart_expect_velocity[7];
  double cart_expect_accelera[7];
  double cart_actual_position[7];
  double cart_actual_velocity[7];
  double cart_actual_accelera[7];
  bool slave_ready[7];
  bool collision;
  int8_t collision_axis;
  bool emc_stop_signal;
  int8_t robot_state;
  int32_t robot_error;
} duco_msg__msg__DucoRobotState;

// Struct for a sequence of duco_msg__msg__DucoRobotState.
typedef struct duco_msg__msg__DucoRobotState__Sequence
{
  duco_msg__msg__DucoRobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duco_msg__msg__DucoRobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCO_MSG__MSG__DETAIL__DUCO_ROBOT_STATE__STRUCT_H_
