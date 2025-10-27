// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duco_msg:srv/Speech.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__SPEECH__STRUCT_H_
#define DUCO_MSG__SRV__DETAIL__SPEECH__STRUCT_H_

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

/// Struct defined in srv/Speech in the package duco_msg.
typedef struct duco_msg__srv__Speech_Request
{
  rosidl_runtime_c__String command;
} duco_msg__srv__Speech_Request;

// Struct for a sequence of duco_msg__srv__Speech_Request.
typedef struct duco_msg__srv__Speech_Request__Sequence
{
  duco_msg__srv__Speech_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duco_msg__srv__Speech_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Speech in the package duco_msg.
typedef struct duco_msg__srv__Speech_Response
{
  rosidl_runtime_c__String response;
} duco_msg__srv__Speech_Response;

// Struct for a sequence of duco_msg__srv__Speech_Response.
typedef struct duco_msg__srv__Speech_Response__Sequence
{
  duco_msg__srv__Speech_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duco_msg__srv__Speech_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCO_MSG__SRV__DETAIL__SPEECH__STRUCT_H_
