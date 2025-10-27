// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duco_msg:srv/PoseEstimation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duco_msg/srv/detail/pose_estimation__rosidl_typesupport_introspection_c.h"
#include "duco_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duco_msg/srv/detail/pose_estimation__functions.h"
#include "duco_msg/srv/detail/pose_estimation__struct.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duco_msg__srv__PoseEstimation_Request__rosidl_typesupport_introspection_c__PoseEstimation_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duco_msg__srv__PoseEstimation_Request__init(message_memory);
}

void duco_msg__srv__PoseEstimation_Request__rosidl_typesupport_introspection_c__PoseEstimation_Request_fini_function(void * message_memory)
{
  duco_msg__srv__PoseEstimation_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember duco_msg__srv__PoseEstimation_Request__rosidl_typesupport_introspection_c__PoseEstimation_Request_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__srv__PoseEstimation_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duco_msg__srv__PoseEstimation_Request__rosidl_typesupport_introspection_c__PoseEstimation_Request_message_members = {
  "duco_msg__srv",  // message namespace
  "PoseEstimation_Request",  // message name
  1,  // number of fields
  sizeof(duco_msg__srv__PoseEstimation_Request),
  duco_msg__srv__PoseEstimation_Request__rosidl_typesupport_introspection_c__PoseEstimation_Request_message_member_array,  // message members
  duco_msg__srv__PoseEstimation_Request__rosidl_typesupport_introspection_c__PoseEstimation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  duco_msg__srv__PoseEstimation_Request__rosidl_typesupport_introspection_c__PoseEstimation_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duco_msg__srv__PoseEstimation_Request__rosidl_typesupport_introspection_c__PoseEstimation_Request_message_type_support_handle = {
  0,
  &duco_msg__srv__PoseEstimation_Request__rosidl_typesupport_introspection_c__PoseEstimation_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duco_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, PoseEstimation_Request)() {
  if (!duco_msg__srv__PoseEstimation_Request__rosidl_typesupport_introspection_c__PoseEstimation_Request_message_type_support_handle.typesupport_identifier) {
    duco_msg__srv__PoseEstimation_Request__rosidl_typesupport_introspection_c__PoseEstimation_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duco_msg__srv__PoseEstimation_Request__rosidl_typesupport_introspection_c__PoseEstimation_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "duco_msg/srv/detail/pose_estimation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "duco_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "duco_msg/srv/detail/pose_estimation__functions.h"
// already included above
// #include "duco_msg/srv/detail/pose_estimation__struct.h"


// Include directives for member types
// Member `response`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `pose_all`
// Member `pose_pick`
#include "geometry_msgs/msg/pose.h"
// Member `pose_all`
// Member `pose_pick`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `center`
#include "geometry_msgs/msg/point.h"
// Member `center`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `size`
#include "geometry_msgs/msg/vector3.h"
// Member `size`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duco_msg__srv__PoseEstimation_Response__init(message_memory);
}

void duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_fini_function(void * message_memory)
{
  duco_msg__srv__PoseEstimation_Response__fini(message_memory);
}

size_t duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__size_function__PoseEstimation_Response__pose_all(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_const_function__PoseEstimation_Response__pose_all(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_function__PoseEstimation_Response__pose_all(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__fetch_function__PoseEstimation_Response__pose_all(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_const_function__PoseEstimation_Response__pose_all(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__assign_function__PoseEstimation_Response__pose_all(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_function__PoseEstimation_Response__pose_all(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__resize_function__PoseEstimation_Response__pose_all(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__size_function__PoseEstimation_Response__pose_pick(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_const_function__PoseEstimation_Response__pose_pick(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_function__PoseEstimation_Response__pose_pick(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__fetch_function__PoseEstimation_Response__pose_pick(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_const_function__PoseEstimation_Response__pose_pick(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__assign_function__PoseEstimation_Response__pose_pick(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_function__PoseEstimation_Response__pose_pick(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__resize_function__PoseEstimation_Response__pose_pick(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__size_function__PoseEstimation_Response__center(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_const_function__PoseEstimation_Response__center(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_function__PoseEstimation_Response__center(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__fetch_function__PoseEstimation_Response__center(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_const_function__PoseEstimation_Response__center(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__assign_function__PoseEstimation_Response__center(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_function__PoseEstimation_Response__center(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__resize_function__PoseEstimation_Response__center(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__size_function__PoseEstimation_Response__size(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_const_function__PoseEstimation_Response__size(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_function__PoseEstimation_Response__size(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__fetch_function__PoseEstimation_Response__size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_const_function__PoseEstimation_Response__size(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__assign_function__PoseEstimation_Response__size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_function__PoseEstimation_Response__size(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__resize_function__PoseEstimation_Response__size(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_member_array[6] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__srv__PoseEstimation_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_all",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__srv__PoseEstimation_Response, pose_all),  // bytes offset in struct
    NULL,  // default value
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__size_function__PoseEstimation_Response__pose_all,  // size() function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_const_function__PoseEstimation_Response__pose_all,  // get_const(index) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_function__PoseEstimation_Response__pose_all,  // get(index) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__fetch_function__PoseEstimation_Response__pose_all,  // fetch(index, &value) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__assign_function__PoseEstimation_Response__pose_all,  // assign(index, value) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__resize_function__PoseEstimation_Response__pose_all  // resize(index) function pointer
  },
  {
    "pose_pick",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__srv__PoseEstimation_Response, pose_pick),  // bytes offset in struct
    NULL,  // default value
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__size_function__PoseEstimation_Response__pose_pick,  // size() function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_const_function__PoseEstimation_Response__pose_pick,  // get_const(index) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_function__PoseEstimation_Response__pose_pick,  // get(index) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__fetch_function__PoseEstimation_Response__pose_pick,  // fetch(index, &value) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__assign_function__PoseEstimation_Response__pose_pick,  // assign(index, value) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__resize_function__PoseEstimation_Response__pose_pick  // resize(index) function pointer
  },
  {
    "center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__srv__PoseEstimation_Response, center),  // bytes offset in struct
    NULL,  // default value
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__size_function__PoseEstimation_Response__center,  // size() function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_const_function__PoseEstimation_Response__center,  // get_const(index) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_function__PoseEstimation_Response__center,  // get(index) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__fetch_function__PoseEstimation_Response__center,  // fetch(index, &value) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__assign_function__PoseEstimation_Response__center,  // assign(index, value) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__resize_function__PoseEstimation_Response__center  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__srv__PoseEstimation_Response, size),  // bytes offset in struct
    NULL,  // default value
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__size_function__PoseEstimation_Response__size,  // size() function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_const_function__PoseEstimation_Response__size,  // get_const(index) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__get_function__PoseEstimation_Response__size,  // get(index) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__fetch_function__PoseEstimation_Response__size,  // fetch(index, &value) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__assign_function__PoseEstimation_Response__size,  // assign(index, value) function pointer
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__resize_function__PoseEstimation_Response__size  // resize(index) function pointer
  },
  {
    "server_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__srv__PoseEstimation_Response, server_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_members = {
  "duco_msg__srv",  // message namespace
  "PoseEstimation_Response",  // message name
  6,  // number of fields
  sizeof(duco_msg__srv__PoseEstimation_Response),
  duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_member_array,  // message members
  duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_type_support_handle = {
  0,
  &duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duco_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, PoseEstimation_Response)() {
  duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_type_support_handle.typesupport_identifier) {
    duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duco_msg__srv__PoseEstimation_Response__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "duco_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "duco_msg/srv/detail/pose_estimation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers duco_msg__srv__detail__pose_estimation__rosidl_typesupport_introspection_c__PoseEstimation_service_members = {
  "duco_msg__srv",  // service namespace
  "PoseEstimation",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // duco_msg__srv__detail__pose_estimation__rosidl_typesupport_introspection_c__PoseEstimation_Request_message_type_support_handle,
  NULL  // response message
  // duco_msg__srv__detail__pose_estimation__rosidl_typesupport_introspection_c__PoseEstimation_Response_message_type_support_handle
};

static rosidl_service_type_support_t duco_msg__srv__detail__pose_estimation__rosidl_typesupport_introspection_c__PoseEstimation_service_type_support_handle = {
  0,
  &duco_msg__srv__detail__pose_estimation__rosidl_typesupport_introspection_c__PoseEstimation_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, PoseEstimation_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, PoseEstimation_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duco_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, PoseEstimation)() {
  if (!duco_msg__srv__detail__pose_estimation__rosidl_typesupport_introspection_c__PoseEstimation_service_type_support_handle.typesupport_identifier) {
    duco_msg__srv__detail__pose_estimation__rosidl_typesupport_introspection_c__PoseEstimation_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)duco_msg__srv__detail__pose_estimation__rosidl_typesupport_introspection_c__PoseEstimation_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, PoseEstimation_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, PoseEstimation_Response)()->data;
  }

  return &duco_msg__srv__detail__pose_estimation__rosidl_typesupport_introspection_c__PoseEstimation_service_type_support_handle;
}
