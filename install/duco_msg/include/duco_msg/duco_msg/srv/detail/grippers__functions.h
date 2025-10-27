// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from duco_msg:srv/Grippers.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__GRIPPERS__FUNCTIONS_H_
#define DUCO_MSG__SRV__DETAIL__GRIPPERS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "duco_msg/msg/rosidl_generator_c__visibility_control.h"

#include "duco_msg/srv/detail/grippers__struct.h"

/// Initialize srv/Grippers message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * duco_msg__srv__Grippers_Request
 * )) before or use
 * duco_msg__srv__Grippers_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__srv__Grippers_Request__init(duco_msg__srv__Grippers_Request * msg);

/// Finalize srv/Grippers message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
void
duco_msg__srv__Grippers_Request__fini(duco_msg__srv__Grippers_Request * msg);

/// Create srv/Grippers message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * duco_msg__srv__Grippers_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
duco_msg__srv__Grippers_Request *
duco_msg__srv__Grippers_Request__create();

/// Destroy srv/Grippers message.
/**
 * It calls
 * duco_msg__srv__Grippers_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
void
duco_msg__srv__Grippers_Request__destroy(duco_msg__srv__Grippers_Request * msg);

/// Check for srv/Grippers message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__srv__Grippers_Request__are_equal(const duco_msg__srv__Grippers_Request * lhs, const duco_msg__srv__Grippers_Request * rhs);

/// Copy a srv/Grippers message.
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
duco_msg__srv__Grippers_Request__copy(
  const duco_msg__srv__Grippers_Request * input,
  duco_msg__srv__Grippers_Request * output);

/// Initialize array of srv/Grippers messages.
/**
 * It allocates the memory for the number of elements and calls
 * duco_msg__srv__Grippers_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__srv__Grippers_Request__Sequence__init(duco_msg__srv__Grippers_Request__Sequence * array, size_t size);

/// Finalize array of srv/Grippers messages.
/**
 * It calls
 * duco_msg__srv__Grippers_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
void
duco_msg__srv__Grippers_Request__Sequence__fini(duco_msg__srv__Grippers_Request__Sequence * array);

/// Create array of srv/Grippers messages.
/**
 * It allocates the memory for the array and calls
 * duco_msg__srv__Grippers_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
duco_msg__srv__Grippers_Request__Sequence *
duco_msg__srv__Grippers_Request__Sequence__create(size_t size);

/// Destroy array of srv/Grippers messages.
/**
 * It calls
 * duco_msg__srv__Grippers_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
void
duco_msg__srv__Grippers_Request__Sequence__destroy(duco_msg__srv__Grippers_Request__Sequence * array);

/// Check for srv/Grippers message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__srv__Grippers_Request__Sequence__are_equal(const duco_msg__srv__Grippers_Request__Sequence * lhs, const duco_msg__srv__Grippers_Request__Sequence * rhs);

/// Copy an array of srv/Grippers messages.
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
duco_msg__srv__Grippers_Request__Sequence__copy(
  const duco_msg__srv__Grippers_Request__Sequence * input,
  duco_msg__srv__Grippers_Request__Sequence * output);

/// Initialize srv/Grippers message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * duco_msg__srv__Grippers_Response
 * )) before or use
 * duco_msg__srv__Grippers_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__srv__Grippers_Response__init(duco_msg__srv__Grippers_Response * msg);

/// Finalize srv/Grippers message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
void
duco_msg__srv__Grippers_Response__fini(duco_msg__srv__Grippers_Response * msg);

/// Create srv/Grippers message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * duco_msg__srv__Grippers_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
duco_msg__srv__Grippers_Response *
duco_msg__srv__Grippers_Response__create();

/// Destroy srv/Grippers message.
/**
 * It calls
 * duco_msg__srv__Grippers_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
void
duco_msg__srv__Grippers_Response__destroy(duco_msg__srv__Grippers_Response * msg);

/// Check for srv/Grippers message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__srv__Grippers_Response__are_equal(const duco_msg__srv__Grippers_Response * lhs, const duco_msg__srv__Grippers_Response * rhs);

/// Copy a srv/Grippers message.
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
duco_msg__srv__Grippers_Response__copy(
  const duco_msg__srv__Grippers_Response * input,
  duco_msg__srv__Grippers_Response * output);

/// Initialize array of srv/Grippers messages.
/**
 * It allocates the memory for the number of elements and calls
 * duco_msg__srv__Grippers_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__srv__Grippers_Response__Sequence__init(duco_msg__srv__Grippers_Response__Sequence * array, size_t size);

/// Finalize array of srv/Grippers messages.
/**
 * It calls
 * duco_msg__srv__Grippers_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
void
duco_msg__srv__Grippers_Response__Sequence__fini(duco_msg__srv__Grippers_Response__Sequence * array);

/// Create array of srv/Grippers messages.
/**
 * It allocates the memory for the array and calls
 * duco_msg__srv__Grippers_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
duco_msg__srv__Grippers_Response__Sequence *
duco_msg__srv__Grippers_Response__Sequence__create(size_t size);

/// Destroy array of srv/Grippers messages.
/**
 * It calls
 * duco_msg__srv__Grippers_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
void
duco_msg__srv__Grippers_Response__Sequence__destroy(duco_msg__srv__Grippers_Response__Sequence * array);

/// Check for srv/Grippers message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_duco_msg
bool
duco_msg__srv__Grippers_Response__Sequence__are_equal(const duco_msg__srv__Grippers_Response__Sequence * lhs, const duco_msg__srv__Grippers_Response__Sequence * rhs);

/// Copy an array of srv/Grippers messages.
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
duco_msg__srv__Grippers_Response__Sequence__copy(
  const duco_msg__srv__Grippers_Response__Sequence * input,
  duco_msg__srv__Grippers_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DUCO_MSG__SRV__DETAIL__GRIPPERS__FUNCTIONS_H_
