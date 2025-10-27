// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from duco_msg:msg/VirtualServoPose.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__FUNCTIONS_H_
#define DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "duco_msg/msg/rosidl_generator_c__visibility_control.h"

#include "duco_msg/msg/detail/virtual_servo_pose__struct.h"

/// Initialize msg/VirtualServoPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * duco_msg__msg__VirtualServoPose
 * )) before or use
 * duco_msg__msg__VirtualServoPose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__msg__VirtualServoPose__init(duco_msg__msg__VirtualServoPose * msg);

/// Finalize msg/VirtualServoPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
void
duco_msg__msg__VirtualServoPose__fini(duco_msg__msg__VirtualServoPose * msg);

/// Create msg/VirtualServoPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * duco_msg__msg__VirtualServoPose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
duco_msg__msg__VirtualServoPose *
duco_msg__msg__VirtualServoPose__create();

/// Destroy msg/VirtualServoPose message.
/**
 * It calls
 * duco_msg__msg__VirtualServoPose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
void
duco_msg__msg__VirtualServoPose__destroy(duco_msg__msg__VirtualServoPose * msg);

/// Check for msg/VirtualServoPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__msg__VirtualServoPose__are_equal(const duco_msg__msg__VirtualServoPose * lhs, const duco_msg__msg__VirtualServoPose * rhs);

/// Copy a msg/VirtualServoPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__msg__VirtualServoPose__copy(
  const duco_msg__msg__VirtualServoPose * input,
  duco_msg__msg__VirtualServoPose * output);

/// Initialize array of msg/VirtualServoPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * duco_msg__msg__VirtualServoPose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__msg__VirtualServoPose__Sequence__init(duco_msg__msg__VirtualServoPose__Sequence * array, size_t size);

/// Finalize array of msg/VirtualServoPose messages.
/**
 * It calls
 * duco_msg__msg__VirtualServoPose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
void
duco_msg__msg__VirtualServoPose__Sequence__fini(duco_msg__msg__VirtualServoPose__Sequence * array);

/// Create array of msg/VirtualServoPose messages.
/**
 * It allocates the memory for the array and calls
 * duco_msg__msg__VirtualServoPose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
duco_msg__msg__VirtualServoPose__Sequence *
duco_msg__msg__VirtualServoPose__Sequence__create(size_t size);

/// Destroy array of msg/VirtualServoPose messages.
/**
 * It calls
 * duco_msg__msg__VirtualServoPose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
void
duco_msg__msg__VirtualServoPose__Sequence__destroy(duco_msg__msg__VirtualServoPose__Sequence * array);

/// Check for msg/VirtualServoPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__msg__VirtualServoPose__Sequence__are_equal(const duco_msg__msg__VirtualServoPose__Sequence * lhs, const duco_msg__msg__VirtualServoPose__Sequence * rhs);

/// Copy an array of msg/VirtualServoPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__msg__VirtualServoPose__Sequence__copy(
  const duco_msg__msg__VirtualServoPose__Sequence * input,
  duco_msg__msg__VirtualServoPose__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__FUNCTIONS_H_
