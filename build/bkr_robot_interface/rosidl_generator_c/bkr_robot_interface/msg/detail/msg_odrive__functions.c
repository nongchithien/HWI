// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bkr_robot_interface:msg/MsgOdrive.idl
// generated code does not contain a copyright notice
#include "bkr_robot_interface/msg/detail/msg_odrive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bkr_robot_interface__msg__MsgOdrive__init(bkr_robot_interface__msg__MsgOdrive * msg)
{
  if (!msg) {
    return false;
  }
  // action
  // velocity
  return true;
}

void
bkr_robot_interface__msg__MsgOdrive__fini(bkr_robot_interface__msg__MsgOdrive * msg)
{
  if (!msg) {
    return;
  }
  // action
  // velocity
}

bool
bkr_robot_interface__msg__MsgOdrive__are_equal(const bkr_robot_interface__msg__MsgOdrive * lhs, const bkr_robot_interface__msg__MsgOdrive * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  return true;
}

bool
bkr_robot_interface__msg__MsgOdrive__copy(
  const bkr_robot_interface__msg__MsgOdrive * input,
  bkr_robot_interface__msg__MsgOdrive * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  output->action = input->action;
  // velocity
  output->velocity = input->velocity;
  return true;
}

bkr_robot_interface__msg__MsgOdrive *
bkr_robot_interface__msg__MsgOdrive__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bkr_robot_interface__msg__MsgOdrive * msg = (bkr_robot_interface__msg__MsgOdrive *)allocator.allocate(sizeof(bkr_robot_interface__msg__MsgOdrive), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bkr_robot_interface__msg__MsgOdrive));
  bool success = bkr_robot_interface__msg__MsgOdrive__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bkr_robot_interface__msg__MsgOdrive__destroy(bkr_robot_interface__msg__MsgOdrive * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bkr_robot_interface__msg__MsgOdrive__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bkr_robot_interface__msg__MsgOdrive__Sequence__init(bkr_robot_interface__msg__MsgOdrive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bkr_robot_interface__msg__MsgOdrive * data = NULL;

  if (size) {
    data = (bkr_robot_interface__msg__MsgOdrive *)allocator.zero_allocate(size, sizeof(bkr_robot_interface__msg__MsgOdrive), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bkr_robot_interface__msg__MsgOdrive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bkr_robot_interface__msg__MsgOdrive__fini(&data[i - 1]);
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
bkr_robot_interface__msg__MsgOdrive__Sequence__fini(bkr_robot_interface__msg__MsgOdrive__Sequence * array)
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
      bkr_robot_interface__msg__MsgOdrive__fini(&array->data[i]);
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

bkr_robot_interface__msg__MsgOdrive__Sequence *
bkr_robot_interface__msg__MsgOdrive__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bkr_robot_interface__msg__MsgOdrive__Sequence * array = (bkr_robot_interface__msg__MsgOdrive__Sequence *)allocator.allocate(sizeof(bkr_robot_interface__msg__MsgOdrive__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bkr_robot_interface__msg__MsgOdrive__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bkr_robot_interface__msg__MsgOdrive__Sequence__destroy(bkr_robot_interface__msg__MsgOdrive__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bkr_robot_interface__msg__MsgOdrive__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bkr_robot_interface__msg__MsgOdrive__Sequence__are_equal(const bkr_robot_interface__msg__MsgOdrive__Sequence * lhs, const bkr_robot_interface__msg__MsgOdrive__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bkr_robot_interface__msg__MsgOdrive__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bkr_robot_interface__msg__MsgOdrive__Sequence__copy(
  const bkr_robot_interface__msg__MsgOdrive__Sequence * input,
  bkr_robot_interface__msg__MsgOdrive__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bkr_robot_interface__msg__MsgOdrive);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bkr_robot_interface__msg__MsgOdrive * data =
      (bkr_robot_interface__msg__MsgOdrive *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bkr_robot_interface__msg__MsgOdrive__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bkr_robot_interface__msg__MsgOdrive__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bkr_robot_interface__msg__MsgOdrive__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
