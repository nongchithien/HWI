// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bkr_robot_interface:msg/MsgOdrive.idl
// generated code does not contain a copyright notice

#ifndef BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__FUNCTIONS_H_
#define BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bkr_robot_interface/msg/rosidl_generator_c__visibility_control.h"

#include "bkr_robot_interface/msg/detail/msg_odrive__struct.h"

/// Initialize msg/MsgOdrive message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bkr_robot_interface__msg__MsgOdrive
 * )) before or use
 * bkr_robot_interface__msg__MsgOdrive__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bkr_robot_interface
bool
bkr_robot_interface__msg__MsgOdrive__init(bkr_robot_interface__msg__MsgOdrive * msg);

/// Finalize msg/MsgOdrive message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bkr_robot_interface
void
bkr_robot_interface__msg__MsgOdrive__fini(bkr_robot_interface__msg__MsgOdrive * msg);

/// Create msg/MsgOdrive message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bkr_robot_interface__msg__MsgOdrive__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bkr_robot_interface
bkr_robot_interface__msg__MsgOdrive *
bkr_robot_interface__msg__MsgOdrive__create();

/// Destroy msg/MsgOdrive message.
/**
 * It calls
 * bkr_robot_interface__msg__MsgOdrive__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bkr_robot_interface
void
bkr_robot_interface__msg__MsgOdrive__destroy(bkr_robot_interface__msg__MsgOdrive * msg);

/// Check for msg/MsgOdrive message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bkr_robot_interface
bool
bkr_robot_interface__msg__MsgOdrive__are_equal(const bkr_robot_interface__msg__MsgOdrive * lhs, const bkr_robot_interface__msg__MsgOdrive * rhs);

/// Copy a msg/MsgOdrive message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bkr_robot_interface
bool
bkr_robot_interface__msg__MsgOdrive__copy(
  const bkr_robot_interface__msg__MsgOdrive * input,
  bkr_robot_interface__msg__MsgOdrive * output);

/// Initialize array of msg/MsgOdrive messages.
/**
 * It allocates the memory for the number of elements and calls
 * bkr_robot_interface__msg__MsgOdrive__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bkr_robot_interface
bool
bkr_robot_interface__msg__MsgOdrive__Sequence__init(bkr_robot_interface__msg__MsgOdrive__Sequence * array, size_t size);

/// Finalize array of msg/MsgOdrive messages.
/**
 * It calls
 * bkr_robot_interface__msg__MsgOdrive__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bkr_robot_interface
void
bkr_robot_interface__msg__MsgOdrive__Sequence__fini(bkr_robot_interface__msg__MsgOdrive__Sequence * array);

/// Create array of msg/MsgOdrive messages.
/**
 * It allocates the memory for the array and calls
 * bkr_robot_interface__msg__MsgOdrive__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bkr_robot_interface
bkr_robot_interface__msg__MsgOdrive__Sequence *
bkr_robot_interface__msg__MsgOdrive__Sequence__create(size_t size);

/// Destroy array of msg/MsgOdrive messages.
/**
 * It calls
 * bkr_robot_interface__msg__MsgOdrive__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bkr_robot_interface
void
bkr_robot_interface__msg__MsgOdrive__Sequence__destroy(bkr_robot_interface__msg__MsgOdrive__Sequence * array);

/// Check for msg/MsgOdrive message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bkr_robot_interface
bool
bkr_robot_interface__msg__MsgOdrive__Sequence__are_equal(const bkr_robot_interface__msg__MsgOdrive__Sequence * lhs, const bkr_robot_interface__msg__MsgOdrive__Sequence * rhs);

/// Copy an array of msg/MsgOdrive messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bkr_robot_interface
bool
bkr_robot_interface__msg__MsgOdrive__Sequence__copy(
  const bkr_robot_interface__msg__MsgOdrive__Sequence * input,
  bkr_robot_interface__msg__MsgOdrive__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BKR_ROBOT_INTERFACE__MSG__DETAIL__MSG_ODRIVE__FUNCTIONS_H_
