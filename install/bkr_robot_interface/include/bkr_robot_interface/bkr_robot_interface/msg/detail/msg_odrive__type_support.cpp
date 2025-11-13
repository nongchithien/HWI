// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bkr_robot_interface:msg/MsgOdrive.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bkr_robot_interface/msg/detail/msg_odrive__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bkr_robot_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MsgOdrive_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bkr_robot_interface::msg::MsgOdrive(_init);
}

void MsgOdrive_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bkr_robot_interface::msg::MsgOdrive *>(message_memory);
  typed_message->~MsgOdrive();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MsgOdrive_message_member_array[2] = {
  {
    "action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bkr_robot_interface::msg::MsgOdrive, action),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bkr_robot_interface::msg::MsgOdrive, velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MsgOdrive_message_members = {
  "bkr_robot_interface::msg",  // message namespace
  "MsgOdrive",  // message name
  2,  // number of fields
  sizeof(bkr_robot_interface::msg::MsgOdrive),
  MsgOdrive_message_member_array,  // message members
  MsgOdrive_init_function,  // function to initialize message memory (memory has to be allocated)
  MsgOdrive_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MsgOdrive_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MsgOdrive_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace bkr_robot_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bkr_robot_interface::msg::MsgOdrive>()
{
  return &::bkr_robot_interface::msg::rosidl_typesupport_introspection_cpp::MsgOdrive_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bkr_robot_interface, msg, MsgOdrive)() {
  return &::bkr_robot_interface::msg::rosidl_typesupport_introspection_cpp::MsgOdrive_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
