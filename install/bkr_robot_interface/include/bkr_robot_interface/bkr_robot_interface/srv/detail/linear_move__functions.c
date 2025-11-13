// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bkr_robot_interface:srv/LinearMove.idl
// generated code does not contain a copyright notice
#include "bkr_robot_interface/srv/detail/linear_move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
bkr_robot_interface__srv__LinearMove_Request__init(bkr_robot_interface__srv__LinearMove_Request * msg)
{
  if (!msg) {
    return false;
  }
  // action
  // velocity
  // position
  return true;
}

void
bkr_robot_interface__srv__LinearMove_Request__fini(bkr_robot_interface__srv__LinearMove_Request * msg)
{
  if (!msg) {
    return;
  }
  // action
  // velocity
  // position
}

bool
bkr_robot_interface__srv__LinearMove_Request__are_equal(const bkr_robot_interface__srv__LinearMove_Request * lhs, const bkr_robot_interface__srv__LinearMove_Request * rhs)
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
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  return true;
}

bool
bkr_robot_interface__srv__LinearMove_Request__copy(
  const bkr_robot_interface__srv__LinearMove_Request * input,
  bkr_robot_interface__srv__LinearMove_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  output->action = input->action;
  // velocity
  output->velocity = input->velocity;
  // position
  output->position = input->position;
  return true;
}

bkr_robot_interface__srv__LinearMove_Request *
bkr_robot_interface__srv__LinearMove_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bkr_robot_interface__srv__LinearMove_Request * msg = (bkr_robot_interface__srv__LinearMove_Request *)allocator.allocate(sizeof(bkr_robot_interface__srv__LinearMove_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bkr_robot_interface__srv__LinearMove_Request));
  bool success = bkr_robot_interface__srv__LinearMove_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bkr_robot_interface__srv__LinearMove_Request__destroy(bkr_robot_interface__srv__LinearMove_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bkr_robot_interface__srv__LinearMove_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bkr_robot_interface__srv__LinearMove_Request__Sequence__init(bkr_robot_interface__srv__LinearMove_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bkr_robot_interface__srv__LinearMove_Request * data = NULL;

  if (size) {
    data = (bkr_robot_interface__srv__LinearMove_Request *)allocator.zero_allocate(size, sizeof(bkr_robot_interface__srv__LinearMove_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bkr_robot_interface__srv__LinearMove_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bkr_robot_interface__srv__LinearMove_Request__fini(&data[i - 1]);
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
bkr_robot_interface__srv__LinearMove_Request__Sequence__fini(bkr_robot_interface__srv__LinearMove_Request__Sequence * array)
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
      bkr_robot_interface__srv__LinearMove_Request__fini(&array->data[i]);
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

bkr_robot_interface__srv__LinearMove_Request__Sequence *
bkr_robot_interface__srv__LinearMove_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bkr_robot_interface__srv__LinearMove_Request__Sequence * array = (bkr_robot_interface__srv__LinearMove_Request__Sequence *)allocator.allocate(sizeof(bkr_robot_interface__srv__LinearMove_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bkr_robot_interface__srv__LinearMove_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bkr_robot_interface__srv__LinearMove_Request__Sequence__destroy(bkr_robot_interface__srv__LinearMove_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bkr_robot_interface__srv__LinearMove_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bkr_robot_interface__srv__LinearMove_Request__Sequence__are_equal(const bkr_robot_interface__srv__LinearMove_Request__Sequence * lhs, const bkr_robot_interface__srv__LinearMove_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bkr_robot_interface__srv__LinearMove_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bkr_robot_interface__srv__LinearMove_Request__Sequence__copy(
  const bkr_robot_interface__srv__LinearMove_Request__Sequence * input,
  bkr_robot_interface__srv__LinearMove_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bkr_robot_interface__srv__LinearMove_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bkr_robot_interface__srv__LinearMove_Request * data =
      (bkr_robot_interface__srv__LinearMove_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bkr_robot_interface__srv__LinearMove_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bkr_robot_interface__srv__LinearMove_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bkr_robot_interface__srv__LinearMove_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
bkr_robot_interface__srv__LinearMove_Response__init(bkr_robot_interface__srv__LinearMove_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
bkr_robot_interface__srv__LinearMove_Response__fini(bkr_robot_interface__srv__LinearMove_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
bkr_robot_interface__srv__LinearMove_Response__are_equal(const bkr_robot_interface__srv__LinearMove_Response * lhs, const bkr_robot_interface__srv__LinearMove_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
bkr_robot_interface__srv__LinearMove_Response__copy(
  const bkr_robot_interface__srv__LinearMove_Response * input,
  bkr_robot_interface__srv__LinearMove_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

bkr_robot_interface__srv__LinearMove_Response *
bkr_robot_interface__srv__LinearMove_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bkr_robot_interface__srv__LinearMove_Response * msg = (bkr_robot_interface__srv__LinearMove_Response *)allocator.allocate(sizeof(bkr_robot_interface__srv__LinearMove_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bkr_robot_interface__srv__LinearMove_Response));
  bool success = bkr_robot_interface__srv__LinearMove_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bkr_robot_interface__srv__LinearMove_Response__destroy(bkr_robot_interface__srv__LinearMove_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bkr_robot_interface__srv__LinearMove_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bkr_robot_interface__srv__LinearMove_Response__Sequence__init(bkr_robot_interface__srv__LinearMove_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bkr_robot_interface__srv__LinearMove_Response * data = NULL;

  if (size) {
    data = (bkr_robot_interface__srv__LinearMove_Response *)allocator.zero_allocate(size, sizeof(bkr_robot_interface__srv__LinearMove_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bkr_robot_interface__srv__LinearMove_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bkr_robot_interface__srv__LinearMove_Response__fini(&data[i - 1]);
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
bkr_robot_interface__srv__LinearMove_Response__Sequence__fini(bkr_robot_interface__srv__LinearMove_Response__Sequence * array)
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
      bkr_robot_interface__srv__LinearMove_Response__fini(&array->data[i]);
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

bkr_robot_interface__srv__LinearMove_Response__Sequence *
bkr_robot_interface__srv__LinearMove_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bkr_robot_interface__srv__LinearMove_Response__Sequence * array = (bkr_robot_interface__srv__LinearMove_Response__Sequence *)allocator.allocate(sizeof(bkr_robot_interface__srv__LinearMove_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bkr_robot_interface__srv__LinearMove_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bkr_robot_interface__srv__LinearMove_Response__Sequence__destroy(bkr_robot_interface__srv__LinearMove_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bkr_robot_interface__srv__LinearMove_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bkr_robot_interface__srv__LinearMove_Response__Sequence__are_equal(const bkr_robot_interface__srv__LinearMove_Response__Sequence * lhs, const bkr_robot_interface__srv__LinearMove_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bkr_robot_interface__srv__LinearMove_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bkr_robot_interface__srv__LinearMove_Response__Sequence__copy(
  const bkr_robot_interface__srv__LinearMove_Response__Sequence * input,
  bkr_robot_interface__srv__LinearMove_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bkr_robot_interface__srv__LinearMove_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bkr_robot_interface__srv__LinearMove_Response * data =
      (bkr_robot_interface__srv__LinearMove_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bkr_robot_interface__srv__LinearMove_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bkr_robot_interface__srv__LinearMove_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bkr_robot_interface__srv__LinearMove_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
