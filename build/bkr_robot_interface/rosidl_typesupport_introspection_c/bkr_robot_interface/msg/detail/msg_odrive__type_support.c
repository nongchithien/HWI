// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bkr_robot_interface:msg/MsgOdrive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bkr_robot_interface/msg/detail/msg_odrive__rosidl_typesupport_introspection_c.h"
#include "bkr_robot_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bkr_robot_interface/msg/detail/msg_odrive__functions.h"
#include "bkr_robot_interface/msg/detail/msg_odrive__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bkr_robot_interface__msg__MsgOdrive__rosidl_typesupport_introspection_c__MsgOdrive_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bkr_robot_interface__msg__MsgOdrive__init(message_memory);
}

void bkr_robot_interface__msg__MsgOdrive__rosidl_typesupport_introspection_c__MsgOdrive_fini_function(void * message_memory)
{
  bkr_robot_interface__msg__MsgOdrive__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bkr_robot_interface__msg__MsgOdrive__rosidl_typesupport_introspection_c__MsgOdrive_message_member_array[2] = {
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bkr_robot_interface__msg__MsgOdrive, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bkr_robot_interface__msg__MsgOdrive, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bkr_robot_interface__msg__MsgOdrive__rosidl_typesupport_introspection_c__MsgOdrive_message_members = {
  "bkr_robot_interface__msg",  // message namespace
  "MsgOdrive",  // message name
  2,  // number of fields
  sizeof(bkr_robot_interface__msg__MsgOdrive),
  bkr_robot_interface__msg__MsgOdrive__rosidl_typesupport_introspection_c__MsgOdrive_message_member_array,  // message members
  bkr_robot_interface__msg__MsgOdrive__rosidl_typesupport_introspection_c__MsgOdrive_init_function,  // function to initialize message memory (memory has to be allocated)
  bkr_robot_interface__msg__MsgOdrive__rosidl_typesupport_introspection_c__MsgOdrive_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bkr_robot_interface__msg__MsgOdrive__rosidl_typesupport_introspection_c__MsgOdrive_message_type_support_handle = {
  0,
  &bkr_robot_interface__msg__MsgOdrive__rosidl_typesupport_introspection_c__MsgOdrive_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bkr_robot_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bkr_robot_interface, msg, MsgOdrive)() {
  if (!bkr_robot_interface__msg__MsgOdrive__rosidl_typesupport_introspection_c__MsgOdrive_message_type_support_handle.typesupport_identifier) {
    bkr_robot_interface__msg__MsgOdrive__rosidl_typesupport_introspection_c__MsgOdrive_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bkr_robot_interface__msg__MsgOdrive__rosidl_typesupport_introspection_c__MsgOdrive_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
