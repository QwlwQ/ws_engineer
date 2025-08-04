// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces:msg/UserJoint.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__MSG__DETAIL__USER_JOINT__STRUCT_H_
#define BASE_INTERFACES__MSG__DETAIL__USER_JOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UserJoint in the package base_interfaces.
typedef struct base_interfaces__msg__UserJoint
{
  double joint0;
  double joint1;
  double joint2;
  double joint3;
  double joint4;
  double joint5;
} base_interfaces__msg__UserJoint;

// Struct for a sequence of base_interfaces__msg__UserJoint.
typedef struct base_interfaces__msg__UserJoint__Sequence
{
  base_interfaces__msg__UserJoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__msg__UserJoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES__MSG__DETAIL__USER_JOINT__STRUCT_H_
