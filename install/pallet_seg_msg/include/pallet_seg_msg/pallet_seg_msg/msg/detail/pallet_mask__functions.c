// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pallet_seg_msg:msg/PalletMask.idl
// generated code does not contain a copyright notice
#include "pallet_seg_msg/msg/detail/pallet_mask__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `masks`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
pallet_seg_msg__msg__PalletMask__init(pallet_seg_msg__msg__PalletMask * msg)
{
  if (!msg) {
    return false;
  }
  // masks
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->masks, 0)) {
    pallet_seg_msg__msg__PalletMask__fini(msg);
    return false;
  }
  return true;
}

void
pallet_seg_msg__msg__PalletMask__fini(pallet_seg_msg__msg__PalletMask * msg)
{
  if (!msg) {
    return;
  }
  // masks
  sensor_msgs__msg__Image__Sequence__fini(&msg->masks);
}

bool
pallet_seg_msg__msg__PalletMask__are_equal(const pallet_seg_msg__msg__PalletMask * lhs, const pallet_seg_msg__msg__PalletMask * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // masks
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->masks), &(rhs->masks)))
  {
    return false;
  }
  return true;
}

bool
pallet_seg_msg__msg__PalletMask__copy(
  const pallet_seg_msg__msg__PalletMask * input,
  pallet_seg_msg__msg__PalletMask * output)
{
  if (!input || !output) {
    return false;
  }
  // masks
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->masks), &(output->masks)))
  {
    return false;
  }
  return true;
}

pallet_seg_msg__msg__PalletMask *
pallet_seg_msg__msg__PalletMask__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pallet_seg_msg__msg__PalletMask * msg = (pallet_seg_msg__msg__PalletMask *)allocator.allocate(sizeof(pallet_seg_msg__msg__PalletMask), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pallet_seg_msg__msg__PalletMask));
  bool success = pallet_seg_msg__msg__PalletMask__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pallet_seg_msg__msg__PalletMask__destroy(pallet_seg_msg__msg__PalletMask * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pallet_seg_msg__msg__PalletMask__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pallet_seg_msg__msg__PalletMask__Sequence__init(pallet_seg_msg__msg__PalletMask__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pallet_seg_msg__msg__PalletMask * data = NULL;

  if (size) {
    data = (pallet_seg_msg__msg__PalletMask *)allocator.zero_allocate(size, sizeof(pallet_seg_msg__msg__PalletMask), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pallet_seg_msg__msg__PalletMask__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pallet_seg_msg__msg__PalletMask__fini(&data[i - 1]);
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
pallet_seg_msg__msg__PalletMask__Sequence__fini(pallet_seg_msg__msg__PalletMask__Sequence * array)
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
      pallet_seg_msg__msg__PalletMask__fini(&array->data[i]);
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

pallet_seg_msg__msg__PalletMask__Sequence *
pallet_seg_msg__msg__PalletMask__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pallet_seg_msg__msg__PalletMask__Sequence * array = (pallet_seg_msg__msg__PalletMask__Sequence *)allocator.allocate(sizeof(pallet_seg_msg__msg__PalletMask__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pallet_seg_msg__msg__PalletMask__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pallet_seg_msg__msg__PalletMask__Sequence__destroy(pallet_seg_msg__msg__PalletMask__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pallet_seg_msg__msg__PalletMask__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pallet_seg_msg__msg__PalletMask__Sequence__are_equal(const pallet_seg_msg__msg__PalletMask__Sequence * lhs, const pallet_seg_msg__msg__PalletMask__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pallet_seg_msg__msg__PalletMask__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pallet_seg_msg__msg__PalletMask__Sequence__copy(
  const pallet_seg_msg__msg__PalletMask__Sequence * input,
  pallet_seg_msg__msg__PalletMask__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pallet_seg_msg__msg__PalletMask);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pallet_seg_msg__msg__PalletMask * data =
      (pallet_seg_msg__msg__PalletMask *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pallet_seg_msg__msg__PalletMask__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pallet_seg_msg__msg__PalletMask__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pallet_seg_msg__msg__PalletMask__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
