// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from duco_msg:msg/DucoRobotState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "duco_msg/msg/detail/duco_robot_state__struct.hpp"
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

void DucoRobotState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) duco_msg::msg::DucoRobotState(_init);
}

void DucoRobotState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<duco_msg::msg::DucoRobotState *>(message_memory);
  typed_message->~DucoRobotState();
}

size_t size_function__DucoRobotState__joint_expect_position(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__joint_expect_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__joint_expect_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__joint_expect_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__joint_expect_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__joint_expect_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__joint_expect_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__joint_expect_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__joint_expect_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__joint_expect_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__joint_expect_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__joint_expect_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__joint_expect_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__joint_expect_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__joint_expect_accelera(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__joint_expect_accelera(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__joint_expect_accelera(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__joint_expect_accelera(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__joint_expect_accelera(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__joint_expect_accelera(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__joint_expect_accelera(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__joint_actual_position(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__joint_actual_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__joint_actual_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__joint_actual_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__joint_actual_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__joint_actual_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__joint_actual_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__joint_actual_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__joint_actual_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__joint_actual_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__joint_actual_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__joint_actual_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__joint_actual_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__joint_actual_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__joint_actual_accelera(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__joint_actual_accelera(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__joint_actual_accelera(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__joint_actual_accelera(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__joint_actual_accelera(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__joint_actual_accelera(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__joint_actual_accelera(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__joint_actual_current(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__joint_actual_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__joint_actual_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__joint_actual_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__joint_actual_current(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__joint_actual_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__joint_actual_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__joint_temperature(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__joint_temperature(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__joint_temperature(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__joint_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__joint_temperature(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__joint_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__joint_temperature(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__driver_temperature(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__driver_temperature(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__driver_temperature(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__driver_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__driver_temperature(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__driver_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__driver_temperature(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__cart_expect_position(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__cart_expect_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__cart_expect_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__cart_expect_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__cart_expect_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__cart_expect_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__cart_expect_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__cart_expect_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__cart_expect_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__cart_expect_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__cart_expect_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__cart_expect_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__cart_expect_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__cart_expect_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__cart_expect_accelera(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__cart_expect_accelera(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__cart_expect_accelera(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__cart_expect_accelera(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__cart_expect_accelera(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__cart_expect_accelera(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__cart_expect_accelera(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__cart_actual_position(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__cart_actual_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__cart_actual_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__cart_actual_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__cart_actual_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__cart_actual_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__cart_actual_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__cart_actual_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__cart_actual_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__cart_actual_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__cart_actual_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__cart_actual_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__cart_actual_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__cart_actual_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__cart_actual_accelera(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__cart_actual_accelera(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__cart_actual_accelera(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__cart_actual_accelera(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__DucoRobotState__cart_actual_accelera(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__cart_actual_accelera(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__DucoRobotState__cart_actual_accelera(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__DucoRobotState__slave_ready(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__DucoRobotState__slave_ready(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__DucoRobotState__slave_ready(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__DucoRobotState__slave_ready(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__DucoRobotState__slave_ready(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__DucoRobotState__slave_ready(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__DucoRobotState__slave_ready(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DucoRobotState_message_member_array[21] = {
  {
    "joint_expect_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, joint_expect_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__joint_expect_position,  // size() function pointer
    get_const_function__DucoRobotState__joint_expect_position,  // get_const(index) function pointer
    get_function__DucoRobotState__joint_expect_position,  // get(index) function pointer
    fetch_function__DucoRobotState__joint_expect_position,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__joint_expect_position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_expect_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, joint_expect_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__joint_expect_velocity,  // size() function pointer
    get_const_function__DucoRobotState__joint_expect_velocity,  // get_const(index) function pointer
    get_function__DucoRobotState__joint_expect_velocity,  // get(index) function pointer
    fetch_function__DucoRobotState__joint_expect_velocity,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__joint_expect_velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_expect_accelera",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, joint_expect_accelera),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__joint_expect_accelera,  // size() function pointer
    get_const_function__DucoRobotState__joint_expect_accelera,  // get_const(index) function pointer
    get_function__DucoRobotState__joint_expect_accelera,  // get(index) function pointer
    fetch_function__DucoRobotState__joint_expect_accelera,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__joint_expect_accelera,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_actual_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, joint_actual_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__joint_actual_position,  // size() function pointer
    get_const_function__DucoRobotState__joint_actual_position,  // get_const(index) function pointer
    get_function__DucoRobotState__joint_actual_position,  // get(index) function pointer
    fetch_function__DucoRobotState__joint_actual_position,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__joint_actual_position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_actual_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, joint_actual_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__joint_actual_velocity,  // size() function pointer
    get_const_function__DucoRobotState__joint_actual_velocity,  // get_const(index) function pointer
    get_function__DucoRobotState__joint_actual_velocity,  // get(index) function pointer
    fetch_function__DucoRobotState__joint_actual_velocity,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__joint_actual_velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_actual_accelera",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, joint_actual_accelera),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__joint_actual_accelera,  // size() function pointer
    get_const_function__DucoRobotState__joint_actual_accelera,  // get_const(index) function pointer
    get_function__DucoRobotState__joint_actual_accelera,  // get(index) function pointer
    fetch_function__DucoRobotState__joint_actual_accelera,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__joint_actual_accelera,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_actual_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, joint_actual_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__joint_actual_current,  // size() function pointer
    get_const_function__DucoRobotState__joint_actual_current,  // get_const(index) function pointer
    get_function__DucoRobotState__joint_actual_current,  // get(index) function pointer
    fetch_function__DucoRobotState__joint_actual_current,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__joint_actual_current,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, joint_temperature),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__joint_temperature,  // size() function pointer
    get_const_function__DucoRobotState__joint_temperature,  // get_const(index) function pointer
    get_function__DucoRobotState__joint_temperature,  // get(index) function pointer
    fetch_function__DucoRobotState__joint_temperature,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__joint_temperature,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "driver_temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, driver_temperature),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__driver_temperature,  // size() function pointer
    get_const_function__DucoRobotState__driver_temperature,  // get_const(index) function pointer
    get_function__DucoRobotState__driver_temperature,  // get(index) function pointer
    fetch_function__DucoRobotState__driver_temperature,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__driver_temperature,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cart_expect_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, cart_expect_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__cart_expect_position,  // size() function pointer
    get_const_function__DucoRobotState__cart_expect_position,  // get_const(index) function pointer
    get_function__DucoRobotState__cart_expect_position,  // get(index) function pointer
    fetch_function__DucoRobotState__cart_expect_position,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__cart_expect_position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cart_expect_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, cart_expect_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__cart_expect_velocity,  // size() function pointer
    get_const_function__DucoRobotState__cart_expect_velocity,  // get_const(index) function pointer
    get_function__DucoRobotState__cart_expect_velocity,  // get(index) function pointer
    fetch_function__DucoRobotState__cart_expect_velocity,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__cart_expect_velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cart_expect_accelera",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, cart_expect_accelera),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__cart_expect_accelera,  // size() function pointer
    get_const_function__DucoRobotState__cart_expect_accelera,  // get_const(index) function pointer
    get_function__DucoRobotState__cart_expect_accelera,  // get(index) function pointer
    fetch_function__DucoRobotState__cart_expect_accelera,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__cart_expect_accelera,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cart_actual_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, cart_actual_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__cart_actual_position,  // size() function pointer
    get_const_function__DucoRobotState__cart_actual_position,  // get_const(index) function pointer
    get_function__DucoRobotState__cart_actual_position,  // get(index) function pointer
    fetch_function__DucoRobotState__cart_actual_position,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__cart_actual_position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cart_actual_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, cart_actual_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__cart_actual_velocity,  // size() function pointer
    get_const_function__DucoRobotState__cart_actual_velocity,  // get_const(index) function pointer
    get_function__DucoRobotState__cart_actual_velocity,  // get(index) function pointer
    fetch_function__DucoRobotState__cart_actual_velocity,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__cart_actual_velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cart_actual_accelera",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, cart_actual_accelera),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__cart_actual_accelera,  // size() function pointer
    get_const_function__DucoRobotState__cart_actual_accelera,  // get_const(index) function pointer
    get_function__DucoRobotState__cart_actual_accelera,  // get(index) function pointer
    fetch_function__DucoRobotState__cart_actual_accelera,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__cart_actual_accelera,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "slave_ready",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, slave_ready),  // bytes offset in struct
    nullptr,  // default value
    size_function__DucoRobotState__slave_ready,  // size() function pointer
    get_const_function__DucoRobotState__slave_ready,  // get_const(index) function pointer
    get_function__DucoRobotState__slave_ready,  // get(index) function pointer
    fetch_function__DucoRobotState__slave_ready,  // fetch(index, &value) function pointer
    assign_function__DucoRobotState__slave_ready,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "collision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, collision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "collision_axis",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, collision_axis),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "emc_stop_signal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, emc_stop_signal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, robot_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg::msg::DucoRobotState, robot_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DucoRobotState_message_members = {
  "duco_msg::msg",  // message namespace
  "DucoRobotState",  // message name
  21,  // number of fields
  sizeof(duco_msg::msg::DucoRobotState),
  DucoRobotState_message_member_array,  // message members
  DucoRobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  DucoRobotState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DucoRobotState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DucoRobotState_message_members,
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
get_message_type_support_handle<duco_msg::msg::DucoRobotState>()
{
  return &::duco_msg::msg::rosidl_typesupport_introspection_cpp::DucoRobotState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, duco_msg, msg, DucoRobotState)() {
  return &::duco_msg::msg::rosidl_typesupport_introspection_cpp::DucoRobotState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
