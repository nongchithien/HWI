// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bkr_robot_interface:msg/MsgOdrive.idl
// generated code does not contain a copyright notice

#ifndef BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__BUILDER_HPP_
#define BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bkr_robot_interface/msg/detail/msg_odrive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bkr_robot_interface
{

namespace msg
{

namespace builder
{

class Init_MsgOdrive_velocity
{
public:
  explicit Init_MsgOdrive_velocity(::bkr_robot_interface::msg::MsgOdrive & msg)
  : msg_(msg)
  {}
  ::bkr_robot_interface::msg::MsgOdrive velocity(::bkr_robot_interface::msg::MsgOdrive::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bkr_robot_interface::msg::MsgOdrive msg_;
};

class Init_MsgOdrive_action
{
public:
  Init_MsgOdrive_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgOdrive_velocity action(::bkr_robot_interface::msg::MsgOdrive::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_MsgOdrive_velocity(msg_);
  }

private:
  ::bkr_robot_interface::msg::MsgOdrive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bkr_robot_interface::msg::MsgOdrive>()
{
  return bkr_robot_interface::msg::builder::Init_MsgOdrive_action();
}

}  // namespace bkr_robot_interface

#endif  // BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__BUILDER_HPP_
