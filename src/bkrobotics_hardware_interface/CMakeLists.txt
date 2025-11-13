cmake_minimum_required(VERSION 3.8)
project(bkrobotics_hardware_interface)


if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(std_msgs    REQUIRED)
find_package(PkgConfig REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(bkr_robot_interface REQUIRED)

add_library(
  ${PROJECT_NAME}
  SHARED
  src/diffbot_system.cpp
  src/can_comm.cpp
  src/odrive_motor.cpp
)

# Đưa đường dẫn include/ cho target

target_compile_definitions(${PROJECT_NAME} PRIVATE "BKR_ROBOT_BUILDING_DLL")
target_include_directories(
  ${PROJECT_NAME}
  PRIVATE
  include
)


# Link các dependency của ROS2

ament_target_dependencies(
  ${PROJECT_NAME}
  hardware_interface
  pluginlib
  rclcpp
  rclcpp_lifecycle
)

# ────────────────────────────────────────────────────────────────
# 4. Install
# ────────────────────────────────────────────────────────────────
install(
  TARGETS ${PROJECT_NAME}
  DESTINATION lib
)

# Cài đặt cả thư mục header để gói khác có thể dùng
install(DIRECTORY include/
        DESTINATION include)

install(
  DIRECTORY bring_up config
  DESTINATION share/${PROJECT_NAME}/
)


pluginlib_export_plugin_description_file(hardware_interface bkrobotics_hardware_interface.xml)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
endif()

## EXPORTS
ament_export_include_directories(
  include
)
ament_export_libraries(
  ${PROJECT_NAME}
)
ament_export_dependencies(
  hardware_interface
  pluginlib
  rclcpp
  rclcpp_lifecycle
)


ament_package()