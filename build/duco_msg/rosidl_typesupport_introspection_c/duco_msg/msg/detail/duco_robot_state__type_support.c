// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duco_msg:msg/DucoRobotState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duco_msg/msg/detail/duco_robot_state__rosidl_typesupport_introspection_c.h"
#include "duco_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duco_msg/msg/detail/duco_robot_state__functions.h"
#include "duco_msg/msg/detail/duco_robot_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__DucoRobotState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duco_msg__msg__DucoRobotState__init(message_memory);
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__DucoRobotState_fini_function(void * message_memory)
{
  duco_msg__msg__DucoRobotState__fini(message_memory);
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_expect_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_expect_position(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_expect_position(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_expect_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_expect_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_expect_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_expect_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_expect_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_expect_velocity(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_expect_velocity(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_expect_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_expect_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_expect_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_expect_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_expect_accelera(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_expect_accelera(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_expect_accelera(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_expect_accelera(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_expect_accelera(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_expect_accelera(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_expect_accelera(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_actual_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_actual_position(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_actual_position(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_actual_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_actual_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_actual_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_actual_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_actual_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_actual_velocity(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_actual_velocity(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_actual_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_actual_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_actual_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_actual_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_actual_accelera(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_actual_accelera(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_actual_accelera(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_actual_accelera(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_actual_accelera(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_actual_accelera(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_actual_accelera(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_actual_current(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_actual_current(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_actual_current(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_actual_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_actual_current(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_actual_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_actual_current(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_temperature(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_temperature(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_temperature(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_temperature(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_temperature(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__driver_temperature(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__driver_temperature(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__driver_temperature(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__driver_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__driver_temperature(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__driver_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__driver_temperature(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__cart_expect_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_expect_position(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_expect_position(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__cart_expect_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_expect_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__cart_expect_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_expect_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__cart_expect_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_expect_velocity(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_expect_velocity(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__cart_expect_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_expect_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__cart_expect_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_expect_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__cart_expect_accelera(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_expect_accelera(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_expect_accelera(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__cart_expect_accelera(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_expect_accelera(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__cart_expect_accelera(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_expect_accelera(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__cart_actual_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_actual_position(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_actual_position(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__cart_actual_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_actual_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__cart_actual_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_actual_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__cart_actual_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_actual_velocity(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_actual_velocity(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__cart_actual_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_actual_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__cart_actual_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_actual_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__cart_actual_accelera(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_actual_accelera(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_actual_accelera(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__cart_actual_accelera(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_actual_accelera(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__cart_actual_accelera(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_actual_accelera(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__slave_ready(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__slave_ready(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__slave_ready(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__slave_ready(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__slave_ready(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__slave_ready(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__slave_ready(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__DucoRobotState_message_member_array[21] = {
  {
    "joint_expect_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, joint_expect_position),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_expect_position,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_expect_position,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_expect_position,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_expect_position,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_expect_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_expect_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, joint_expect_velocity),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_expect_velocity,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_expect_velocity,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_expect_velocity,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_expect_velocity,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_expect_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_expect_accelera",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, joint_expect_accelera),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_expect_accelera,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_expect_accelera,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_expect_accelera,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_expect_accelera,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_expect_accelera,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_actual_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, joint_actual_position),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_actual_position,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_actual_position,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_actual_position,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_actual_position,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_actual_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_actual_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, joint_actual_velocity),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_actual_velocity,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_actual_velocity,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_actual_velocity,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_actual_velocity,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_actual_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_actual_accelera",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, joint_actual_accelera),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_actual_accelera,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_actual_accelera,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_actual_accelera,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_actual_accelera,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_actual_accelera,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_actual_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, joint_actual_current),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_actual_current,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_actual_current,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_actual_current,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_actual_current,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_actual_current,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, joint_temperature),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__joint_temperature,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__joint_temperature,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__joint_temperature,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__joint_temperature,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__joint_temperature,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "driver_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, driver_temperature),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__driver_temperature,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__driver_temperature,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__driver_temperature,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__driver_temperature,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__driver_temperature,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cart_expect_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, cart_expect_position),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__cart_expect_position,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_expect_position,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_expect_position,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__cart_expect_position,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__cart_expect_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cart_expect_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, cart_expect_velocity),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__cart_expect_velocity,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_expect_velocity,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_expect_velocity,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__cart_expect_velocity,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__cart_expect_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cart_expect_accelera",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, cart_expect_accelera),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__cart_expect_accelera,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_expect_accelera,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_expect_accelera,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__cart_expect_accelera,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__cart_expect_accelera,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cart_actual_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, cart_actual_position),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__cart_actual_position,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_actual_position,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_actual_position,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__cart_actual_position,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__cart_actual_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cart_actual_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, cart_actual_velocity),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__cart_actual_velocity,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_actual_velocity,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_actual_velocity,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__cart_actual_velocity,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__cart_actual_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cart_actual_accelera",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, cart_actual_accelera),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__cart_actual_accelera,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__cart_actual_accelera,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__cart_actual_accelera,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__cart_actual_accelera,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__cart_actual_accelera,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slave_ready",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, slave_ready),  // bytes offset in struct
    NULL,  // default value
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__size_function__DucoRobotState__slave_ready,  // size() function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_const_function__DucoRobotState__slave_ready,  // get_const(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__get_function__DucoRobotState__slave_ready,  // get(index) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__fetch_function__DucoRobotState__slave_ready,  // fetch(index, &value) function pointer
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__assign_function__DucoRobotState__slave_ready,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, collision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_axis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, collision_axis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emc_stop_signal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, emc_stop_signal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, robot_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duco_msg__msg__DucoRobotState, robot_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__DucoRobotState_message_members = {
  "duco_msg__msg",  // message namespace
  "DucoRobotState",  // message name
  21,  // number of fields
  sizeof(duco_msg__msg__DucoRobotState),
  duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__DucoRobotState_message_member_array,  // message members
  duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__DucoRobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__DucoRobotState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__DucoRobotState_message_type_support_handle = {
  0,
  &duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__DucoRobotState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duco_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duco_msg, msg, DucoRobotState)() {
  if (!duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__DucoRobotState_message_type_support_handle.typesupport_identifier) {
    duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__DucoRobotState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duco_msg__msg__DucoRobotState__rosidl_typesupport_introspection_c__DucoRobotState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
