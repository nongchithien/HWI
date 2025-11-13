#include "bkrobotics_hardware_interface/diffbot_system.hpp"
#include "bkrobotics_hardware_interface/constant.h"
#include "bkrobotics_hardware_interface/can_comm.hpp"
#include "bkrobotics_hardware_interface/odrive_motor.hpp"

#include <chrono>
#include <cmath>
#include <limits>
#include <memory>
#include <vector>

// Định nghĩa M_PI nếu chưa được định nghĩa
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#include "hardware_interface/types/hardware_interface_type_values.hpp"
#include "rclcpp/rclcpp.hpp"

namespace bkr_robot
{

hardware_interface::CallbackReturn BkrRobotHardware::on_init(
    const hardware_interface::HardwareInfo & info)
{
  if (hardware_interface::SystemInterface::on_init(info) != hardware_interface::CallbackReturn::SUCCESS)
  {
    return hardware_interface::CallbackReturn::ERROR;
  }

  cfg_.left_wheel_name = info_.hardware_parameters["left_wheel_name"];
  cfg_.right_wheel_name = info_.hardware_parameters["right_wheel_name"];
  cfg_.device = info_.hardware_parameters["device"];
  cfg_.baud_rate = std::stoi(info_.hardware_parameters["baud_rate"]);
  cfg_.timeout_ms = std::stoi(info_.hardware_parameters["timeout_ms"]);
  cfg_.wheel_diameter = std::stoi(info_.hardware_parameters["wheel_diameter"]);
  cfg_.enc_counts_per_rev = std::stoi(info_.hardware_parameters["enc_counts_per_rev"]);


  // Attempt to get PID values if provided, otherwise use defaults
  if (info_.hardware_parameters.count("pid_p") > 0) {
    cfg_.pid_p = std::stoi(info_.hardware_parameters["pid_p"]);
  }
  if (info_.hardware_parameters.count("pid_i") > 0) {
    cfg_.pid_i = std::stoi(info_.hardware_parameters["pid_i"]);
  }
  if (info_.hardware_parameters.count("pid_d") > 0) {
    cfg_.pid_d = std::stoi(info_.hardware_parameters["pid_d"]);
  }

  wheel_l_.setup(cfg_.left_wheel_name, cfg_.enc_counts_per_rev);
  wheel_r_.setup(cfg_.right_wheel_name, cfg_.enc_counts_per_rev);

  for (const hardware_interface::ComponentInfo & joint : info_.joints)
  {
    // NTwo states and one command interface on each joint
    if (joint.command_interfaces.size() != 1)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("BkrRobotHardware"),
        "Joint '%s' has %zu command interfaces found. 1 expected.", joint.name.c_str(),
        joint.command_interfaces.size());
      return hardware_interface::CallbackReturn::ERROR;
    }

    if (joint.command_interfaces[0].name != hardware_interface::HW_IF_VELOCITY)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("BkrRobotHardware"),
        "Joint '%s' has %s command interface found. '%s' expected.", joint.name.c_str(),
        joint.command_interfaces[0].name.c_str(), hardware_interface::HW_IF_VELOCITY);
      return hardware_interface::CallbackReturn::ERROR;
    }

    if (joint.state_interfaces.size() != 2)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("BkrRobotHardware"),
        "Joint '%s' has %zu state interface. 2 expected.", joint.name.c_str(),
        joint.state_interfaces.size());
      return hardware_interface::CallbackReturn::ERROR;
    }

    if (joint.state_interfaces[0].name != hardware_interface::HW_IF_POSITION)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("BkrRobotHardware"),
        "Joint '%s' has '%s' as first state interface. '%s' expected.", joint.name.c_str(),
        joint.state_interfaces[0].name.c_str(), hardware_interface::HW_IF_POSITION);
      return hardware_interface::CallbackReturn::ERROR;
    }

    if (joint.state_interfaces[1].name != hardware_interface::HW_IF_VELOCITY)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("BkrRobotHardware"),
        "Joint '%s' has '%s' as second state interface. '%s' expected.", joint.name.c_str(),
        joint.state_interfaces[1].name.c_str(), hardware_interface::HW_IF_VELOCITY);
      return hardware_interface::CallbackReturn::ERROR;
    }
  }

  return hardware_interface::CallbackReturn::SUCCESS;
}


std::vector<hardware_interface::StateInterface> BkrRobotHardware::export_state_interfaces()
{
  std::vector<hardware_interface::StateInterface> state_interfaces;

  // Export wheel state interfaces
  state_interfaces.emplace_back(hardware_interface::StateInterface(
    wheel_l_.name, hardware_interface::HW_IF_POSITION, &wheel_l_.pos));
  state_interfaces.emplace_back(hardware_interface::StateInterface(
    wheel_l_.name, hardware_interface::HW_IF_VELOCITY, &wheel_l_.vel));

  state_interfaces.emplace_back(hardware_interface::StateInterface(
    wheel_r_.name, hardware_interface::HW_IF_POSITION, &wheel_r_.pos));
  state_interfaces.emplace_back(hardware_interface::StateInterface(
    wheel_r_.name, hardware_interface::HW_IF_VELOCITY, &wheel_r_.vel));

  return state_interfaces;
}

