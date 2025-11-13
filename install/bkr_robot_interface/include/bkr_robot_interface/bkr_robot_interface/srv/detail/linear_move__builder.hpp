// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bkr_robot_interface:srv/LinearMove.idl
// generated code does not contain a copyright notice

#ifndef BKR_ROBOT_INTERFACE__SRV__DETAIL__LINEAR_MOVE__BUILDER_HPP_
#define BKR_ROBOT_INTERFACE__SRV__DETAIL__LINEAR_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bkr_robot_interface/srv/detail/linear_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bkr_robot_interface
{

namespace srv
{

namespace builder
{

class Init_LinearMove_Request_position
{
public:
  explicit Init_LinearMove_Request_position(::bkr_robot_interface::srv::LinearMove_Request & msg)
  : msg_(msg)
  {}
  ::bkr_robot_interface::srv::LinearMove_Request position(::bkr_robot_interface::srv::LinearMove_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bkr_robot_interface::srv::LinearMove_Request msg_;
};

class Init_LinearMove_Request_velocity
{
public:
  explicit Init_LinearMove_Request_velocity(::bkr_robot_interface::srv::LinearMove_Request & msg)
  : msg_(msg)
  {}
  Init_LinearMove_Request_position velocity(::bkr_robot_interface::srv::LinearMove_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_LinearMove_Request_position(msg_);
  }

private:
  ::bkr_robot_interface::srv::LinearMove_Request msg_;
};

class Init_LinearMove_Request_action
{
public:
  Init_LinearMove_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearMove_Request_velocity action(::bkr_robot_interface::srv::LinearMove_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_LinearMove_Request_velocity(msg_);
  }

private:
  ::bkr_robot_interface::srv::LinearMove_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bkr_robot_interface::srv::LinearMove_Request>()
{
  return bkr_robot_interface::srv::builder::Init_LinearMove_Request_action();
}

}  // namespace bkr_robot_interface


namespace bkr_robot_interface
{

namespace srv
{

namespace builder
{

class Init_LinearMove_Response_success
{
public:
  Init_LinearMove_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bkr_robot_interface::srv::LinearMove_Response success(::bkr_robot_interface::srv::LinearMove_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bkr_robot_interface::srv::LinearMove_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bkr_robot_interface::srv::LinearMove_Response>()
{
  return bkr_robot_interface::srv::builder::Init_LinearMove_Response_success();
}

}  // namespace bkr_robot_interface

#endif  // BKR_ROBOT_INTERFACE__SRV__DETAIL__LINEAR_MOVE__BUILDER_HPP_
