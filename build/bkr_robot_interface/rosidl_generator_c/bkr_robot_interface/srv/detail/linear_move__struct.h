// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bkr_robot_interface:srv/LinearMove.idl
// generated code does not contain a copyright notice

#ifndef BKR_ROBOT_INTERFACE__SRV__DETAIL__LINEAR_MOVE__STRUCT_H_
#define BKR_ROBOT_INTERFACE__SRV__DETAIL__LINEAR_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/LinearMove in the package bkr_robot_interface.
typedef struct bkr_robot_interface__srv__LinearMove_Request
{
  uint8_t action;
  float velocity;
  float position;
} bkr_robot_interface__srv__LinearMove_Request;

// Struct for a sequence of bkr_robot_interface__srv__LinearMove_Request.
typedef struct bkr_robot_interface__srv__LinearMove_Request__Sequence
{
  bkr_robot_interface__srv__LinearMove_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bkr_robot_interface__srv__LinearMove_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/LinearMove in the package bkr_robot_interface.
typedef struct bkr_robot_interface__srv__LinearMove_Response
{
  bool success;
} bkr_robot_interface__srv__LinearMove_Response;

// Struct for a sequence of bkr_robot_interface__srv__LinearMove_Response.
typedef struct bkr_robot_interface__srv__LinearMove_Response__Sequence
{
  bkr_robot_interface__srv__LinearMove_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bkr_robot_interface__srv__LinearMove_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BKR_ROBOT_INTERFACE__SRV__DETAIL__LINEAR_MOVE__STRUCT_H_
