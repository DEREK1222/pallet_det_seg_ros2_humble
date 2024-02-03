// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pallet_seg_msg:msg/PalletMask.idl
// generated code does not contain a copyright notice

#ifndef PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__STRUCT_H_
#define PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'masks'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/PalletMask in the package pallet_seg_msg.
/**
  * std_msgs/Header header
 */
typedef struct pallet_seg_msg__msg__PalletMask
{
  ///  Bounding boxes in pixels
  /// sensor_msgs/RegionOfInterest[] boxes
  ///  Integer class IDs for each bounding box
  /// int32[] class_ids
  ///  String class IDs for each bouding box
  /// string[] class_names
  ///  Float probability scores of the class_id
  /// float32[] scores
  ///  Instance masks as Image
  sensor_msgs__msg__Image__Sequence masks;
} pallet_seg_msg__msg__PalletMask;

// Struct for a sequence of pallet_seg_msg__msg__PalletMask.
typedef struct pallet_seg_msg__msg__PalletMask__Sequence
{
  pallet_seg_msg__msg__PalletMask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pallet_seg_msg__msg__PalletMask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__STRUCT_H_
