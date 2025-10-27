// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aivt_interfaces:msg/TargetPose.idl
// generated code does not contain a copyright notice
#include "aivt_interfaces/msg/detail/target_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aivt_interfaces__msg__TargetPose__init(aivt_interfaces__msg__TargetPose * msg)
{
  if (!msg) {
    return false;
  }
  // target_pose
  return true;
}

void
aivt_interfaces__msg__TargetPose__fini(aivt_interfaces__msg__TargetPose * msg)
{
  if (!msg) {
    return;
  }
  // target_pose
}

bool
aivt_interfaces__msg__TargetPose__are_equal(const aivt_interfaces__msg__TargetPose * lhs, const aivt_interfaces__msg__TargetPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_pose
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->target_pose[i] != rhs->target_pose[i]) {
      return false;
    }
  }
  return true;
}

bool
aivt_interfaces__msg__TargetPose__copy(
  const aivt_interfaces__msg__TargetPose * input,
  aivt_interfaces__msg__TargetPose * output)
{
  if (!input || !output) {
    return false;
  }
  // target_pose
  for (size_t i = 0; i < 6; ++i) {
    output->target_pose[i] = input->target_pose[i];
  }
  return true;
}

aivt_interfaces__msg__TargetPose *
aivt_interfaces__msg__TargetPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aivt_interfaces__msg__TargetPose * msg = (aivt_interfaces__msg__TargetPose *)allocator.allocate(sizeof(aivt_interfaces__msg__TargetPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aivt_interfaces__msg__TargetPose));
  bool success = aivt_interfaces__msg__TargetPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aivt_interfaces__msg__TargetPose__destroy(aivt_interfaces__msg__TargetPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aivt_interfaces__msg__TargetPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aivt_interfaces__msg__TargetPose__Sequence__init(aivt_interfaces__msg__TargetPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aivt_interfaces__msg__TargetPose * data = NULL;

  if (size) {
    data = (aivt_interfaces__msg__TargetPose *)allocator.zero_allocate(size, sizeof(aivt_interfaces__msg__TargetPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aivt_interfaces__msg__TargetPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aivt_interfaces__msg__TargetPose__fini(&data[i - 1]);
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
aivt_interfaces__msg__TargetPose__Sequence__fini(aivt_interfaces__msg__TargetPose__Sequence * array)
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
      aivt_interfaces__msg__TargetPose__fini(&array->data[i]);
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

aivt_interfaces__msg__TargetPose__Sequence *
aivt_interfaces__msg__TargetPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aivt_interfaces__msg__TargetPose__Sequence * array = (aivt_interfaces__msg__TargetPose__Sequence *)allocator.allocate(sizeof(aivt_interfaces__msg__TargetPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aivt_interfaces__msg__TargetPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aivt_interfaces__msg__TargetPose__Sequence__destroy(aivt_interfaces__msg__TargetPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aivt_interfaces__msg__TargetPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aivt_interfaces__msg__TargetPose__Sequence__are_equal(const aivt_interfaces__msg__TargetPose__Sequence * lhs, const aivt_interfaces__msg__TargetPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aivt_interfaces__msg__TargetPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aivt_interfaces__msg__TargetPose__Sequence__copy(
  const aivt_interfaces__msg__TargetPose__Sequence * input,
  aivt_interfaces__msg__TargetPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aivt_interfaces__msg__TargetPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aivt_interfaces__msg__TargetPose * data =
      (aivt_interfaces__msg__TargetPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aivt_interfaces__msg__TargetPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aivt_interfaces__msg__TargetPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aivt_interfaces__msg__TargetPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
