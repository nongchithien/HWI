// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bkr_robot_interface:srv/RequestOdrive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bkr_robot_interface/srv/detail/request_odrive__rosidl_typesupport_introspection_c.h"
#include "bkr_robot_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bkr_robot_interface/srv/detail/request_odrive__functions.h"
#include "bkr_robot_interface/srv/detail/request_odrive__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bkr_robot_interface__srv__RequestOdrive_Request__rosidl_typesupport_introspection_c__RequestOdrive_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bkr_robot_interface__srv__RequestOdrive_Request__init(message_memory);
}

void bkr_robot_interface__srv__RequestOdrive_Request__rosidl_typesupport_introspection_c__RequestOdrive_Request_fini_function(void * message_memory)
{
  bkr_robot_interface__srv__RequestOdrive_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bkr_robot_interface__srv__RequestOdrive_Request__rosidl_typesupport_introspection_c__RequestOdrive_Request_message_member_array[3] = {
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bkr_robot_interface__srv__RequestOdrive_Request, action),  // bytes offset in struct
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
    offsetof(bkr_robot_interface__srv__RequestOdrive_Request, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bkr_robot_interface__srv__RequestOdrive_Request, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bkr_robot_interface__srv__RequestOdrive_Request__rosidl_typesupport_introspection_c__RequestOdrive_Request_message_members = {
  "bkr_robot_interface__srv",  // message namespace
  "RequestOdrive_Request",  // message name
  3,  // number of fields
  sizeof(bkr_robot_interface__srv__RequestOdrive_Request),
  bkr_robot_interface__srv__RequestOdrive_Request__rosidl_typesupport_introspection_c__RequestOdrive_Request_message_member_array,  // message members
  bkr_robot_interface__srv__RequestOdrive_Request__rosidl_typesupport_introspection_c__RequestOdrive_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  bkr_robot_interface__srv__RequestOdrive_Request__rosidl_typesupport_introspection_c__RequestOdrive_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bkr_robot_interface__srv__RequestOdrive_Request__rosidl_typesupport_introspection_c__RequestOdrive_Request_message_type_support_handle = {
  0,
  &bkr_robot_interface__srv__RequestOdrive_Request__rosidl_typesupport_introspection_c__RequestOdrive_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bkr_robot_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bkr_robot_interface, srv, RequestOdrive_Request)() {
  if (!bkr_robot_interface__srv__RequestOdrive_Request__rosidl_typesupport_introspection_c__RequestOdrive_Request_message_type_support_handle.typesupport_identifier) {
    bkr_robot_interface__srv__RequestOdrive_Request__rosidl_typesupport_introspection_c__RequestOdrive_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bkr_robot_interface__srv__RequestOdrive_Request__rosidl_typesupport_introspection_c__RequestOdrive_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bkr_robot_interface/srv/detail/request_odrive__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bkr_robot_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bkr_robot_interface/srv/detail/request_odrive__functions.h"
// already included above
// #include "bkr_robot_interface/srv/detail/request_odrive__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bkr_robot_interface__srv__RequestOdrive_Response__rosidl_typesupport_introspection_c__RequestOdrive_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bkr_robot_interface__srv__RequestOdrive_Response__init(message_memory);
}

void bkr_robot_interface__srv__RequestOdrive_Response__rosidl_typesupport_introspection_c__RequestOdrive_Response_fini_function(void * message_memory)
{
  bkr_robot_interface__srv__RequestOdrive_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bkr_robot_interface__srv__RequestOdrive_Response__rosidl_typesupport_introspection_c__RequestOdrive_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bkr_robot_interface__srv__RequestOdrive_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bkr_robot_interface__srv__RequestOdrive_Response__rosidl_typesupport_introspection_c__RequestOdrive_Response_message_members = {
  "bkr_robot_interface__srv",  // message namespace
  "RequestOdrive_Response",  // message name
  1,  // number of fields
  sizeof(bkr_robot_interface__srv__RequestOdrive_Response),
  bkr_robot_interface__srv__RequestOdrive_Response__rosidl_typesupport_introspection_c__RequestOdrive_Response_message_member_array,  // message members
  bkr_robot_interface__srv__RequestOdrive_Response__rosidl_typesupport_introspection_c__RequestOdrive_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  bkr_robot_interface__srv__RequestOdrive_Response__rosidl_typesupport_introspection_c__RequestOdrive_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bkr_robot_interface__srv__RequestOdrive_Response__rosidl_typesupport_introspection_c__RequestOdrive_Response_message_type_support_handle = {
  0,
  &bkr_robot_interface__srv__RequestOdrive_Response__rosidl_typesupport_introspection_c__RequestOdrive_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bkr_robot_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bkr_robot_interface, srv, RequestOdrive_Response)() {
  if (!bkr_robot_interface__srv__RequestOdrive_Response__rosidl_typesupport_introspection_c__RequestOdrive_Response_message_type_support_handle.typesupport_identifier) {
    bkr_robot_interface__srv__RequestOdrive_Response__rosidl_typesupport_introspection_c__RequestOdrive_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bkr_robot_interface__srv__RequestOdrive_Response__rosidl_typesupport_introspection_c__RequestOdrive_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bkr_robot_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "bkr_robot_interface/srv/detail/request_odrive__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers bkr_robot_interface__srv__detail__request_odrive__rosidl_typesupport_introspection_c__RequestOdrive_service_members = {
  "bkr_robot_interface__srv",  // service namespace
  "RequestOdrive",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // bkr_robot_interface__srv__detail__request_odrive__rosidl_typesupport_introspection_c__RequestOdrive_Request_message_type_support_handle,
  NULL  // response message
  // bkr_robot_interface__srv__detail__request_odrive__rosidl_typesupport_introspection_c__RequestOdrive_Response_message_type_support_handle
};

static rosidl_service_type_support_t bkr_robot_interface__srv__detail__request_odrive__rosidl_typesupport_introspection_c__RequestOdrive_service_type_support_handle = {
  0,
  &bkr_robot_interface__srv__detail__request_odrive__rosidl_typesupport_introspection_c__RequestOdrive_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bkr_robot_interface, srv, RequestOdrive_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bkr_robot_interface, srv, RequestOdrive_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bkr_robot_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bkr_robot_interface, srv, RequestOdrive)() {
  if (!bkr_robot_interface__srv__detail__request_odrive__rosidl_typesupport_introspection_c__RequestOdrive_service_type_support_handle.typesupport_identifier) {
    bkr_robot_interface__srv__detail__request_odrive__rosidl_typesupport_introspection_c__RequestOdrive_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)bkr_robot_interface__srv__detail__request_odrive__rosidl_typesupport_introspection_c__RequestOdrive_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bkr_robot_interface, srv, RequestOdrive_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bkr_robot_interface, srv, RequestOdrive_Response)()->data;
  }

  return &bkr_robot_interface__srv__detail__request_odrive__rosidl_typesupport_introspection_c__RequestOdrive_service_type_support_handle;
}
