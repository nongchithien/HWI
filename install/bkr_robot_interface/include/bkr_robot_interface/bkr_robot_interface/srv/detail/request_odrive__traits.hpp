// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bkr_robot_interface:srv/RequestOdrive.idl
// generated code does not contain a copyright notice

#ifndef BKR_ROBOT_INTERFACE__SRV__DETAIL__REQUEST_ODRIVE__TRAITS_HPP_
#define BKR_ROBOT_INTERFACE__SRV__DETAIL__REQUEST_ODRIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bkr_robot_interface/srv/detail/request_odrive__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bkr_robot_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const RequestOdrive_Request & msg,
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
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RequestOdrive_Request & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RequestOdrive_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bkr_robot_interface

namespace rosidl_generator_traits
{

[[deprecated("use bkr_robot_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bkr_robot_interface::srv::RequestOdrive_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bkr_robot_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bkr_robot_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const bkr_robot_interface::srv::RequestOdrive_Request & msg)
{
  return bkr_robot_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bkr_robot_interface::srv::RequestOdrive_Request>()
{
  return "bkr_robot_interface::srv::RequestOdrive_Request";
}

template<>
inline const char * name<bkr_robot_interface::srv::RequestOdrive_Request>()
{
  return "bkr_robot_interface/srv/RequestOdrive_Request";
}

template<>
struct has_fixed_size<bkr_robot_interface::srv::RequestOdrive_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bkr_robot_interface::srv::RequestOdrive_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bkr_robot_interface::srv::RequestOdrive_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bkr_robot_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const RequestOdrive_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RequestOdrive_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RequestOdrive_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bkr_robot_interface

namespace rosidl_generator_traits
{

[[deprecated("use bkr_robot_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bkr_robot_interface::srv::RequestOdrive_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bkr_robot_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bkr_robot_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const bkr_robot_interface::srv::RequestOdrive_Response & msg)
{
  return bkr_robot_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bkr_robot_interface::srv::RequestOdrive_Response>()
{
  return "bkr_robot_interface::srv::RequestOdrive_Response";
}

template<>
inline const char * name<bkr_robot_interface::srv::RequestOdrive_Response>()
{
  return "bkr_robot_interface/srv/RequestOdrive_Response";
}

template<>
struct has_fixed_size<bkr_robot_interface::srv::RequestOdrive_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bkr_robot_interface::srv::RequestOdrive_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bkr_robot_interface::srv::RequestOdrive_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bkr_robot_interface::srv::RequestOdrive>()
{
  return "bkr_robot_interface::srv::RequestOdrive";
}

template<>
inline const char * name<bkr_robot_interface::srv::RequestOdrive>()
{
  return "bkr_robot_interface/srv/RequestOdrive";
}

template<>
struct has_fixed_size<bkr_robot_interface::srv::RequestOdrive>
  : std::integral_constant<
    bool,
    has_fixed_size<bkr_robot_interface::srv::RequestOdrive_Request>::value &&
    has_fixed_size<bkr_robot_interface::srv::RequestOdrive_Response>::value
  >
{
};

template<>
struct has_bounded_size<bkr_robot_interface::srv::RequestOdrive>
  : std::integral_constant<
    bool,
    has_bounded_size<bkr_robot_interface::srv::RequestOdrive_Request>::value &&
    has_bounded_size<bkr_robot_interface::srv::RequestOdrive_Response>::value
  >
{
};

template<>
struct is_service<bkr_robot_interface::srv::RequestOdrive>
  : std::true_type
{
};

template<>
struct is_service_request<bkr_robot_interface::srv::RequestOdrive_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bkr_robot_interface::srv::RequestOdrive_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BKR_ROBOT_INTERFACE__SRV__DETAIL__REQUEST_ODRIVE__TRAITS_HPP_
