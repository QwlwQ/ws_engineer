// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duco_msg:msg/VirtualServoPointCloud.idl
// generated code does not contain a copyright notice
#include "duco_msg/msg/detail/virtual_servo_point_cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `point_cloud`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
duco_msg__msg__VirtualServoPointCloud__init(duco_msg__msg__VirtualServoPointCloud * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    duco_msg__msg__VirtualServoPointCloud__fini(msg);
    return false;
  }
  // point_cloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->point_cloud)) {
    duco_msg__msg__VirtualServoPointCloud__fini(msg);
    return false;
  }
  return true;
}

void
duco_msg__msg__VirtualServoPointCloud__fini(duco_msg__msg__VirtualServoPointCloud * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // point_cloud
  sensor_msgs__msg__PointCloud2__fini(&msg->point_cloud);
}

bool
duco_msg__msg__VirtualServoPointCloud__are_equal(const duco_msg__msg__VirtualServoPointCloud * lhs, const duco_msg__msg__VirtualServoPointCloud * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // point_cloud
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->point_cloud), &(rhs->point_cloud)))
  {
    return false;
  }
  return true;
}

bool
duco_msg__msg__VirtualServoPointCloud__copy(
  const duco_msg__msg__VirtualServoPointCloud * input,
  duco_msg__msg__VirtualServoPointCloud * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // point_cloud
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->point_cloud), &(output->point_cloud)))
  {
    return false;
  }
  return true;
}

duco_msg__msg__VirtualServoPointCloud *
duco_msg__msg__VirtualServoPointCloud__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__msg__VirtualServoPointCloud * msg = (duco_msg__msg__VirtualServoPointCloud *)allocator.allocate(sizeof(duco_msg__msg__VirtualServoPointCloud), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duco_msg__msg__VirtualServoPointCloud));
  bool success = duco_msg__msg__VirtualServoPointCloud__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duco_msg__msg__VirtualServoPointCloud__destroy(duco_msg__msg__VirtualServoPointCloud * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duco_msg__msg__VirtualServoPointCloud__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duco_msg__msg__VirtualServoPointCloud__Sequence__init(duco_msg__msg__VirtualServoPointCloud__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__msg__VirtualServoPointCloud * data = NULL;

  if (size) {
    data = (duco_msg__msg__VirtualServoPointCloud *)allocator.zero_allocate(size, sizeof(duco_msg__msg__VirtualServoPointCloud), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duco_msg__msg__VirtualServoPointCloud__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duco_msg__msg__VirtualServoPointCloud__fini(&data[i - 1]);
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
duco_msg__msg__VirtualServoPointCloud__Sequence__fini(duco_msg__msg__VirtualServoPointCloud__Sequence * array)
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
      duco_msg__msg__VirtualServoPointCloud__fini(&array->data[i]);
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

duco_msg__msg__VirtualServoPointCloud__Sequence *
duco_msg__msg__VirtualServoPointCloud__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__msg__VirtualServoPointCloud__Sequence * array = (duco_msg__msg__VirtualServoPointCloud__Sequence *)allocator.allocate(sizeof(duco_msg__msg__VirtualServoPointCloud__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duco_msg__msg__VirtualServoPointCloud__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duco_msg__msg__VirtualServoPointCloud__Sequence__destroy(duco_msg__msg__VirtualServoPointCloud__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duco_msg__msg__VirtualServoPointCloud__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duco_msg__msg__VirtualServoPointCloud__Sequence__are_equal(const duco_msg__msg__VirtualServoPointCloud__Sequence * lhs, const duco_msg__msg__VirtualServoPointCloud__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duco_msg__msg__VirtualServoPointCloud__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duco_msg__msg__VirtualServoPointCloud__Sequence__copy(
  const duco_msg__msg__VirtualServoPointCloud__Sequence * input,
  duco_msg__msg__VirtualServoPointCloud__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duco_msg__msg__VirtualServoPointCloud);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duco_msg__msg__VirtualServoPointCloud * data =
      (duco_msg__msg__VirtualServoPointCloud *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duco_msg__msg__VirtualServoPointCloud__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duco_msg__msg__VirtualServoPointCloud__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duco_msg__msg__VirtualServoPointCloud__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