std::vector<hardware_interface::CommandInterface> BkrRobotHardware::export_command_interfaces()
{
  std::vector<hardware_interface::CommandInterface> command_interfaces;

  // Export wheel command interfaces
  command_interfaces.emplace_back(hardware_interface::CommandInterface(
    wheel_l_.name, hardware_interface::HW_IF_VELOCITY, &wheel_l_.cmd));

  command_interfaces.emplace_back(hardware_interface::CommandInterface(
    wheel_r_.name, hardware_interface::HW_IF_VELOCITY, &wheel_r_.cmd));

  return command_interfaces;
}

hardware_interface::CallbackReturn BkrRobotHardware::on_configure(
  const rclcpp_lifecycle::State & /*previous_state*/)
{
  RCLCPP_INFO(rclcpp::get_logger("BkrRobotHardware"), "Configuring...");

  // Initialize wheels
  wheel_l_.pos = 0.0;
  wheel_l_.vel = 0.0;
  wheel_l_.cmd = 0.0;

  wheel_r_.pos = 0.0;
  wheel_r_.vel = 0.0;
  wheel_r_.cmd = 0.0;

  // Initialize timer
  start_time_ = std::chrono::steady_clock::now();
  last_timer_execution_[0] = start_time_;
  last_timer_execution_[1] = start_time_;

  RCLCPP_INFO(rclcpp::get_logger("BkrRobotHardware"), "Successfully configured!");

  return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn BkrRobotHardware::on_cleanup(
  const rclcpp_lifecycle::State & /*previous_state*/)
{
  RCLCPP_INFO(rclcpp::get_logger("BkrRobotHardware"), "Cleaning up...please wait...");

  try {
    // Send zero velocity to both motors via CAN frames
    // Create payload for zero velocity (4 bytes float = 0.0f)
    std::vector<uint8_t> zero_payload = {0x00, 0x00, 0x00, 0x00}; // 0.0f in little-endian
    
    // Send zero velocity commands (adjust frame IDs to match your protocol)
    comm_.sendFrame(0x201, zero_payload); // Left wheel velocity command
    comm_.sendFrame(0x202, zero_payload); // Right wheel velocity command
    
    // Send clear error command if needed
    std::vector<uint8_t> clear_error_payload = {0x00}; // Clear error command
    comm_.sendFrame(0x2FF, clear_error_payload); // Clear error frame
    if (motor_) {
      motor_->clearError();
      motor_->idle();
    }
    
  } catch (const std::exception & e) {
    RCLCPP_ERROR(rclcpp::get_logger("BkrRobotHardware"), "Error during cleanup: %s", e.what());
    return hardware_interface::CallbackReturn::ERROR;
  }

  RCLCPP_INFO(rclcpp::get_logger("BkrRobotHardware"), "Cleanup complete");
  return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn BkrRobotHardware::on_activate(
  const rclcpp_lifecycle::State & /*previous_state*/)
{
  RCLCPP_INFO(rclcpp::get_logger("BkrRobotHardware"), "Activating...please wait...");

  // Connect to CAN interface
  try {
    bool success = comm_.openInterface(cfg_.device);
    if (!success) {
      throw std::runtime_error("Failed to open CAN interface: " + cfg_.device);
    }
    RCLCPP_INFO(rclcpp::get_logger("BkrRobotHardware"), "Successfully connected to CAN device %s", cfg_.device.c_str());

        //  Khởi tạo OdriveMotor sau khi CAN interface đã mở
    motor_ = std::make_unique<OdriveMotor>(
        0,  // device_id (điều chỉnh theo thiết bị của bạn)
        OdriveMotor::VELOCITY,  // control mode
        &comm_  // con trỏ tới CAN interface
    );

  } catch (const std::exception & e) {
    RCLCPP_ERROR(rclcpp::get_logger("BkrRobotHardware"), 
                "Failed to activate: %s", e.what());
    return hardware_interface::CallbackReturn::ERROR;
  }

  // Set initial wheel commands to zero
  wheel_l_.cmd = 0.0;
  wheel_r_.cmd = 0.0;

  RCLCPP_INFO(rclcpp::get_logger("BkrRobotHardware"), "Successfully activated!");
  return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn BkrRobotHardware::on_deactivate(
  const rclcpp_lifecycle::State & /*previous_state*/)
{
  RCLCPP_INFO(rclcpp::get_logger("BkrRobotHardware"), "Deactivating...please wait...");

  if (motor_) {
    motor_->idle();
    motor_->clearError();
  }

  RCLCPP_INFO(rclcpp::get_logger("BkrRobotHardware"), "Successfully deactivated!");
  return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::return_type BkrRobotHardware::read(
  const rclcpp::Time & /*time*/, const rclcpp::Duration & /*period*/)
{
  //read encoder value
  
  if (motor_) {
    RCLCPP_INFO(rclcpp::get_logger("BkrRobotHardware"), "Velocity: %.2f", motor_->getVelocity());
    // motor_->getVelocity():
    // RCLCPP_INFO(rclcpp::get_logger();
    // motor_->getPosition();
    // RCLCPP_INFO(rclcpp::get_logger();
  }
  
  return hardware_interface::return_type::OK;
}


hardware_interface::return_type BkrRobotHardware::write(
  const rclcpp::Time & /*time*/, const rclcpp::Duration & /*period*/)
{
  //set motor speed
  if (motor_) {
    float velocity = 30.0;
    motor_->setTarget(velocity);
  }
  return hardware_interface::return_type::OK;
}


}  // namespace bkr_robot

#include "pluginlib/class_list_macros.hpp"

PLUGINLIB_EXPORT_CLASS(
  bkr_robot::BkrRobotHardware,
  hardware_interface::SystemInterface
)