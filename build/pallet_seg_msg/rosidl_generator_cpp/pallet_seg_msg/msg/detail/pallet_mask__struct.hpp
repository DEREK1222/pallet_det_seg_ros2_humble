// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pallet_seg_msg:msg/PalletMask.idl
// generated code does not contain a copyright notice

#ifndef PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__STRUCT_HPP_
#define PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'masks'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pallet_seg_msg__msg__PalletMask __attribute__((deprecated))
#else
# define DEPRECATED__pallet_seg_msg__msg__PalletMask __declspec(deprecated)
#endif

namespace pallet_seg_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PalletMask_
{
  using Type = PalletMask_<ContainerAllocator>;

  explicit PalletMask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PalletMask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _masks_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>>;
  _masks_type masks;

  // setters for named parameter idiom
  Type & set__masks(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::Image_<ContainerAllocator>>> & _arg)
  {
    this->masks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pallet_seg_msg::msg::PalletMask_<ContainerAllocator> *;
  using ConstRawPtr =
    const pallet_seg_msg::msg::PalletMask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pallet_seg_msg::msg::PalletMask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pallet_seg_msg::msg::PalletMask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pallet_seg_msg::msg::PalletMask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pallet_seg_msg::msg::PalletMask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pallet_seg_msg::msg::PalletMask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pallet_seg_msg::msg::PalletMask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pallet_seg_msg::msg::PalletMask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pallet_seg_msg::msg::PalletMask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pallet_seg_msg__msg__PalletMask
    std::shared_ptr<pallet_seg_msg::msg::PalletMask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pallet_seg_msg__msg__PalletMask
    std::shared_ptr<pallet_seg_msg::msg::PalletMask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PalletMask_ & other) const
  {
    if (this->masks != other.masks) {
      return false;
    }
    return true;
  }
  bool operator!=(const PalletMask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PalletMask_

// alias to use template instance with default allocator
using PalletMask =
  pallet_seg_msg::msg::PalletMask_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pallet_seg_msg

#endif  // PALLET_SEG_MSG__MSG__DETAIL__PALLET_MASK__STRUCT_HPP_
