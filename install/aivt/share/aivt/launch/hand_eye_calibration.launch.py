from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # 获取包路径
    pkg_dir = get_package_share_directory('aivt')
    config_dir = os.path.join(pkg_dir, 'config')
    
    # 声明启动参数
    board_width_arg = DeclareLaunchArgument(
        'board_width', default_value='9',
        description='Chess board width (number of inner corners)')
    
    board_height_arg = DeclareLaunchArgument(
        'board_height', default_value='6',
        description='Chess board height (number of inner corners)')
    
    square_size_arg = DeclareLaunchArgument(
        'square_size', default_value='0.025',
        description='Size of chess board squares in meters')
    
    target_captures_arg = DeclareLaunchArgument(
        'target_captures', default_value='15',
        description='Number of poses to capture for calibration')
    
    use_aruco_arg = DeclareLaunchArgument(
        'use_aruco', default_value='false',
        description='Use ArUco markers instead of chessboard')
    
    # RealSense相机节点
    realsense_node = Node(
        package='realsense2_camera',
        executable='realsense2_camera_node',
        name='camera',
        parameters=[
            {'align_depth.enable': True},
            {'pointcloud.enable': True},
            {'rgb_camera.color_profile': '640x480x30'},
            {'depth_module.depth_profile': '640x480x30'},
        ],
        remappings=[
            ('/camera/color/image_raw', '/camera/color/image_raw'),
            ('/camera/color/camera_info', '/camera/color/camera_info'),
        ]
    )
    
    # 手眼标定节点
    calibration_node = Node(
        package='aivt',
        executable='hand_eye_calibration',
        name='hand_eye_calibration',
        parameters=[
            {'board_width': LaunchConfiguration('board_width')},
            {'board_height': LaunchConfiguration('board_height')},
            {'square_size': LaunchConfiguration('square_size')},
            {'target_captures': LaunchConfiguration('target_captures')},
            {'use_aruco': LaunchConfiguration('use_aruco')},
        ],
        output='screen'
    )
    
    return LaunchDescription([
        board_width_arg,
        board_height_arg,
        square_size_arg,
        target_captures_arg,
        use_aruco_arg,
        realsense_node,
        calibration_node,
    ])