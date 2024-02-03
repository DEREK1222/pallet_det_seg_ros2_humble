// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pallet_seg_msg:msg/PalletMask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pallet_seg_msg/msg/detail/pallet_mask__rosidl_typesupport_introspection_c.h"
#include "pallet_seg_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pallet_seg_msg/msg/detail/pallet_mask__functions.h"
#include "pallet_seg_msg/msg/detail/pallet_mask__struct.h"


// Include directives for member types
// Member `masks`
#include "sensor_msgs/msg/image.h"
// Member `masks`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pallet_seg_msg__msg__PalletMask__init(message_memory);
}

void pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_fini_function(void * message_memory)
{
  pallet_seg_msg__msg__PalletMask__fini(message_memory);
}

size_t pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__size_function__PalletMask__masks(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__get_const_function__PalletMask__masks(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__get_function__PalletMask__masks(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__fetch_function__PalletMask__masks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__Image * item =
    ((const sensor_msgs__msg__Image *)
    pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__get_const_function__PalletMask__masks(untyped_member, index));
  sensor_msgs__msg__Image * value =
    (sensor_msgs__msg__Image *)(untyped_value);
  *value = *item;
}

void pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__assign_function__PalletMask__masks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__Image * item =
    ((sensor_msgs__msg__Image *)
    pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__get_function__PalletMask__masks(untyped_member, index));
  const sensor_msgs__msg__Image * value =
    (const sensor_msgs__msg__Image *)(untyped_value);
  *item = *value;
}

bool pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__resize_function__PalletMask__masks(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_message_member_array[1] = {
  {
    "masks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pallet_seg_msg__msg__PalletMask, masks),  // bytes offset in struct
    NULL,  // default value
    pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__size_function__PalletMask__masks,  // size() function pointer
    pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__get_const_function__PalletMask__masks,  // get_const(index) function pointer
    pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__get_function__PalletMask__masks,  // get(index) function pointer
    pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__fetch_function__PalletMask__masks,  // fetch(index, &value) function pointer
    pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__assign_function__PalletMask__masks,  // assign(index, value) function pointer
    pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__resize_function__PalletMask__masks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_message_members = {
  "pallet_seg_msg__msg",  // message namespace
  "PalletMask",  // message name
  1,  // number of fields
  sizeof(pallet_seg_msg__msg__PalletMask),
  pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_message_member_array,  // message members
  pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_init_function,  // function to initialize message memory (memory has to be allocated)
  pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_message_type_support_handle = {
  0,
  &pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pallet_seg_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pallet_seg_msg, msg, PalletMask)() {
  pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_message_type_support_handle.typesupport_identifier) {
    pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pallet_seg_msg__msg__PalletMask__rosidl_typesupport_introspection_c__PalletMask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
