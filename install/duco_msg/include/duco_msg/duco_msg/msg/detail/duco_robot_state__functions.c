// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from duco_msg:msg/DucoRobotState.idl
// generated code does not contain a copyright notice
#include "duco_msg/msg/detail/duco_robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
duco_msg__msg__DucoRobotState__init(duco_msg__msg__DucoRobotState * msg)
{
  if (!msg) {
    return false;
  }
  // joint_expect_position
  // joint_expect_velocity
  // joint_expect_accelera
  // joint_actual_position
  // joint_actual_velocity
  // joint_actual_accelera
  // joint_actual_current
  // joint_temperature
  // driver_temperature
  // cart_expect_position
  // cart_expect_velocity
  // cart_expect_accelera
  // cart_actual_position
  // cart_actual_velocity
  // cart_actual_accelera
  // slave_ready
  // collision
  // collision_axis
  // emc_stop_signal
  // robot_state
  // robot_error
  return true;
}

void
duco_msg__msg__DucoRobotState__fini(duco_msg__msg__DucoRobotState * msg)
{
  if (!msg) {
    return;
  }
  // joint_expect_position
  // joint_expect_velocity
  // joint_expect_accelera
  // joint_actual_position
  // joint_actual_velocity
  // joint_actual_accelera
  // joint_actual_current
  // joint_temperature
  // driver_temperature
  // cart_expect_position
  // cart_expect_velocity
  // cart_expect_accelera
  // cart_actual_position
  // cart_actual_velocity
  // cart_actual_accelera
  // slave_ready
  // collision
  // collision_axis
  // emc_stop_signal
  // robot_state
  // robot_error
}

bool
duco_msg__msg__DucoRobotState__are_equal(const duco_msg__msg__DucoRobotState * lhs, const duco_msg__msg__DucoRobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_expect_position
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_expect_position[i] != rhs->joint_expect_position[i]) {
      return false;
    }
  }
  // joint_expect_velocity
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_expect_velocity[i] != rhs->joint_expect_velocity[i]) {
      return false;
    }
  }
  // joint_expect_accelera
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_expect_accelera[i] != rhs->joint_expect_accelera[i]) {
      return false;
    }
  }
  // joint_actual_position
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_actual_position[i] != rhs->joint_actual_position[i]) {
      return false;
    }
  }
  // joint_actual_velocity
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_actual_velocity[i] != rhs->joint_actual_velocity[i]) {
      return false;
    }
  }
  // joint_actual_accelera
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_actual_accelera[i] != rhs->joint_actual_accelera[i]) {
      return false;
    }
  }
  // joint_actual_current
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_actual_current[i] != rhs->joint_actual_current[i]) {
      return false;
    }
  }
  // joint_temperature
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_temperature[i] != rhs->joint_temperature[i]) {
      return false;
    }
  }
  // driver_temperature
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->driver_temperature[i] != rhs->driver_temperature[i]) {
      return false;
    }
  }
  // cart_expect_position
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->cart_expect_position[i] != rhs->cart_expect_position[i]) {
      return false;
    }
  }
  // cart_expect_velocity
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->cart_expect_velocity[i] != rhs->cart_expect_velocity[i]) {
      return false;
    }
  }
  // cart_expect_accelera
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->cart_expect_accelera[i] != rhs->cart_expect_accelera[i]) {
      return false;
    }
  }
  // cart_actual_position
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->cart_actual_position[i] != rhs->cart_actual_position[i]) {
      return false;
    }
  }
  // cart_actual_velocity
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->cart_actual_velocity[i] != rhs->cart_actual_velocity[i]) {
      return false;
    }
  }
  // cart_actual_accelera
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->cart_actual_accelera[i] != rhs->cart_actual_accelera[i]) {
      return false;
    }
  }
  // slave_ready
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->slave_ready[i] != rhs->slave_ready[i]) {
      return false;
    }
  }
  // collision
  if (lhs->collision != rhs->collision) {
    return false;
  }
  // collision_axis
  if (lhs->collision_axis != rhs->collision_axis) {
    return false;
  }
  // emc_stop_signal
  if (lhs->emc_stop_signal != rhs->emc_stop_signal) {
    return false;
  }
  // robot_state
  if (lhs->robot_state != rhs->robot_state) {
    return false;
  }
  // robot_error
  if (lhs->robot_error != rhs->robot_error) {
    return false;
  }
  return true;
}

