// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces:msg/UserPose.idl
// generated code does not contain a copyright notice
#include "base_interfaces/msg/detail/user_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces__msg__UserPose__init(base_interfaces__msg__UserPose * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // yaw
  // pitch
  // roll
  return true;
}

void
base_interfaces__msg__UserPose__fini(base_interfaces__msg__UserPose * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // yaw
  // pitch
  // roll
}

bool
base_interfaces__msg__UserPose__are_equal(const base_interfaces__msg__UserPose * lhs, const base_interfaces__msg__UserPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  return true;
}

bool
base_interfaces__msg__UserPose__copy(
  const base_interfaces__msg__UserPose * input,
  base_interfaces__msg__UserPose * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  return true;
}

base_interfaces__msg__UserPose *
base_interfaces__msg__UserPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__msg__UserPose * msg = (base_interfaces__msg__UserPose *)allocator.allocate(sizeof(base_interfaces__msg__UserPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__msg__UserPose));
  bool success = base_interfaces__msg__UserPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__msg__UserPose__destroy(base_interfaces__msg__UserPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__msg__UserPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__msg__UserPose__Sequence__init(base_interfaces__msg__UserPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__msg__UserPose * data = NULL;

  if (size) {
    data = (base_interfaces__msg__UserPose *)allocator.zero_allocate(size, sizeof(base_interfaces__msg__UserPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__msg__UserPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__msg__UserPose__fini(&data[i - 1]);
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
base_interfaces__msg__UserPose__Sequence__fini(base_interfaces__msg__UserPose__Sequence * array)
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
      base_interfaces__msg__UserPose__fini(&array->data[i]);
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

base_interfaces__msg__UserPose__Sequence *
base_interfaces__msg__UserPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__msg__UserPose__Sequence * array = (base_interfaces__msg__UserPose__Sequence *)allocator.allocate(sizeof(base_interfaces__msg__UserPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__msg__UserPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__msg__UserPose__Sequence__destroy(base_interfaces__msg__UserPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__msg__UserPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__msg__UserPose__Sequence__are_equal(const base_interfaces__msg__UserPose__Sequence * lhs, const base_interfaces__msg__UserPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__msg__UserPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__msg__UserPose__Sequence__copy(
  const base_interfaces__msg__UserPose__Sequence * input,
  base_interfaces__msg__UserPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__msg__UserPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__msg__UserPose * data =
      (base_interfaces__msg__UserPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__msg__UserPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__msg__UserPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__msg__UserPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
