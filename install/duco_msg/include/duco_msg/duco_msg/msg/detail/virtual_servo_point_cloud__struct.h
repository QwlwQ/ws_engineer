// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duco_msg:msg/VirtualServoPointCloud.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POINT_CLOUD__STRUCT_H_
#define DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POINT_CLOUD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

/// Struct defined in msg/VirtualServoPointCloud in the package duco_msg.
typedef struct duco_msg__msg__VirtualServoPointCloud
{
  sensor_msgs__msg__Image image;
  sensor_msgs__msg__PointCloud2 point_cloud;
} duco_msg__msg__VirtualServoPointCloud;

// Struct for a sequence of duco_msg__msg__VirtualServoPointCloud.
typedef struct duco_msg__msg__VirtualServoPointCloud__Sequence
{
  duco_msg__msg__VirtualServoPointCloud * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duco_msg__msg__VirtualServoPointCloud__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POINT_CLOUD__STRUCT_H_
