cmake_minimum_required(VERSION 3.8)
project(aivt)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(duco_msg REQUIRED)
find_package(aivt_interfaces REQUIRED)

find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)
# find_package(image_transport REQUIRED)
# set(OpenCV_DIR "/usr/include/opencv4")

find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)

find_package(Eigen3 REQUIRED)
find_package(yaml-cpp REQUIRED)
find_package(PCL REQUIRED)
find_package(pcl_conversions REQUIRED)

find_package(duco_ros_driver REQUIRED)



include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${EIGEN3_INCLUDE_DIR})
include_directories(${duco_ros_driver_INCLUDE_DIRS})
include_directories(${PCL_INCLUDE_DIRS})

# 添加可执行文件
add_executable(robot_motion_test src/robot_motion_test.cpp)
add_executable(hand_eye_calibration src/hand_eye_calibration.cpp)
add_executable(chessboard_detection src/chessboard_detection.cpp)
add_executable(grasp_touch_control src/grasp_touch_control.cpp)
add_executable(tcp_calibration src/tcp_calibration.cpp)
add_executable(robot_motion src/robot_motion.cpp)
add_executable(calibration_calculation src/calibration_calculation.cpp)
add_executable(obstacle_avoidance src/obstacle_avoidance.cpp)

ament_target_dependencies(robot_motion_test
  rclcpp
  duco_msg
  sensor_msgs
)

ament_target_dependencies(hand_eye_calibration
  rclcpp
  std_msgs
  sensor_msgs
  geometry_msgs
  cv_bridge
  duco_msg
  aivt_interfaces
)

ament_target_dependencies(chessboard_detection
  rclcpp
  sensor_msgs
  geometry_msgs
  std_msgs
  cv_bridge
)

ament_target_dependencies(grasp_touch_control
  rclcpp
  std_msgs
)

ament_target_dependencies(tcp_calibration
  rclcpp
  std_msgs 
  duco_msg
)

ament_target_dependencies(robot_motion
  rclcpp
  duco_msg
  sensor_msgs
  aivt_interfaces
  yaml-cpp
)

ament_target_dependencies(calibration_calculation
  rclcpp
  geometry_msgs
  tf2
  tf2_geometry_msgs
)

ament_target_dependencies(obstacle_avoidance
  rclcpp
  sensor_msgs
  visualization_msgs
  pcl_conversions
)

target_link_libraries(hand_eye_calibration
  ${OpenCV_LIBRARIES}
  yaml-cpp
)

target_link_libraries(calibration_calculation
  ${OpenCV_LIBRARIES}
  yaml-cpp
)

target_link_libraries(chessboard_detection
  ${OpenCV_LIBRARIES}
)

target_link_libraries(obstacle_avoidance
  ${PCL_LIBRARIES}
)


# 安装可执行文件
install(TARGETS
  robot_motion_test
  DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS 
  hand_eye_calibration
  DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS
  chessboard_detection
  DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS 
  grasp_touch_control
  DESTINATION lib/${PROJECT_NAME})

install(TARGETS 
  tcp_calibration
  DESTINATION lib/${PROJECT_NAME})

install(TARGETS 
  robot_motion
  DESTINATION lib/${PROJECT_NAME})

install(TARGETS 
  calibration_calculation
  DESTINATION lib/${PROJECT_NAME})

install(TARGETS 
  obstacle_avoidance
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY
  launch
  config
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
