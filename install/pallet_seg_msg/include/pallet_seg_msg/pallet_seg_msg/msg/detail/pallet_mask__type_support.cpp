// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pallet_seg_msg:msg/PalletMask.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pallet_seg_msg/msg/detail/pallet_mask__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pallet_seg_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PalletMask_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pallet_seg_msg::msg::PalletMask(_init);
}

void PalletMask_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pallet_seg_msg::msg::PalletMask *>(message_memory);
  typed_message->~PalletMask();
}

size_t size_function__PalletMask__masks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PalletMask__masks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void * get_function__PalletMask__masks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void fetch_function__PalletMask__masks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sensor_msgs::msg::Image *>(
    get_const_function__PalletMask__masks(untyped_member, index));
  auto & value = *reinterpret_cast<sensor_msgs::msg::Image *>(untyped_value);
  value = item;
}

void assign_function__PalletMask__masks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sensor_msgs::msg::Image *>(
    get_function__PalletMask__masks(untyped_member, index));
  const auto & value = *reinterpret_cast<const sensor_msgs::msg::Image *>(untyped_value);
  item = value;
}

void resize_function__PalletMask__masks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PalletMask_message_member_array[1] = {
  {
    "masks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pallet_seg_msg::msg::PalletMask, masks),  // bytes offset in struct
    nullptr,  // default value
    size_function__PalletMask__masks,  // size() function pointer
    get_const_function__PalletMask__masks,  // get_const(index) function pointer
    get_function__PalletMask__masks,  // get(index) function pointer
    fetch_function__PalletMask__masks,  // fetch(index, &value) function pointer
    assign_function__PalletMask__masks,  // assign(index, value) function pointer
    resize_function__PalletMask__masks  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PalletMask_message_members = {
  "pallet_seg_msg::msg",  // message namespace
  "PalletMask",  // message name
  1,  // number of fields
  sizeof(pallet_seg_msg::msg::PalletMask),
  PalletMask_message_member_array,  // message members
  PalletMask_init_function,  // function to initialize message memory (memory has to be allocated)
  PalletMask_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PalletMask_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PalletMask_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pallet_seg_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pallet_seg_msg::msg::PalletMask>()
{
  return &::pallet_seg_msg::msg::rosidl_typesupport_introspection_cpp::PalletMask_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pallet_seg_msg, msg, PalletMask)() {
  return &::pallet_seg_msg::msg::rosidl_typesupport_introspection_cpp::PalletMask_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
