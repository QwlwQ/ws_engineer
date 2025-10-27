// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aivt_interfaces:msg/TargetPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aivt_interfaces/msg/detail/target_pose__rosidl_typesupport_introspection_c.h"
#include "aivt_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aivt_interfaces/msg/detail/target_pose__functions.h"
#include "aivt_interfaces/msg/detail/target_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__TargetPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aivt_interfaces__msg__TargetPose__init(message_memory);
}

void aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__TargetPose_fini_function(void * message_memory)
{
  aivt_interfaces__msg__TargetPose__fini(message_memory);
}

size_t aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__size_function__TargetPose__target_pose(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__get_const_function__TargetPose__target_pose(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__get_function__TargetPose__target_pose(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__fetch_function__TargetPose__target_pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__get_const_function__TargetPose__target_pose(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__assign_function__TargetPose__target_pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__get_function__TargetPose__target_pose(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__TargetPose_message_member_array[1] = {
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aivt_interfaces__msg__TargetPose, target_pose),  // bytes offset in struct
    NULL,  // default value
    aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__size_function__TargetPose__target_pose,  // size() function pointer
    aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__get_const_function__TargetPose__target_pose,  // get_const(index) function pointer
    aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__get_function__TargetPose__target_pose,  // get(index) function pointer
    aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__fetch_function__TargetPose__target_pose,  // fetch(index, &value) function pointer
    aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__assign_function__TargetPose__target_pose,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__TargetPose_message_members = {
  "aivt_interfaces__msg",  // message namespace
  "TargetPose",  // message name
  1,  // number of fields
  sizeof(aivt_interfaces__msg__TargetPose),
  aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__TargetPose_message_member_array,  // message members
  aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__TargetPose_init_function,  // function to initialize message memory (memory has to be allocated)
  aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__TargetPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__TargetPose_message_type_support_handle = {
  0,
  &aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__TargetPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aivt_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aivt_interfaces, msg, TargetPose)() {
  if (!aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__TargetPose_message_type_support_handle.typesupport_identifier) {
    aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__TargetPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aivt_interfaces__msg__TargetPose__rosidl_typesupport_introspection_c__TargetPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
