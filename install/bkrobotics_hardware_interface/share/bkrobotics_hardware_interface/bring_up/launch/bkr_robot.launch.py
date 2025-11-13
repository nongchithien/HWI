# Copyright 2020 ROS2-Control Development Team (2020)
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.actions import RegisterEventHandler
from launch.event_handlers import OnProcessStart
import xacro


def generate_launch_description():
    rviz_path= os.path.join(get_package_share_directory('bkrobotics_hardware_interface'),'bring_up','rviz2','config.rviz')

    # Get URDF via xacro
    robot_description_path = os.path.join(
        get_package_share_directory('bkrobotics_hardware_interface'),
        'bring_up',
        'urdf',
        'my_robot_hwi.urdf')
    robot_description_config = xacro.process_file(robot_description_path)
    robot_description = {'robot_description': robot_description_config.toxml()}
    # with open(robot_description_path, 'r') as infp:
    #     robot_description = infp.read()

    test_controller = os.path.join(
        get_package_share_directory('bkrobotics_hardware_interface'),
        'config',
        'diff_drive.yaml'
        )
    rsp = Node(            
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        parameters=[robot_description],
        output={
        #   'stdout': 'screen',
          'stderr': 'screen',
          })
    
    controller_manager = Node(
        package='controller_manager',
        executable='ros2_control_node',
        parameters=[robot_description, test_controller],
        output={
        #   'stdout': 'screen',
          'stderr': 'screen',
          })
    
    delayed_controller_manager = TimerAction(period=3.0, actions=[controller_manager])
    
    rviz2 = Node(
        package='rviz2',
        executable='rviz2',
        arguments=['-d', rviz_path])
    
    delayed_rviz = TimerAction(period=3.0, actions=[rviz2])
    
    joint_broad_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=["joint_state_broadcaster"])
    
    delayed_joint_broad_spawner = RegisterEventHandler(
        event_handler=OnProcessStart(
            target_action=controller_manager,
            on_start=[joint_broad_spawner],
        )
    )

    diff_drive_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=["diff_drive_controller"])
    delayed_diff_drive_spawner = RegisterEventHandler(
        event_handler=OnProcessStart(
            target_action=controller_manager,
            on_start=[diff_drive_spawner],
        )
    )
    
    
    return LaunchDescription([
    rsp,
    delayed_controller_manager,
    delayed_diff_drive_spawner,
    delayed_joint_broad_spawner,
    delayed_rviz
    # odrive_interface,
    # odrive_client
])