// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pallet_seg_msg:msg/PalletMask.idl
// generated code does not contain a copyright notice

#ifndef PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__FUNCTIONS_H_
#define PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pallet_seg_msg/msg/rosidl_generator_c__visibility_control.h"

#include "pallet_seg_msg/msg/detail/pallet_mask__struct.h"

/// Initialize msg/PalletMask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pallet_seg_msg__msg__PalletMask
 * )) before or use
 * pallet_seg_msg__msg__PalletMask__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pallet_seg_msg
bool
pallet_seg_msg__msg__PalletMask__init(pallet_seg_msg__msg__PalletMask * msg);

/// Finalize msg/PalletMask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pallet_seg_msg
void
pallet_seg_msg__msg__PalletMask__fini(pallet_seg_msg__msg__PalletMask * msg);

/// Create msg/PalletMask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pallet_seg_msg__msg__PalletMask__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pallet_seg_msg
pallet_seg_msg__msg__PalletMask *
pallet_seg_msg__msg__PalletMask__create();

/// Destroy msg/PalletMask message.
/**
 * It calls
 * pallet_seg_msg__msg__PalletMask__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pallet_seg_msg
void
pallet_seg_msg__msg__PalletMask__destroy(pallet_seg_msg__msg__PalletMask * msg);

/// Check for msg/PalletMask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pallet_seg_msg
bool
pallet_seg_msg__msg__PalletMask__are_equal(const pallet_seg_msg__msg__PalletMask * lhs, const pallet_seg_msg__msg__PalletMask * rhs);

/// Copy a msg/PalletMask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pallet_seg_msg
bool
pallet_seg_msg__msg__PalletMask__copy(
  const pallet_seg_msg__msg__PalletMask * input,
  pallet_seg_msg__msg__PalletMask * output);

/// Initialize array of msg/PalletMask messages.
/**
 * It allocates the memory for the number of elements and calls
 * pallet_seg_msg__msg__PalletMask__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pallet_seg_msg
bool
pallet_seg_msg__msg__PalletMask__Sequence__init(pallet_seg_msg__msg__PalletMask__Sequence * array, size_t size);

/// Finalize array of msg/PalletMask messages.
/**
 * It calls
 * pallet_seg_msg__msg__PalletMask__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pallet_seg_msg
void
pallet_seg_msg__msg__PalletMask__Sequence__fini(pallet_seg_msg__msg__PalletMask__Sequence * array);

/// Create array of msg/PalletMask messages.
/**
 * It allocates the memory for the array and calls
 * pallet_seg_msg__msg__PalletMask__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pallet_seg_msg
pallet_seg_msg__msg__PalletMask__Sequence *
pallet_seg_msg__msg__PalletMask__Sequence__create(size_t size);

/// Destroy array of msg/PalletMask messages.
/**
 * It calls
 * pallet_seg_msg__msg__PalletMask__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pallet_seg_msg
void
pallet_seg_msg__msg__PalletMask__Sequence__destroy(pallet_seg_msg__msg__PalletMask__Sequence * array);

/// Check for msg/PalletMask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pallet_seg_msg
bool
pallet_seg_msg__msg__PalletMask__Sequence__are_equal(const pallet_seg_msg__msg__PalletMask__Sequence * lhs, const pallet_seg_msg__msg__PalletMask__Sequence * rhs);

/// Copy an array of msg/PalletMask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pallet_seg_msg
bool
pallet_seg_msg__msg__PalletMask__Sequence__copy(
  const pallet_seg_msg__msg__PalletMask__Sequence * input,
  pallet_seg_msg__msg__PalletMask__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__FUNCTIONS_H_
