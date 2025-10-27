// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duco_msg:srv/DucoRobotStates.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__DUCO_ROBOT_STATES__STRUCT_H_
#define DUCO_MSG__SRV__DETAIL__DUCO_ROBOT_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DucoRobotStates in the package duco_msg.
typedef struct duco_msg__srv__DucoRobotStates_Request
{
  uint8_t structure_needs_at_least_one_member;
} duco_msg__srv__DucoRobotStates_Request;

// Struct for a sequence of duco_msg__srv__DucoRobotStates_Request.
typedef struct duco_msg__srv__DucoRobotStates_Request__Sequence
{
  duco_msg__srv__DucoRobotStates_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duco_msg__srv__DucoRobotStates_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'robot_states'
#include "duco_msg/msg/detail/duco_robot_state__struct.h"

/// Struct defined in srv/DucoRobotStates in the package duco_msg.
typedef struct duco_msg__srv__DucoRobotStates_Response
{
  duco_msg__msg__DucoRobotState robot_states;
} duco_msg__srv__DucoRobotStates_Response;

// Struct for a sequence of duco_msg__srv__DucoRobotStates_Response.
typedef struct duco_msg__srv__DucoRobotStates_Response__Sequence
{
  duco_msg__srv__DucoRobotStates_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duco_msg__srv__DucoRobotStates_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCO_MSG__SRV__DETAIL__DUCO_ROBOT_STATES__STRUCT_H_
