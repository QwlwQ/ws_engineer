// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duco_msg:srv/PoseEstimation.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__POSE_ESTIMATION__STRUCT_H_
#define DUCO_MSG__SRV__DETAIL__POSE_ESTIMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PoseEstimation in the package duco_msg.
typedef struct duco_msg__srv__PoseEstimation_Request
{
  rosidl_runtime_c__String command;
} duco_msg__srv__PoseEstimation_Request;

// Struct for a sequence of duco_msg__srv__PoseEstimation_Request.
typedef struct duco_msg__srv__PoseEstimation_Request__Sequence
{
  duco_msg__srv__PoseEstimation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duco_msg__srv__PoseEstimation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'pose_all'
// Member 'pose_pick'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in srv/PoseEstimation in the package duco_msg.
typedef struct duco_msg__srv__PoseEstimation_Response
{
  rosidl_runtime_c__String response;
  geometry_msgs__msg__Pose__Sequence pose_all;
  geometry_msgs__msg__Pose__Sequence pose_pick;
  geometry_msgs__msg__Point__Sequence center;
  geometry_msgs__msg__Vector3__Sequence size;
  int32_t server_id;
} duco_msg__srv__PoseEstimation_Response;

// Struct for a sequence of duco_msg__srv__PoseEstimation_Response.
typedef struct duco_msg__srv__PoseEstimation_Response__Sequence
{
  duco_msg__srv__PoseEstimation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duco_msg__srv__PoseEstimation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCO_MSG__SRV__DETAIL__POSE_ESTIMATION__STRUCT_H_
