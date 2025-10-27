// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duco_msg:msg/VirtualServoPose.idl
// generated code does not contain a copyright notice
#include "duco_msg/msg/detail/virtual_servo_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `arm_group`
#include "rosidl_runtime_c/string_functions.h"

bool
duco_msg__msg__VirtualServoPose__init(duco_msg__msg__VirtualServoPose * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    duco_msg__msg__VirtualServoPose__fini(msg);
    return false;
  }
  // arm_group
  if (!rosidl_runtime_c__String__init(&msg->arm_group)) {
    duco_msg__msg__VirtualServoPose__fini(msg);
    return false;
  }
  return true;
}

void
duco_msg__msg__VirtualServoPose__fini(duco_msg__msg__VirtualServoPose * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // arm_group
  rosidl_runtime_c__String__fini(&msg->arm_group);
}

bool
duco_msg__msg__VirtualServoPose__are_equal(const duco_msg__msg__VirtualServoPose * lhs, const duco_msg__msg__VirtualServoPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // arm_group
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->arm_group), &(rhs->arm_group)))
  {
    return false;
  }
  return true;
}

bool
duco_msg__msg__VirtualServoPose__copy(
  const duco_msg__msg__VirtualServoPose * input,
  duco_msg__msg__VirtualServoPose * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // arm_group
  if (!rosidl_runtime_c__String__copy(
      &(input->arm_group), &(output->arm_group)))
  {
    return false;
  }
  return true;
}

duco_msg__msg__VirtualServoPose *
duco_msg__msg__VirtualServoPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__msg__VirtualServoPose * msg = (duco_msg__msg__VirtualServoPose *)allocator.allocate(sizeof(duco_msg__msg__VirtualServoPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duco_msg__msg__VirtualServoPose));
  bool success = duco_msg__msg__VirtualServoPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duco_msg__msg__VirtualServoPose__destroy(duco_msg__msg__VirtualServoPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duco_msg__msg__VirtualServoPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duco_msg__msg__VirtualServoPose__Sequence__init(duco_msg__msg__VirtualServoPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__msg__VirtualServoPose * data = NULL;

  if (size) {
    data = (duco_msg__msg__VirtualServoPose *)allocator.zero_allocate(size, sizeof(duco_msg__msg__VirtualServoPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duco_msg__msg__VirtualServoPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duco_msg__msg__VirtualServoPose__fini(&data[i - 1]);
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
duco_msg__msg__VirtualServoPose__Sequence__fini(duco_msg__msg__VirtualServoPose__Sequence * array)
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
      duco_msg__msg__VirtualServoPose__fini(&array->data[i]);
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

duco_msg__msg__VirtualServoPose__Sequence *
duco_msg__msg__VirtualServoPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__msg__VirtualServoPose__Sequence * array = (duco_msg__msg__VirtualServoPose__Sequence *)allocator.allocate(sizeof(duco_msg__msg__VirtualServoPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duco_msg__msg__VirtualServoPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duco_msg__msg__VirtualServoPose__Sequence__destroy(duco_msg__msg__VirtualServoPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duco_msg__msg__VirtualServoPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duco_msg__msg__VirtualServoPose__Sequence__are_equal(const duco_msg__msg__VirtualServoPose__Sequence * lhs, const duco_msg__msg__VirtualServoPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duco_msg__msg__VirtualServoPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duco_msg__msg__VirtualServoPose__Sequence__copy(
  const duco_msg__msg__VirtualServoPose__Sequence * input,
  duco_msg__msg__VirtualServoPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duco_msg__msg__VirtualServoPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duco_msg__msg__VirtualServoPose * data =
      (duco_msg__msg__VirtualServoPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duco_msg__msg__VirtualServoPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duco_msg__msg__VirtualServoPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duco_msg__msg__VirtualServoPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