bool
duco_msg__msg__DucoRobotState__copy(
  const duco_msg__msg__DucoRobotState * input,
  duco_msg__msg__DucoRobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_expect_position
  for (size_t i = 0; i < 7; ++i) {
    output->joint_expect_position[i] = input->joint_expect_position[i];
  }
  // joint_expect_velocity
  for (size_t i = 0; i < 7; ++i) {
    output->joint_expect_velocity[i] = input->joint_expect_velocity[i];
  }
  // joint_expect_accelera
  for (size_t i = 0; i < 7; ++i) {
    output->joint_expect_accelera[i] = input->joint_expect_accelera[i];
  }
  // joint_actual_position
  for (size_t i = 0; i < 7; ++i) {
    output->joint_actual_position[i] = input->joint_actual_position[i];
  }
  // joint_actual_velocity
  for (size_t i = 0; i < 7; ++i) {
    output->joint_actual_velocity[i] = input->joint_actual_velocity[i];
  }
  // joint_actual_accelera
  for (size_t i = 0; i < 7; ++i) {
    output->joint_actual_accelera[i] = input->joint_actual_accelera[i];
  }
  // joint_actual_current
  for (size_t i = 0; i < 7; ++i) {
    output->joint_actual_current[i] = input->joint_actual_current[i];
  }
  // joint_temperature
  for (size_t i = 0; i < 7; ++i) {
    output->joint_temperature[i] = input->joint_temperature[i];
  }
  // driver_temperature
  for (size_t i = 0; i < 7; ++i) {
    output->driver_temperature[i] = input->driver_temperature[i];
  }
  // cart_expect_position
  for (size_t i = 0; i < 7; ++i) {
    output->cart_expect_position[i] = input->cart_expect_position[i];
  }
  // cart_expect_velocity
  for (size_t i = 0; i < 7; ++i) {
    output->cart_expect_velocity[i] = input->cart_expect_velocity[i];
  }
  // cart_expect_accelera
  for (size_t i = 0; i < 7; ++i) {
    output->cart_expect_accelera[i] = input->cart_expect_accelera[i];
  }
  // cart_actual_position
  for (size_t i = 0; i < 7; ++i) {
    output->cart_actual_position[i] = input->cart_actual_position[i];
  }
  // cart_actual_velocity
  for (size_t i = 0; i < 7; ++i) {
    output->cart_actual_velocity[i] = input->cart_actual_velocity[i];
  }
  // cart_actual_accelera
  for (size_t i = 0; i < 7; ++i) {
    output->cart_actual_accelera[i] = input->cart_actual_accelera[i];
  }
  // slave_ready
  for (size_t i = 0; i < 7; ++i) {
    output->slave_ready[i] = input->slave_ready[i];
  }
  // collision
  output->collision = input->collision;
  // collision_axis
  output->collision_axis = input->collision_axis;
  // emc_stop_signal
  output->emc_stop_signal = input->emc_stop_signal;
  // robot_state
  output->robot_state = input->robot_state;
  // robot_error
  output->robot_error = input->robot_error;
  return true;
}

duco_msg__msg__DucoRobotState *
duco_msg__msg__DucoRobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__msg__DucoRobotState * msg = (duco_msg__msg__DucoRobotState *)allocator.allocate(sizeof(duco_msg__msg__DucoRobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(duco_msg__msg__DucoRobotState));
  bool success = duco_msg__msg__DucoRobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
duco_msg__msg__DucoRobotState__destroy(duco_msg__msg__DucoRobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    duco_msg__msg__DucoRobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
duco_msg__msg__DucoRobotState__Sequence__init(duco_msg__msg__DucoRobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__msg__DucoRobotState * data = NULL;

  if (size) {
    data = (duco_msg__msg__DucoRobotState *)allocator.zero_allocate(size, sizeof(duco_msg__msg__DucoRobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = duco_msg__msg__DucoRobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        duco_msg__msg__DucoRobotState__fini(&data[i - 1]);
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
duco_msg__msg__DucoRobotState__Sequence__fini(duco_msg__msg__DucoRobotState__Sequence * array)
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
      duco_msg__msg__DucoRobotState__fini(&array->data[i]);
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

duco_msg__msg__DucoRobotState__Sequence *
duco_msg__msg__DucoRobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  duco_msg__msg__DucoRobotState__Sequence * array = (duco_msg__msg__DucoRobotState__Sequence *)allocator.allocate(sizeof(duco_msg__msg__DucoRobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = duco_msg__msg__DucoRobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
duco_msg__msg__DucoRobotState__Sequence__destroy(duco_msg__msg__DucoRobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    duco_msg__msg__DucoRobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
duco_msg__msg__DucoRobotState__Sequence__are_equal(const duco_msg__msg__DucoRobotState__Sequence * lhs, const duco_msg__msg__DucoRobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!duco_msg__msg__DucoRobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
duco_msg__msg__DucoRobotState__Sequence__copy(
  const duco_msg__msg__DucoRobotState__Sequence * input,
  duco_msg__msg__DucoRobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(duco_msg__msg__DucoRobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    duco_msg__msg__DucoRobotState * data =
      (duco_msg__msg__DucoRobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!duco_msg__msg__DucoRobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          duco_msg__msg__DucoRobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!duco_msg__msg__DucoRobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
