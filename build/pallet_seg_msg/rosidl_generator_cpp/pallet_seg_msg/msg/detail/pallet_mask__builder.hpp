// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pallet_seg_msg:msg/PalletMask.idl
// generated code does not contain a copyright notice

#ifndef PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__BUILDER_HPP_
#define PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pallet_seg_msg/msg/detail/pallet_mask__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pallet_seg_msg
{

namespace msg
{

namespace builder
{

class Init_PalletMask_masks
{
public:
  Init_PalletMask_masks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pallet_seg_msg::msg::PalletMask masks(::pallet_seg_msg::msg::PalletMask::_masks_type arg)
  {
    msg_.masks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pallet_seg_msg::msg::PalletMask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pallet_seg_msg::msg::PalletMask>()
{
  return pallet_seg_msg::msg::builder::Init_PalletMask_masks();
}

}  // namespace pallet_seg_msg

#endif  // PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__BUILDER_HPP_
