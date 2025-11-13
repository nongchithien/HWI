// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bkr_robot_interface:msg/MsgOdrive.idl
// generated code does not contain a copyright notice

#ifndef BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__TRAITS_HPP_
#define BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bkr_robot_interface/msg/detail/msg_odrive__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bkr_robot_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const MsgOdrive & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MsgOdrive & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MsgOdrive & msg, bool use_flow_style = false)
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

}  // namespace bkr_robot_interface

namespace rosidl_generator_traits
{

[[deprecated("use bkr_robot_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bkr_robot_interface::msg::MsgOdrive & msg,
  std::ostream & out, size_t indentation = 0)
{
  bkr_robot_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bkr_robot_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const bkr_robot_interface::msg::MsgOdrive & msg)
{
  return bkr_robot_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bkr_robot_interface::msg::MsgOdrive>()
{
  return "bkr_robot_interface::msg::MsgOdrive";
}

template<>
inline const char * name<bkr_robot_interface::msg::MsgOdrive>()
{
  return "bkr_robot_interface/msg/MsgOdrive";
}

template<>
struct has_fixed_size<bkr_robot_interface::msg::MsgOdrive>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bkr_robot_interface::msg::MsgOdrive>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bkr_robot_interface::msg::MsgOdrive>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__TRAITS_HPP_
