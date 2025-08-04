// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces:msg/UserJoint.idl
// generated code does not contain a copyright notice
#include "base_interfaces/msg/detail/user_joint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces__msg__UserJoint__init(base_interfaces__msg__UserJoint * msg)
{
  if (!msg) {
    return false;
  }
  // joint0
  // joint1
  // joint2
  // joint3
  // joint4
  // joint5
  return true;
}

void
base_interfaces__msg__UserJoint__fini(base_interfaces__msg__UserJoint * msg)
{
  if (!msg) {
    return;
  }
  // joint0
  // joint1
  // joint2
  // joint3
  // joint4
  // joint5
}

bool
base_interfaces__msg__UserJoint__are_equal(const base_interfaces__msg__UserJoint * lhs, const base_interfaces__msg__UserJoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint0
  if (lhs->joint0 != rhs->joint0) {
    return false;
  }
  // joint1
  if (lhs->joint1 != rhs->joint1) {
    return false;
  }
  // joint2
  if (lhs->joint2 != rhs->joint2) {
    return false;
  }
  // joint3
  if (lhs->joint3 != rhs->joint3) {
    return false;
  }
  // joint4
  if (lhs->joint4 != rhs->joint4) {
    return false;
  }
  // joint5
  if (lhs->joint5 != rhs->joint5) {
    return false;
  }
  return true;
}

bool
base_interfaces__msg__UserJoint__copy(
  const base_interfaces__msg__UserJoint * input,
  base_interfaces__msg__UserJoint * output)
{
  if (!input || !output) {
    return false;
  }
  // joint0
  output->joint0 = input->joint0;
  // joint1
  output->joint1 = input->joint1;
  // joint2
  output->joint2 = input->joint2;
  // joint3
  output->joint3 = input->joint3;
  // joint4
  output->joint4 = input->joint4;
  // joint5
  output->joint5 = input->joint5;
  return true;
}

base_interfaces__msg__UserJoint *
base_interfaces__msg__UserJoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__msg__UserJoint * msg = (base_interfaces__msg__UserJoint *)allocator.allocate(sizeof(base_interfaces__msg__UserJoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__msg__UserJoint));
  bool success = base_interfaces__msg__UserJoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__msg__UserJoint__destroy(base_interfaces__msg__UserJoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__msg__UserJoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__msg__UserJoint__Sequence__init(base_interfaces__msg__UserJoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__msg__UserJoint * data = NULL;

  if (size) {
    data = (base_interfaces__msg__UserJoint *)allocator.zero_allocate(size, sizeof(base_interfaces__msg__UserJoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__msg__UserJoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__msg__UserJoint__fini(&data[i - 1]);
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
base_interfaces__msg__UserJoint__Sequence__fini(base_interfaces__msg__UserJoint__Sequence * array)
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
      base_interfaces__msg__UserJoint__fini(&array->data[i]);
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

base_interfaces__msg__UserJoint__Sequence *
base_interfaces__msg__UserJoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__msg__UserJoint__Sequence * array = (base_interfaces__msg__UserJoint__Sequence *)allocator.allocate(sizeof(base_interfaces__msg__UserJoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__msg__UserJoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__msg__UserJoint__Sequence__destroy(base_interfaces__msg__UserJoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__msg__UserJoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__msg__UserJoint__Sequence__are_equal(const base_interfaces__msg__UserJoint__Sequence * lhs, const base_interfaces__msg__UserJoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__msg__UserJoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__msg__UserJoint__Sequence__copy(
  const base_interfaces__msg__UserJoint__Sequence * input,
  base_interfaces__msg__UserJoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__msg__UserJoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__msg__UserJoint * data =
      (base_interfaces__msg__UserJoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__msg__UserJoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__msg__UserJoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__msg__UserJoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
