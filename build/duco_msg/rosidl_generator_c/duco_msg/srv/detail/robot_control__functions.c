// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duco_msg:srv/RobotControl.idl
// generated code does not contain a copyright notice
#include "duco_msg/srv/detail/robot_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
duco_msg__srv__RobotControl_Request__init(duco_msg__srv__RobotControl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    duco_msg__srv__RobotControl_Request__fini(msg);
    return false;
  }
  // arm_num
  // block
  return true;
}

void
duco_msg__srv__RobotControl_Request__fini(duco_msg__srv__RobotControl_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // arm_num
  // block
}

bool
duco_msg__srv__RobotControl_Request__are_equal(const duco_msg__srv__RobotControl_Request * lhs, const duco_msg__srv__RobotControl_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // arm_num
  if (lhs->arm_num != rhs->arm_num) {
    return false;
  }
  // block
  if (lhs->block != rhs->block) {
    return false;
  }
  return true;
}

bool
duco_msg__srv__RobotControl_Request__copy(
  const duco_msg__srv__RobotControl_Request * input,
  duco_msg__srv__RobotControl_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // arm_num
  output->arm_num = input->arm_num;
  // block
  output->block = input->block;
  return true;
}

duco_msg__srv__RobotControl_Request *
duco_msg__srv__RobotControl_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__srv__RobotControl_Request * msg = (duco_msg__srv__RobotControl_Request *)allocator.allocate(sizeof(duco_msg__srv__RobotControl_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duco_msg__srv__RobotControl_Request));
  bool success = duco_msg__srv__RobotControl_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duco_msg__srv__RobotControl_Request__destroy(duco_msg__srv__RobotControl_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duco_msg__srv__RobotControl_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duco_msg__srv__RobotControl_Request__Sequence__init(duco_msg__srv__RobotControl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__srv__RobotControl_Request * data = NULL;

  if (size) {
    data = (duco_msg__srv__RobotControl_Request *)allocator.zero_allocate(size, sizeof(duco_msg__srv__RobotControl_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duco_msg__srv__RobotControl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duco_msg__srv__RobotControl_Request__fini(&data[i - 1]);
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
duco_msg__srv__RobotControl_Request__Sequence__fini(duco_msg__srv__RobotControl_Request__Sequence * array)
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
      duco_msg__srv__RobotControl_Request__fini(&array->data[i]);
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

duco_msg__srv__RobotControl_Request__Sequence *
duco_msg__srv__RobotControl_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__srv__RobotControl_Request__Sequence * array = (duco_msg__srv__RobotControl_Request__Sequence *)allocator.allocate(sizeof(duco_msg__srv__RobotControl_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duco_msg__srv__RobotControl_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duco_msg__srv__RobotControl_Request__Sequence__destroy(duco_msg__srv__RobotControl_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duco_msg__srv__RobotControl_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duco_msg__srv__RobotControl_Request__Sequence__are_equal(const duco_msg__srv__RobotControl_Request__Sequence * lhs, const duco_msg__srv__RobotControl_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duco_msg__srv__RobotControl_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duco_msg__srv__RobotControl_Request__Sequence__copy(
  const duco_msg__srv__RobotControl_Request__Sequence * input,
  duco_msg__srv__RobotControl_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duco_msg__srv__RobotControl_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duco_msg__srv__RobotControl_Request * data =
      (duco_msg__srv__RobotControl_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duco_msg__srv__RobotControl_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duco_msg__srv__RobotControl_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duco_msg__srv__RobotControl_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
duco_msg__srv__RobotControl_Response__init(duco_msg__srv__RobotControl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    duco_msg__srv__RobotControl_Response__fini(msg);
    return false;
  }
  return true;
}

void
duco_msg__srv__RobotControl_Response__fini(duco_msg__srv__RobotControl_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  rosidl_runtime_c__String__fini(&msg->response);
}

bool
duco_msg__srv__RobotControl_Response__are_equal(const duco_msg__srv__RobotControl_Response * lhs, const duco_msg__srv__RobotControl_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
duco_msg__srv__RobotControl_Response__copy(
  const duco_msg__srv__RobotControl_Response * input,
  duco_msg__srv__RobotControl_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

duco_msg__srv__RobotControl_Response *
duco_msg__srv__RobotControl_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__srv__RobotControl_Response * msg = (duco_msg__srv__RobotControl_Response *)allocator.allocate(sizeof(duco_msg__srv__RobotControl_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duco_msg__srv__RobotControl_Response));
  bool success = duco_msg__srv__RobotControl_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duco_msg__srv__RobotControl_Response__destroy(duco_msg__srv__RobotControl_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duco_msg__srv__RobotControl_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duco_msg__srv__RobotControl_Response__Sequence__init(duco_msg__srv__RobotControl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__srv__RobotControl_Response * data = NULL;

  if (size) {
    data = (duco_msg__srv__RobotControl_Response *)allocator.zero_allocate(size, sizeof(duco_msg__srv__RobotControl_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duco_msg__srv__RobotControl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duco_msg__srv__RobotControl_Response__fini(&data[i - 1]);
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
duco_msg__srv__RobotControl_Response__Sequence__fini(duco_msg__srv__RobotControl_Response__Sequence * array)
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
      duco_msg__srv__RobotControl_Response__fini(&array->data[i]);
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

duco_msg__srv__RobotControl_Response__Sequence *
duco_msg__srv__RobotControl_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__srv__RobotControl_Response__Sequence * array = (duco_msg__srv__RobotControl_Response__Sequence *)allocator.allocate(sizeof(duco_msg__srv__RobotControl_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duco_msg__srv__RobotControl_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duco_msg__srv__RobotControl_Response__Sequence__destroy(duco_msg__srv__RobotControl_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duco_msg__srv__RobotControl_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duco_msg__srv__RobotControl_Response__Sequence__are_equal(const duco_msg__srv__RobotControl_Response__Sequence * lhs, const duco_msg__srv__RobotControl_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duco_msg__srv__RobotControl_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duco_msg__srv__RobotControl_Response__Sequence__copy(
  const duco_msg__srv__RobotControl_Response__Sequence * input,
  duco_msg__srv__RobotControl_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duco_msg__srv__RobotControl_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duco_msg__srv__RobotControl_Response * data =
      (duco_msg__srv__RobotControl_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duco_msg__srv__RobotControl_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duco_msg__srv__RobotControl_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duco_msg__srv__RobotControl_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
