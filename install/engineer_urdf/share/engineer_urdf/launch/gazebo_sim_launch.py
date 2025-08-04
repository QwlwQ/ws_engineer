from launch import LaunchDescription
from launch_ros.actions import Node
#封装终端指令相关类----------------
#from launch.actions import ExecuteProcess
# from launch.substitutions import FindExecutable
#参数声明与获取--------------------
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
#文件包含相关-----------------------
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
#分组相关-------------------------- 
#from launch_ros.actions import PushRosNamespace
#from launch.actions import GroupAction
#事件相关--------------------------
#from launch.event_handlers import OnProcessStart, OnProcessExit
#from launch.actions import ExecuteProcess,RegisterEventHandler,LogInfo
#获取功能包下share目录路径-----------
from ament_index_python.packages import get_package_share_directory

import os
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command

def generate_launch_description():
    urdf_path = get_package_share_directory('engineer_urdf') + '/urdf/urdf/manipulator.urdf'

    model_path = DeclareLaunchArgument(name='model', default_value = urdf_path)
    robot_description_value = ParameterValue(Command(['xacro ', LaunchConfiguration('model')]))    
    gazebo_world_path = get_package_share_directory('engineer_urdf') + '/world/conveyline/conveyline.world'

    #启动robot_state_publisher
    robot_state_publisher = Node(
        package = 'robot_state_publisher',
        executable = 'robot_state_publisher',
        parameters = [{'robot_description':robot_description_value}]
    )

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [get_package_share_directory('gazebo_ros'),'/launch','/gazebo.launch.py']
        ),
        launch_arguments = [('world', gazebo_world_path), ('verbose', 'true')]
    )

    spawn_entity = Node(
        package = 'gazebo_ros',
        executable = 'spawn_entity.py',
        arguments = ['-topic', '/robot_description', '-entity', 'manipulator', '-z', '1.0']
    )

    return LaunchDescription([
        model_path,
        robot_state_publisher,
        gazebo,
        spawn_entity
    ])
