// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duco_msg:msg/VirtualServoPose.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__STRUCT_H_
#define DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'arm_group'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VirtualServoPose in the package duco_msg.
typedef struct duco_msg__msg__VirtualServoPose
{
  geometry_msgs__msg__Pose pose;
  rosidl_runtime_c__String arm_group;
} duco_msg__msg__VirtualServoPose;

// Struct for a sequence of duco_msg__msg__VirtualServoPose.
typedef struct duco_msg__msg__VirtualServoPose__Sequence
{
  duco_msg__msg__VirtualServoPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duco_msg__msg__VirtualServoPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__STRUCT_H_
