// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bkr_robot_interface:msg/MsgOdrive.idl
// generated code does not contain a copyright notice

#ifndef BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__STRUCT_HPP_
#define BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bkr_robot_interface__msg__MsgOdrive __attribute__((deprecated))
#else
# define DEPRECATED__bkr_robot_interface__msg__MsgOdrive __declspec(deprecated)
#endif

namespace bkr_robot_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MsgOdrive_
{
  using Type = MsgOdrive_<ContainerAllocator>;

  explicit MsgOdrive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = 0;
      this->velocity = 0.0f;
    }
  }

  explicit MsgOdrive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = 0;
      this->velocity = 0.0f;
    }
  }

  // field types and members
  using _action_type =
    uint8_t;
  _action_type action;
  using _velocity_type =
    float;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__action(
    const uint8_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bkr_robot_interface::msg::MsgOdrive_<ContainerAllocator> *;
  using ConstRawPtr =
    const bkr_robot_interface::msg::MsgOdrive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bkr_robot_interface::msg::MsgOdrive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bkr_robot_interface::msg::MsgOdrive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bkr_robot_interface::msg::MsgOdrive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bkr_robot_interface::msg::MsgOdrive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bkr_robot_interface::msg::MsgOdrive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bkr_robot_interface::msg::MsgOdrive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bkr_robot_interface::msg::MsgOdrive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bkr_robot_interface::msg::MsgOdrive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bkr_robot_interface__msg__MsgOdrive
    std::shared_ptr<bkr_robot_interface::msg::MsgOdrive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bkr_robot_interface__msg__MsgOdrive
    std::shared_ptr<bkr_robot_interface::msg::MsgOdrive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MsgOdrive_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const MsgOdrive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MsgOdrive_

// alias to use template instance with default allocator
using MsgOdrive =
  bkr_robot_interface::msg::MsgOdrive_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bkr_robot_interface

#endif  // BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__STRUCT_HPP_
