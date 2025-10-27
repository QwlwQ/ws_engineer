// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aivt_interfaces:msg/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef AIVT_INTERFACES__MSG__DETAIL__TARGET_POSE__STRUCT_H_
#define AIVT_INTERFACES__MSG__DETAIL__TARGET_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TargetPose in the package aivt_interfaces.
typedef struct aivt_interfaces__msg__TargetPose
{
  float target_pose[6];
} aivt_interfaces__msg__TargetPose;

// Struct for a sequence of aivt_interfaces__msg__TargetPose.
typedef struct aivt_interfaces__msg__TargetPose__Sequence
{
  aivt_interfaces__msg__TargetPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aivt_interfaces__msg__TargetPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIVT_INTERFACES__MSG__DETAIL__TARGET_POSE__STRUCT_H_
