from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, ThisLaunchFileDir, TextSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # 定义参数
    depth_module_profile = LaunchConfiguration('depth_module.profile', default='1280,720,15')
    enable_depth = LaunchConfiguration('enable_depth', default='true')
    rgb_camera_profile = LaunchConfiguration('rgb_camera.profile', default='1280,720,15')
    enable_color = LaunchConfiguration('enable_color', default='true')
    enable_pointcloud = LaunchConfiguration('pointcloud.enable', default='false')
    enable_sync = LaunchConfiguration('enable_sync', default='false')
    # align_depth = LaunchConfiguration('align_depth', default='false')
    # publish_tf = LaunchConfiguration('publish_tf', default='true')
    # tf_publish_rate = LaunchConfiguration('tf_publish_rate', default='0.0')
    # filters = LaunchConfiguration('filters', default='pointcloud')
    
    
    # 获取 realsense2_camera 包的路径
    realsense_launch_file_path = os.path.join(
        get_package_share_directory('realsense2_camera'), 
        'launch', 
        'rs_launch.py'
    )


    # 包含 realsense2_camera 的 launch 文件
    realsense_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(realsense_launch_file_path),
        launch_arguments={
            'depth_module.profile': depth_module_profile, 
            'enable_depth': enable_depth,
            'rgb_camera.profile': rgb_camera_profile,
            'enable_color': enable_color,
            'enable_pointcloud': enable_pointcloud,
            'enable_sync': enable_sync,
            # 'align_depth': align_depth,
            # 'publish_tf': publish_tf,
            # 'tf_publish_rate': tf_publish_rate,
            # 'filters': filters
        }.items()
    )

    # SOLOv2 实例分割节点
    solo_detect_node = Node(
        package='pallet_seg',
        executable='solo_detect_all',
        name='solo_detect',
        output='screen'
    )

    # rviz 节点
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz',
        arguments=['-d', [ThisLaunchFileDir(), '/conf/pallet_rviz.rviz']],
        output='screen'
    )

    return LaunchDescription([
        DeclareLaunchArgument('depth_module.profile', default_value='1280,720,15'),
        # ... 其他参数声明
        realsense_launch,
        solo_detect_node,
        rviz_node
    ])
