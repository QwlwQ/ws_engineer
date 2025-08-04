// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces:msg/UserPose.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__MSG__DETAIL__USER_POSE__STRUCT_H_
#define BASE_INTERFACES__MSG__DETAIL__USER_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UserPose in the package base_interfaces.
typedef struct base_interfaces__msg__UserPose
{
  double x;
  double y;
  double z;
  double yaw;
  double pitch;
  double roll;
} base_interfaces__msg__UserPose;

// Struct for a sequence of base_interfaces__msg__UserPose.
typedef struct base_interfaces__msg__UserPose__Sequence
{
  base_interfaces__msg__UserPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__msg__UserPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES__MSG__DETAIL__USER_POSE__STRUCT_H_
