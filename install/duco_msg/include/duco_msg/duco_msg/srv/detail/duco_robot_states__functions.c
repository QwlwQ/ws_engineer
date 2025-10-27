// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duco_msg:srv/DucoRobotStates.idl
// generated code does not contain a copyright notice
#include "duco_msg/srv/detail/duco_robot_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
duco_msg__srv__DucoRobotStates_Request__init(duco_msg__srv__DucoRobotStates_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
duco_msg__srv__DucoRobotStates_Request__fini(duco_msg__srv__DucoRobotStates_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
duco_msg__srv__DucoRobotStates_Request__are_equal(const duco_msg__srv__DucoRobotStates_Request * lhs, const duco_msg__srv__DucoRobotStates_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
duco_msg__srv__DucoRobotStates_Request__copy(
  const duco_msg__srv__DucoRobotStates_Request * input,
  duco_msg__srv__DucoRobotStates_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

duco_msg__srv__DucoRobotStates_Request *
duco_msg__srv__DucoRobotStates_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__srv__DucoRobotStates_Request * msg = (duco_msg__srv__DucoRobotStates_Request *)allocator.allocate(sizeof(duco_msg__srv__DucoRobotStates_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duco_msg__srv__DucoRobotStates_Request));
  bool success = duco_msg__srv__DucoRobotStates_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duco_msg__srv__DucoRobotStates_Request__destroy(duco_msg__srv__DucoRobotStates_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duco_msg__srv__DucoRobotStates_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duco_msg__srv__DucoRobotStates_Request__Sequence__init(duco_msg__srv__DucoRobotStates_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__srv__DucoRobotStates_Request * data = NULL;

  if (size) {
    data = (duco_msg__srv__DucoRobotStates_Request *)allocator.zero_allocate(size, sizeof(duco_msg__srv__DucoRobotStates_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duco_msg__srv__DucoRobotStates_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duco_msg__srv__DucoRobotStates_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
duco_msg__srv__DucoRobotStates_Request__Sequence__fini(duco_msg__srv__DucoRobotStates_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      duco_msg__srv__DucoRobotStates_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

duco_msg__srv__DucoRobotStates_Request__Sequence *
duco_msg__srv__DucoRobotStates_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__srv__DucoRobotStates_Request__Sequence * array = (duco_msg__srv__DucoRobotStates_Request__Sequence *)allocator.allocate(sizeof(duco_msg__srv__DucoRobotStates_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duco_msg__srv__DucoRobotStates_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duco_msg__srv__DucoRobotStates_Request__Sequence__destroy(duco_msg__srv__DucoRobotStates_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duco_msg__srv__DucoRobotStates_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duco_msg__srv__DucoRobotStates_Request__Sequence__are_equal(const duco_msg__srv__DucoRobotStates_Request__Sequence * lhs, const duco_msg__srv__DucoRobotStates_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duco_msg__srv__DucoRobotStates_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duco_msg__srv__DucoRobotStates_Request__Sequence__copy(
  const duco_msg__srv__DucoRobotStates_Request__Sequence * input,
  duco_msg__srv__DucoRobotStates_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duco_msg__srv__DucoRobotStates_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duco_msg__srv__DucoRobotStates_Request * data =
      (duco_msg__srv__DucoRobotStates_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duco_msg__srv__DucoRobotStates_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duco_msg__srv__DucoRobotStates_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duco_msg__srv__DucoRobotStates_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `robot_states`
#include "duco_msg/msg/detail/duco_robot_state__functions.h"

bool
duco_msg__srv__DucoRobotStates_Response__init(duco_msg__srv__DucoRobotStates_Response * msg)
{
  if (!msg) {
    return false;
  }
  // robot_states
  if (!duco_msg__msg__DucoRobotState__init(&msg->robot_states)) {
    duco_msg__srv__DucoRobotStates_Response__fini(msg);
    return false;
  }
  return true;
}

void
duco_msg__srv__DucoRobotStates_Response__fini(duco_msg__srv__DucoRobotStates_Response * msg)
{
  if (!msg) {
    return;
  }
  // robot_states
  duco_msg__msg__DucoRobotState__fini(&msg->robot_states);
}

bool
duco_msg__srv__DucoRobotStates_Response__are_equal(const duco_msg__srv__DucoRobotStates_Response * lhs, const duco_msg__srv__DucoRobotStates_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_states
  if (!duco_msg__msg__DucoRobotState__are_equal(
      &(lhs->robot_states), &(rhs->robot_states)))
  {
    return false;
  }
  return true;
}

bool
duco_msg__srv__DucoRobotStates_Response__copy(
  const duco_msg__srv__DucoRobotStates_Response * input,
  duco_msg__srv__DucoRobotStates_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_states
  if (!duco_msg__msg__DucoRobotState__copy(
      &(input->robot_states), &(output->robot_states)))
  {
    return false;
  }
  return true;
}

duco_msg__srv__DucoRobotStates_Response *
duco_msg__srv__DucoRobotStates_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__srv__DucoRobotStates_Response * msg = (duco_msg__srv__DucoRobotStates_Response *)allocator.allocate(sizeof(duco_msg__srv__DucoRobotStates_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duco_msg__srv__DucoRobotStates_Response));
  bool success = duco_msg__srv__DucoRobotStates_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duco_msg__srv__DucoRobotStates_Response__destroy(duco_msg__srv__DucoRobotStates_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duco_msg__srv__DucoRobotStates_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duco_msg__srv__DucoRobotStates_Response__Sequence__init(duco_msg__srv__DucoRobotStates_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__srv__DucoRobotStates_Response * data = NULL;

  if (size) {
    data = (duco_msg__srv__DucoRobotStates_Response *)allocator.zero_allocate(size, sizeof(duco_msg__srv__DucoRobotStates_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duco_msg__srv__DucoRobotStates_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duco_msg__srv__DucoRobotStates_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
duco_msg__srv__DucoRobotStates_Response__Sequence__fini(duco_msg__srv__DucoRobotStates_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      duco_msg__srv__DucoRobotStates_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

duco_msg__srv__DucoRobotStates_Response__Sequence *
duco_msg__srv__DucoRobotStates_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__srv__DucoRobotStates_Response__Sequence * array = (duco_msg__srv__DucoRobotStates_Response__Sequence *)allocator.allocate(sizeof(duco_msg__srv__DucoRobotStates_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duco_msg__srv__DucoRobotStates_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duco_msg__srv__DucoRobotStates_Response__Sequence__destroy(duco_msg__srv__DucoRobotStates_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duco_msg__srv__DucoRobotStates_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duco_msg__srv__DucoRobotStates_Response__Sequence__are_equal(const duco_msg__srv__DucoRobotStates_Response__Sequence * lhs, const duco_msg__srv__DucoRobotStates_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duco_msg__srv__DucoRobotStates_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duco_msg__srv__DucoRobotStates_Response__Sequence__copy(
  const duco_msg__srv__DucoRobotStates_Response__Sequence * input,
  duco_msg__srv__DucoRobotStates_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duco_msg__srv__DucoRobotStates_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duco_msg__srv__DucoRobotStates_Response * data =
      (duco_msg__srv__DucoRobotStates_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duco_msg__srv__DucoRobotStates_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duco_msg__srv__DucoRobotStates_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duco_msg__srv__DucoRobotStates_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
