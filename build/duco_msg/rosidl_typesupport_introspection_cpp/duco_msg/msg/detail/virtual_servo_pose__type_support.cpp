// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from duco_msg:msg/VirtualServoPose.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "duco_msg/msg/detail/virtual_servo_pose__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace duco_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VirtualServoPose_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) duco_msg::msg::VirtualServoPose(_init);
}

void VirtualServoPose_fini_function(void * message_memory)
{
  auto typed_message = static_cast<duco_msg::msg::VirtualServoPose *>(message_memory);
  typed_message->~VirtualServoPose();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VirtualServoPose_message_member_array[2] = {
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::VirtualServoPose, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arm_group",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::VirtualServoPose, arm_group),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VirtualServoPose_message_members = {
  "duco_msg::msg",  // message namespace
  "VirtualServoPose",  // message name
  2,  // number of fields
  sizeof(duco_msg::msg::VirtualServoPose),
  VirtualServoPose_message_member_array,  // message members
  VirtualServoPose_init_function,  // function to initialize message memory (memory has to be allocated)
  VirtualServoPose_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VirtualServoPose_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VirtualServoPose_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace duco_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<duco_msg::msg::VirtualServoPose>()
{
  return &::duco_msg::msg::rosidl_typesupport_introspection_cpp::VirtualServoPose_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, duco_msg, msg, VirtualServoPose)() {
  return &::duco_msg::msg::rosidl_typesupport_introspection_cpp::VirtualServoPose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
