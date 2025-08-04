cmake_minimum_required(VERSION 3.8)
project(moveit_demo)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(base_interfaces REQUIRED)
find_package(tf2 REQUIRED)

add_executable(simple_motion_node src/simple_motion_node.cpp)
add_executable(move_controller_test src/move_controller_test.cpp)
add_executable(move_controller src/move_controller.cpp)

target_include_directories(simple_motion_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(simple_motion_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

ament_target_dependencies(
  simple_motion_node
  "rclcpp"
  "geometry_msgs"
  "moveit_ros_planning_interface"
)
ament_target_dependencies(
  move_controller_test
  "rclcpp"
  "geometry_msgs"
  "moveit_ros_planning_interface"
  "tf2"
)
ament_target_dependencies(
  move_controller
  "rclcpp"
  "moveit_ros_planning_interface"
  "geometry_msgs"
  "base_interfaces"
)


install(TARGETS 
  simple_motion_node
  move_controller_test
  move_controller
  DESTINATION lib/${PROJECT_NAME})

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
