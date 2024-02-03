// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from pallet_seg_msg:msg/PalletMask.idl
// generated code does not contain a copyright notice

#ifndef PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pallet_seg_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "pallet_seg_msg/msg/detail/pallet_mask__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace pallet_seg_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pallet_seg_msg
cdr_serialize(
  const pallet_seg_msg::msg::PalletMask & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pallet_seg_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pallet_seg_msg::msg::PalletMask & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pallet_seg_msg
get_serialized_size(
  const pallet_seg_msg::msg::PalletMask & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pallet_seg_msg
max_serialized_size_PalletMask(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pallet_seg_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pallet_seg_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pallet_seg_msg, msg, PalletMask)();

#ifdef __cplusplus
}
#endif

#endif  // PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
