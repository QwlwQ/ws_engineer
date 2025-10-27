// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duco_msg:srv/DucoRobotStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duco_msg/srv/detail/duco_robot_states__rosidl_typesupport_introspection_c.h"
#include "duco_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duco_msg/srv/detail/duco_robot_states__functions.h"
#include "duco_msg/srv/detail/duco_robot_states__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void duco_msg__srv__DucoRobotStates_Request__rosidl_typesupport_introspection_c__DucoRobotStates_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duco_msg__srv__DucoRobotStates_Request__init(message_memory);
}

void duco_msg__srv__DucoRobotStates_Request__rosidl_typesupport_introspection_c__DucoRobotStates_Request_fini_function(void * message_memory)
{
  duco_msg__srv__DucoRobotStates_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember duco_msg__srv__DucoRobotStates_Request__rosidl_typesupport_introspection_c__DucoRobotStates_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__srv__DucoRobotStates_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duco_msg__srv__DucoRobotStates_Request__rosidl_typesupport_introspection_c__DucoRobotStates_Request_message_members = {
  "duco_msg__srv",  // message namespace
  "DucoRobotStates_Request",  // message name
  1,  // number of fields
  sizeof(duco_msg__srv__DucoRobotStates_Request),
  duco_msg__srv__DucoRobotStates_Request__rosidl_typesupport_introspection_c__DucoRobotStates_Request_message_member_array,  // message members
  duco_msg__srv__DucoRobotStates_Request__rosidl_typesupport_introspection_c__DucoRobotStates_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  duco_msg__srv__DucoRobotStates_Request__rosidl_typesupport_introspection_c__DucoRobotStates_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duco_msg__srv__DucoRobotStates_Request__rosidl_typesupport_introspection_c__DucoRobotStates_Request_message_type_support_handle = {
  0,
  &duco_msg__srv__DucoRobotStates_Request__rosidl_typesupport_introspection_c__DucoRobotStates_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duco_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, DucoRobotStates_Request)() {
  if (!duco_msg__srv__DucoRobotStates_Request__rosidl_typesupport_introspection_c__DucoRobotStates_Request_message_type_support_handle.typesupport_identifier) {
    duco_msg__srv__DucoRobotStates_Request__rosidl_typesupport_introspection_c__DucoRobotStates_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duco_msg__srv__DucoRobotStates_Request__rosidl_typesupport_introspection_c__DucoRobotStates_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "duco_msg/srv/detail/duco_robot_states__rosidl_typesupport_introspection_c.h"
// already included above
// #include "duco_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "duco_msg/srv/detail/duco_robot_states__functions.h"
// already included above
// #include "duco_msg/srv/detail/duco_robot_states__struct.h"


// Include directives for member types
// Member `robot_states`
#include "duco_msg/msg/duco_robot_state.h"
// Member `robot_states`
#include "duco_msg/msg/detail/duco_robot_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duco_msg__srv__DucoRobotStates_Response__init(message_memory);
}

void duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_fini_function(void * message_memory)
{
  duco_msg__srv__DucoRobotStates_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_message_member_array[1] = {
  {
    "robot_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__srv__DucoRobotStates_Response, robot_states),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_message_members = {
  "duco_msg__srv",  // message namespace
  "DucoRobotStates_Response",  // message name
  1,  // number of fields
  sizeof(duco_msg__srv__DucoRobotStates_Response),
  duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_message_member_array,  // message members
  duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_message_type_support_handle = {
  0,
  &duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duco_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, DucoRobotStates_Response)() {
  duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, msg, DucoRobotState)();
  if (!duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_message_type_support_handle.typesupport_identifier) {
    duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duco_msg__srv__DucoRobotStates_Response__rosidl_typesupport_introspection_c__DucoRobotStates_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "duco_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "duco_msg/srv/detail/duco_robot_states__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers duco_msg__srv__detail__duco_robot_states__rosidl_typesupport_introspection_c__DucoRobotStates_service_members = {
  "duco_msg__srv",  // service namespace
  "DucoRobotStates",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // duco_msg__srv__detail__duco_robot_states__rosidl_typesupport_introspection_c__DucoRobotStates_Request_message_type_support_handle,
  NULL  // response message
  // duco_msg__srv__detail__duco_robot_states__rosidl_typesupport_introspection_c__DucoRobotStates_Response_message_type_support_handle
};

static rosidl_service_type_support_t duco_msg__srv__detail__duco_robot_states__rosidl_typesupport_introspection_c__DucoRobotStates_service_type_support_handle = {
  0,
  &duco_msg__srv__detail__duco_robot_states__rosidl_typesupport_introspection_c__DucoRobotStates_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, DucoRobotStates_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, DucoRobotStates_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duco_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, DucoRobotStates)() {
  if (!duco_msg__srv__detail__duco_robot_states__rosidl_typesupport_introspection_c__DucoRobotStates_service_type_support_handle.typesupport_identifier) {
    duco_msg__srv__detail__duco_robot_states__rosidl_typesupport_introspection_c__DucoRobotStates_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)duco_msg__srv__detail__duco_robot_states__rosidl_typesupport_introspection_c__DucoRobotStates_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, DucoRobotStates_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, srv, DucoRobotStates_Response)()->data;
  }

  return &duco_msg__srv__detail__duco_robot_states__rosidl_typesupport_introspection_c__DucoRobotStates_service_type_support_handle;
}
