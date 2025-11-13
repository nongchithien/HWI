// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bkr_robot_interface:msg/MsgOdrive.idl
// generated code does not contain a copyright notice

#ifndef BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__STRUCT_H_
#define BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MsgOdrive in the package bkr_robot_interface.
typedef struct bkr_robot_interface__msg__MsgOdrive
{
  uint8_t action;
  float velocity;
} bkr_robot_interface__msg__MsgOdrive;

// Struct for a sequence of bkr_robot_interface__msg__MsgOdrive.
typedef struct bkr_robot_interface__msg__MsgOdrive__Sequence
{
  bkr_robot_interface__msg__MsgOdrive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bkr_robot_interface__msg__MsgOdrive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__STRUCT_H_
