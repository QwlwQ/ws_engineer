// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from duco_msg:srv/PoseEstimation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "duco_msg/srv/detail/pose_estimation__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace duco_msg
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PoseEstimation_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) duco_msg::srv::PoseEstimation_Request(_init);
}

void PoseEstimation_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<duco_msg::srv::PoseEstimation_Request *>(message_memory);
  typed_message->~PoseEstimation_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PoseEstimation_Request_message_member_array[1] = {
  {
    "command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::srv::PoseEstimation_Request, command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PoseEstimation_Request_message_members = {
  "duco_msg::srv",  // message namespace
  "PoseEstimation_Request",  // message name
  1,  // number of fields
  sizeof(duco_msg::srv::PoseEstimation_Request),
  PoseEstimation_Request_message_member_array,  // message members
  PoseEstimation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseEstimation_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PoseEstimation_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PoseEstimation_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace duco_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<duco_msg::srv::PoseEstimation_Request>()
{
  return &::duco_msg::srv::rosidl_typesupport_introspection_cpp::PoseEstimation_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, duco_msg, srv, PoseEstimation_Request)() {
  return &::duco_msg::srv::rosidl_typesupport_introspection_cpp::PoseEstimation_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "duco_msg/srv/detail/pose_estimation__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace duco_msg
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PoseEstimation_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) duco_msg::srv::PoseEstimation_Response(_init);
}

void PoseEstimation_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<duco_msg::srv::PoseEstimation_Response *>(message_memory);
  typed_message->~PoseEstimation_Response();
}

size_t size_function__PoseEstimation_Response__pose_all(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PoseEstimation_Response__pose_all(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__PoseEstimation_Response__pose_all(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__PoseEstimation_Response__pose_all(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__PoseEstimation_Response__pose_all(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__PoseEstimation_Response__pose_all(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__PoseEstimation_Response__pose_all(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__PoseEstimation_Response__pose_all(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PoseEstimation_Response__pose_pick(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PoseEstimation_Response__pose_pick(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__PoseEstimation_Response__pose_pick(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__PoseEstimation_Response__pose_pick(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__PoseEstimation_Response__pose_pick(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__PoseEstimation_Response__pose_pick(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__PoseEstimation_Response__pose_pick(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__PoseEstimation_Response__pose_pick(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PoseEstimation_Response__center(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PoseEstimation_Response__center(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__PoseEstimation_Response__center(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__PoseEstimation_Response__center(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__PoseEstimation_Response__center(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__PoseEstimation_Response__center(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__PoseEstimation_Response__center(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__PoseEstimation_Response__center(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PoseEstimation_Response__size(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PoseEstimation_Response__size(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__PoseEstimation_Response__size(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__PoseEstimation_Response__size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__PoseEstimation_Response__size(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__PoseEstimation_Response__size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__PoseEstimation_Response__size(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__PoseEstimation_Response__size(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PoseEstimation_Response_message_member_array[6] = {
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::srv::PoseEstimation_Response, response),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose_all",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::srv::PoseEstimation_Response, pose_all),  // bytes offset in struct
    nullptr,  // default value
    size_function__PoseEstimation_Response__pose_all,  // size() function pointer
    get_const_function__PoseEstimation_Response__pose_all,  // get_const(index) function pointer
    get_function__PoseEstimation_Response__pose_all,  // get(index) function pointer
    fetch_function__PoseEstimation_Response__pose_all,  // fetch(index, &value) function pointer
    assign_function__PoseEstimation_Response__pose_all,  // assign(index, value) function pointer
    resize_function__PoseEstimation_Response__pose_all  // resize(index) function pointer
  },
  {
    "pose_pick",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::srv::PoseEstimation_Response, pose_pick),  // bytes offset in struct
    nullptr,  // default value
    size_function__PoseEstimation_Response__pose_pick,  // size() function pointer
    get_const_function__PoseEstimation_Response__pose_pick,  // get_const(index) function pointer
    get_function__PoseEstimation_Response__pose_pick,  // get(index) function pointer
    fetch_function__PoseEstimation_Response__pose_pick,  // fetch(index, &value) function pointer
    assign_function__PoseEstimation_Response__pose_pick,  // assign(index, value) function pointer
    resize_function__PoseEstimation_Response__pose_pick  // resize(index) function pointer
  },
  {
    "center",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::srv::PoseEstimation_Response, center),  // bytes offset in struct
    nullptr,  // default value
    size_function__PoseEstimation_Response__center,  // size() function pointer
    get_const_function__PoseEstimation_Response__center,  // get_const(index) function pointer
    get_function__PoseEstimation_Response__center,  // get(index) function pointer
    fetch_function__PoseEstimation_Response__center,  // fetch(index, &value) function pointer
    assign_function__PoseEstimation_Response__center,  // assign(index, value) function pointer
    resize_function__PoseEstimation_Response__center  // resize(index) function pointer
  },
  {
    "size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::srv::PoseEstimation_Response, size),  // bytes offset in struct
    nullptr,  // default value
    size_function__PoseEstimation_Response__size,  // size() function pointer
    get_const_function__PoseEstimation_Response__size,  // get_const(index) function pointer
    get_function__PoseEstimation_Response__size,  // get(index) function pointer
    fetch_function__PoseEstimation_Response__size,  // fetch(index, &value) function pointer
    assign_function__PoseEstimation_Response__size,  // assign(index, value) function pointer
    resize_function__PoseEstimation_Response__size  // resize(index) function pointer
  },
  {
    "server_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::srv::PoseEstimation_Response, server_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PoseEstimation_Response_message_members = {
  "duco_msg::srv",  // message namespace
  "PoseEstimation_Response",  // message name
  6,  // number of fields
  sizeof(duco_msg::srv::PoseEstimation_Response),
  PoseEstimation_Response_message_member_array,  // message members
  PoseEstimation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseEstimation_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PoseEstimation_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PoseEstimation_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace duco_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<duco_msg::srv::PoseEstimation_Response>()
{
  return &::duco_msg::srv::rosidl_typesupport_introspection_cpp::PoseEstimation_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, duco_msg, srv, PoseEstimation_Response)() {
  return &::duco_msg::srv::rosidl_typesupport_introspection_cpp::PoseEstimation_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "duco_msg/srv/detail/pose_estimation__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace duco_msg
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers PoseEstimation_service_members = {
  "duco_msg::srv",  // service namespace
  "PoseEstimation",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<duco_msg::srv::PoseEstimation>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t PoseEstimation_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PoseEstimation_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace duco_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<duco_msg::srv::PoseEstimation>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::duco_msg::srv::rosidl_typesupport_introspection_cpp::PoseEstimation_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::duco_msg::srv::PoseEstimation_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::duco_msg::srv::PoseEstimation_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, duco_msg, srv, PoseEstimation)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<duco_msg::srv::PoseEstimation>();
}

#ifdef __cplusplus
}
#endif
