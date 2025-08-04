from launch import LaunchDescription
from launch_ros.actions import Node
#封装终端指令相关类----------------
#from launch.actions import ExecuteProcess
#from launch.substitutions import FindExecutable
#参数声明与获取--------------------
#from launch.actions import DeclareLaunchArgument
#from launch.substitutions import LaunchConfiguration
#文件包含相关-----------------------
#from launch.actions import IncludeLaunchDescription
#from launch.launch_description_sources import PythonLaunchDescriptionSource
#分组相关-------------------------- 
#from launch_ros.actions import PushRosNamespace
#from launch.actions import GroupAction
#事件相关--------------------------
#from launch.event_handlers import OnProcessStart, OnProcessExit
#from launch.actions import ExecuteProcess,RegisterEventHandler,LogInfo
#获取功能包下share目录路径-----------
from ament_index_python.packages import get_package_share_directory

#获取moveit_config
from moveit_configs_utils import MoveItConfigsBuilder
#获取相关路径
import os
from launch.actions import ExecuteProcess

def generate_launch_description():
    # planning_context
    moveit_config = (
        MoveItConfigsBuilder("manipulator", package_name="engineer_config")
        .robot_description(file_path="config/manipulator.urdf.xacro")
        .robot_description_semantic(file_path="config/manipulator.srdf")
        .trajectory_execution(file_path="config/ros2_controllers.yaml")
        .planning_pipelines(
            pipelines=["ompl", "chomp", "pilz_industrial_motion_planner"]
        )
        .to_moveit_configs()
    )

    # Load  ExecuteTaskSolutionCapability so we can execute found solutions in simulation
    move_group_capabilities = {
        "capabilities": "move_group/ExecuteTaskSolutionCapability"
    }

    # Start the actual move_group node/action server
    run_move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[
            moveit_config.to_dict(),
            move_group_capabilities,
        ],
    )

    # RViz
    rviz_config_file = (
        get_package_share_directory("engineer_urdf") + "/rviz/urdf.rviz"
    )
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        arguments=["-d", rviz_config_file],
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
        ],
    )

    # Static TF
    static_tf = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="static_transform_publisher",
        arguments=["--frame-id", "world", "--child-frame-id", "base_link"],
    )

    # Publish TF
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        parameters=[
            moveit_config.robot_description,
        ],
    )

    # ros2_control using FakeSystem as hardware
    ros2_controllers_path = os.path.join(
        get_package_share_directory("engineer_config"),
        "config",
        "ros2_controllers.yaml",
    )
    ros2_control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[ros2_controllers_path],
        remappings=[
            ("/controller_manager/robot_description", "/robot_description"),
        ],
    )

    # Load controllers
    load_controllers = []
    for controller in [
        "arm_group_controller",
        "joint_state_broadcaster",
    ]:
        load_controllers += [
            ExecuteProcess(
                cmd=["ros2 run controller_manager spawner {}".format(controller)],
                shell=True,
                output="screen",
            )
        ]

    return LaunchDescription(
        [
            rviz_node,
            static_tf,
            robot_state_publisher,
            run_move_group_node,
            ros2_control_node,
        ]
        + load_controllers
    )
