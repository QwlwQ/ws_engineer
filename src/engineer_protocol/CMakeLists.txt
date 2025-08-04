cmake_minimum_required(VERSION 3.8)
project(engineer_protocol)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(fmt REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(base_interfaces REQUIRED)


# Find and add opencv as required
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
link_libraries(${OpenCV_LIBS})

include_directories(${PROJECT_SOURCE_DIR}/include)

# Add serial as shared library to build target
list(APPEND EXTRA_INCLUDES serial)

#list(APPEND EXTRA_INCLUDES ${PROJECT_SOURCE_DIR}/serial)
add_library(uart-serial-driver src/uart_serial_driver.cpp)
list(APPEND RVS_EXTRA_LIBS uart-serial-driver)

ament_target_dependencies(uart-serial-driver fmt OpenCV)
target_link_libraries(uart-serial-driver 
  fmt::fmt 
  ${OpenCV_LIBS})


# Add EXTRA_INCLUDES to project includes
include_directories(${EXTRA_INCLUDES})


# Add src/uart_serial to executable
add_executable(uart_serial src/uart_serial.cpp)

# Add shared library link to uart_serial
target_link_libraries(uart_serial
  fmt::fmt
  ${OpenCV_LIBS}
  ${RVS_EXTRA_LIBS}
)

target_include_directories(uart_serial PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(uart_serial PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(uart_serial
  "rclcpp"
  "std_msgs"
  "sensor_msgs"
  "base_interfaces"
  "OpenCV"
)

install(TARGETS 
  uart_serial
  ${RVS_EXTRA_LIBS}
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
