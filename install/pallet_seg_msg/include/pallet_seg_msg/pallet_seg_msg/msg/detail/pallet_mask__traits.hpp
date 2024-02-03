// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pallet_seg_msg:msg/PalletMask.idl
// generated code does not contain a copyright notice

#ifndef PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__TRAITS_HPP_
#define PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pallet_seg_msg/msg/detail/pallet_mask__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'masks'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace pallet_seg_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PalletMask & msg,
  std::ostream & out)
{
  out << "{";
  // member: masks
  {
    if (msg.masks.size() == 0) {
      out << "masks: []";
    } else {
      out << "masks: [";
      size_t pending_items = msg.masks.size();
      for (auto item : msg.masks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PalletMask & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: masks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.masks.size() == 0) {
      out << "masks: []\n";
    } else {
      out << "masks:\n";
      for (auto item : msg.masks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PalletMask & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pallet_seg_msg

namespace rosidl_generator_traits
{

[[deprecated("use pallet_seg_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pallet_seg_msg::msg::PalletMask & msg,
  std::ostream & out, size_t indentation = 0)
{
  pallet_seg_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pallet_seg_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const pallet_seg_msg::msg::PalletMask & msg)
{
  return pallet_seg_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pallet_seg_msg::msg::PalletMask>()
{
  return "pallet_seg_msg::msg::PalletMask";
}

template<>
inline const char * name<pallet_seg_msg::msg::PalletMask>()
{
  return "pallet_seg_msg/msg/PalletMask";
}

template<>
struct has_fixed_size<pallet_seg_msg::msg::PalletMask>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pallet_seg_msg::msg::PalletMask>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pallet_seg_msg::msg::PalletMask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__TRAITS_HPP_
