# BKR Robotics Hardware Interface

This ROS2 workspace contains the hardware interface for the BKR robot, a differential drive robot using ODrive motors.

## Prerequisites

- ROS2 Humble
- ODrive motors connected via USB or CAN
- Python dependencies: Install required packages if needed

## Building the Workspace

1. Source ROS2:
   ```bash
   source /opt/ros/humble/setup.bash
   ```

2. Navigate to the workspace:
   ```bash
   cd /HWI
   ```

3. Build the packages:
   ```bash
   colcon build
   ```

4. Source the workspace:
   ```bash
   source install/setup.bash
   ```

## Hardware Setup

### URDF Configuration

The robot description is in `src/bkrobotics_hardware_interface/bring_up/urdf/my_robot_hwi.urdf`.

Ensure the `<ros2_control>` section - which is in the URDF file - has the correct hardware parameters:

```xml
<ros2_control name="bkr_robot" type="system">
  <hardware>
    <plugin>bkrobotics_hardware_interface/BkrRobotHardware</plugin>
    <param name="left_wheel_name">base_left_wheel_joint</param>
    <param name="right_wheel_name">base_right_wheel_joint</param>
    <param name="device">/dev/ttyUSB0</param>  <!-- Adjust to your device -->
    <param name="baud_rate">500000</param>
    <param name="timeout_ms">1000</param>
    <param name="wheel_diameter">100</param>
    <param name="pid_p">10</param>
    <param name="pid_i">0</param>
    <param name="pid_d">1</param>
    <param name="enc_counts_per_rev">4000</param>
  </hardware>
  <!-- joint interfaces -->
</ros2_control>
```

- **device**: Set to `/dev/ttyUSB0` for USB connection or `can0` for CAN.
- **baud_rate**: Match your ODrive baud rate.
- Adjust PID and encoder parameters as needed for your setup.

### Physical Connections

- Connect ODrive motors to the robot's wheels.
- Ensure the device path is correct (e.g., `/dev/ttyUSB0`).
- For CAN, set up the CAN interface (e.g., `can0`).

## Launching the Robot

To launch the robot with hardware interface:

```bash
ros2 launch bkrobotics_hardware_interface bkr_robot.launch.py
```

This will start:
- robot_state_publisher
- ros2_control_node with the hardware interface
- Controller manager

## Controllers

The default controller configuration is in `src/bkrobotics_hardware_interface/config/diff_drive.yaml`.

To load controllers after launch:

```bash
ros2 control load_controller diff_drive_controller
ros2 control set_controller_state diff_drive_controller active
```

## Troubleshooting

- Ensure the device permissions allow access (e.g., `sudo chmod 666 /dev/ttyUSB0`).
- Check ROS logs for errors.
- Verify URDF parameters match your hardware.

## Packages

- `bkr_robot_interface`: Message definitions
- `bkrobotics_hardware_interface`: Hardware interface plugin
- `my_diff_drive_controller`: Custom controller (if used)</content>
<parameter name="filePath">/home/thien123/ROS2WS/HWI/README.md