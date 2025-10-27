// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duco_msg:srv/RobotIoControl.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__ROBOT_IO_CONTROL__STRUCT_H_
#define DUCO_MSG__SRV__DETAIL__ROBOT_IO_CONTROL__STRUCT_H_

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

/// Struct defined in srv/RobotIoControl in the package duco_msg.
typedef struct duco_msg__srv__RobotIoControl_Request
{
  rosidl_runtime_c__String command;
  int8_t arm_num;
  /// IO 类型
  ///  0:gen io  1:tool io
  int8_t type;
  /// IO 端口
  /// GEN IO 0--15  TOOL IO 0--1
  int8_t port;
  /// SetIO 值
  bool value;
  bool block;
} duco_msg__srv__RobotIoControl_Request;

// Struct for a sequence of duco_msg__srv__RobotIoControl_Request.
typedef struct duco_msg__srv__RobotIoControl_Request__Sequence
{
  duco_msg__srv__RobotIoControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duco_msg__srv__RobotIoControl_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RobotIoControl in the package duco_msg.
typedef struct duco_msg__srv__RobotIoControl_Response
{
  rosidl_runtime_c__String response;
} duco_msg__srv__RobotIoControl_Response;

// Struct for a sequence of duco_msg__srv__RobotIoControl_Response.
typedef struct duco_msg__srv__RobotIoControl_Response__Sequence
{
  duco_msg__srv__RobotIoControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duco_msg__srv__RobotIoControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCO_MSG__SRV__DETAIL__ROBOT_IO_CONTROL__STRUCT_H_
