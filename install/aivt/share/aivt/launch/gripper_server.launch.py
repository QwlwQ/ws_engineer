from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    # 声明启动参数
    server_port_arg = DeclareLaunchArgument(
        'server_port',
        default_value='8888',
        description='TCP server port'
    )
    
    max_clients_arg = DeclareLaunchArgument(
        'max_clients',
        default_value='10',
        description='Maximum number of ESP32 clients'
    )
    
    heartbeat_timeout_arg = DeclareLaunchArgument(
        'heartbeat_timeout',
        default_value='30.0',
        description='Timeout of heartbest from ESP32'
    )

    topic_prefix_arg = DeclareLaunchArgument(
        'topic_prefix',
        default_value='esp32',
        description='Topic prefix for ESP32 data'
    )

    # TCP服务器节点
    tcp_server_node = Node(
        package='aivt',
        executable='gripper_server',
        name='gripper_server',
        parameters=[{
            'server_port': LaunchConfiguration('server_port'),
            'max_clients': LaunchConfiguration('max_clients'),
            'heartbeat_timeout': LaunchConfiguration('heartbeat_timeout'),
            'sensor_topic_prefix': LaunchConfiguration('topic_prefix')
        }],
        remappings=[
            ('esp32/status', '/esp32/status'),
            ('esp32/connections', '/esp32/connections'),
            ('esp32/sensors/temperature', '/esp32/sensors/temperature'),
            ('esp32/sensors/humidity', '/esp32/sensors/humidity'),
            ('esp32/sensors/pressure', '/esp32/sensors/pressure'),
            ('esp32/sensors/light', '/esp32/sensors/light'),
            ('esp32/sensors/motion', '/esp32/sensors/motion'),
            ('esp32/command', '/esp32/command'),
            ('esp32/led_control', '/esp32/led_control')
        ]
    )

    return LaunchDescription([
        server_port_arg,
        max_clients_arg,
        topic_prefix_arg,
        heartbeat_timeout_arg,
        tcp_server_node
    ])