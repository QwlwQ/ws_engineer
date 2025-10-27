// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duco_msg:msg/DucoRobotState.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__DUCO_ROBOT_STATE__STRUCT_HPP_
#define DUCO_MSG__MSG__DETAIL__DUCO_ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__duco_msg__msg__DucoRobotState __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__msg__DucoRobotState __declspec(deprecated)
#endif

namespace duco_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DucoRobotState_
{
  using Type = DucoRobotState_<ContainerAllocator>;

  explicit DucoRobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_expect_position.begin(), this->joint_expect_position.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_expect_velocity.begin(), this->joint_expect_velocity.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_expect_accelera.begin(), this->joint_expect_accelera.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_actual_position.begin(), this->joint_actual_position.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_actual_velocity.begin(), this->joint_actual_velocity.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_actual_accelera.begin(), this->joint_actual_accelera.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_actual_current.begin(), this->joint_actual_current.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_temperature.begin(), this->joint_temperature.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->driver_temperature.begin(), this->driver_temperature.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->cart_expect_position.begin(), this->cart_expect_position.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->cart_expect_velocity.begin(), this->cart_expect_velocity.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->cart_expect_accelera.begin(), this->cart_expect_accelera.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->cart_actual_position.begin(), this->cart_actual_position.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->cart_actual_velocity.begin(), this->cart_actual_velocity.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->cart_actual_accelera.begin(), this->cart_actual_accelera.end(), 0.0);
      std::fill<typename std::array<bool, 7>::iterator, bool>(this->slave_ready.begin(), this->slave_ready.end(), false);
      this->collision = false;
      this->collision_axis = 0;
      this->emc_stop_signal = false;
      this->robot_state = 0;
      this->robot_error = 0l;
    }
  }

  explicit DucoRobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_expect_position(_alloc),
    joint_expect_velocity(_alloc),
    joint_expect_accelera(_alloc),
    joint_actual_position(_alloc),
    joint_actual_velocity(_alloc),
    joint_actual_accelera(_alloc),
    joint_actual_current(_alloc),
    joint_temperature(_alloc),
    driver_temperature(_alloc),
    cart_expect_position(_alloc),
    cart_expect_velocity(_alloc),
    cart_expect_accelera(_alloc),
    cart_actual_position(_alloc),
    cart_actual_velocity(_alloc),
    cart_actual_accelera(_alloc),
    slave_ready(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_expect_position.begin(), this->joint_expect_position.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_expect_velocity.begin(), this->joint_expect_velocity.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_expect_accelera.begin(), this->joint_expect_accelera.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_actual_position.begin(), this->joint_actual_position.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_actual_velocity.begin(), this->joint_actual_velocity.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_actual_accelera.begin(), this->joint_actual_accelera.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_actual_current.begin(), this->joint_actual_current.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_temperature.begin(), this->joint_temperature.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->driver_temperature.begin(), this->driver_temperature.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->cart_expect_position.begin(), this->cart_expect_position.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->cart_expect_velocity.begin(), this->cart_expect_velocity.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->cart_expect_accelera.begin(), this->cart_expect_accelera.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->cart_actual_position.begin(), this->cart_actual_position.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->cart_actual_velocity.begin(), this->cart_actual_velocity.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->cart_actual_accelera.begin(), this->cart_actual_accelera.end(), 0.0);
      std::fill<typename std::array<bool, 7>::iterator, bool>(this->slave_ready.begin(), this->slave_ready.end(), false);
      this->collision = false;
      this->collision_axis = 0;
      this->emc_stop_signal = false;
      this->robot_state = 0;
      this->robot_error = 0l;
    }
  }

  // field types and members
  using _joint_expect_position_type =
    std::array<double, 7>;
  _joint_expect_position_type joint_expect_position;
  using _joint_expect_velocity_type =
    std::array<double, 7>;
  _joint_expect_velocity_type joint_expect_velocity;
  using _joint_expect_accelera_type =
    std::array<double, 7>;
  _joint_expect_accelera_type joint_expect_accelera;
  using _joint_actual_position_type =
    std::array<double, 7>;
  _joint_actual_position_type joint_actual_position;
  using _joint_actual_velocity_type =
    std::array<double, 7>;
  _joint_actual_velocity_type joint_actual_velocity;
  using _joint_actual_accelera_type =
    std::array<double, 7>;
  _joint_actual_accelera_type joint_actual_accelera;
  using _joint_actual_current_type =
    std::array<double, 7>;
  _joint_actual_current_type joint_actual_current;
  using _joint_temperature_type =
    std::array<double, 7>;
  _joint_temperature_type joint_temperature;
  using _driver_temperature_type =
    std::array<double, 7>;
  _driver_temperature_type driver_temperature;
  using _cart_expect_position_type =
    std::array<double, 7>;
  _cart_expect_position_type cart_expect_position;
  using _cart_expect_velocity_type =
    std::array<double, 7>;
  _cart_expect_velocity_type cart_expect_velocity;
  using _cart_expect_accelera_type =
    std::array<double, 7>;
  _cart_expect_accelera_type cart_expect_accelera;
  using _cart_actual_position_type =
    std::array<double, 7>;
  _cart_actual_position_type cart_actual_position;
  using _cart_actual_velocity_type =
    std::array<double, 7>;
  _cart_actual_velocity_type cart_actual_velocity;
  using _cart_actual_accelera_type =
    std::array<double, 7>;
  _cart_actual_accelera_type cart_actual_accelera;
  using _slave_ready_type =
    std::array<bool, 7>;
  _slave_ready_type slave_ready;
  using _collision_type =
    bool;
  _collision_type collision;
  using _collision_axis_type =
    int8_t;
  _collision_axis_type collision_axis;
  using _emc_stop_signal_type =
    bool;
  _emc_stop_signal_type emc_stop_signal;
  using _robot_state_type =
    int8_t;
  _robot_state_type robot_state;
  using _robot_error_type =
    int32_t;
  _robot_error_type robot_error;

  // setters for named parameter idiom
  Type & set__joint_expect_position(
    const std::array<double, 7> & _arg)
  {
    this->joint_expect_position = _arg;
    return *this;
  }
  Type & set__joint_expect_velocity(
    const std::array<double, 7> & _arg)
  {
    this->joint_expect_velocity = _arg;
    return *this;
  }
  Type & set__joint_expect_accelera(
    const std::array<double, 7> & _arg)
  {
    this->joint_expect_accelera = _arg;
    return *this;
  }
  Type & set__joint_actual_position(
    const std::array<double, 7> & _arg)
  {
    this->joint_actual_position = _arg;
    return *this;
  }
  Type & set__joint_actual_velocity(
    const std::array<double, 7> & _arg)
  {
    this->joint_actual_velocity = _arg;
    return *this;
  }
  Type & set__joint_actual_accelera(
    const std::array<double, 7> & _arg)
  {
    this->joint_actual_accelera = _arg;
    return *this;
  }
  Type & set__joint_actual_current(
    const std::array<double, 7> & _arg)
  {
    this->joint_actual_current = _arg;
    return *this;
  }
  Type & set__joint_temperature(
    const std::array<double, 7> & _arg)
  {
    this->joint_temperature = _arg;
    return *this;
  }
  Type & set__driver_temperature(
    const std::array<double, 7> & _arg)
  {
    this->driver_temperature = _arg;
    return *this;
  }
  Type & set__cart_expect_position(
    const std::array<double, 7> & _arg)
  {
    this->cart_expect_position = _arg;
    return *this;
  }
  Type & set__cart_expect_velocity(
    const std::array<double, 7> & _arg)
  {
    this->cart_expect_velocity = _arg;
    return *this;
  }
  Type & set__cart_expect_accelera(
    const std::array<double, 7> & _arg)
  {
    this->cart_expect_accelera = _arg;
    return *this;
  }
  Type & set__cart_actual_position(
    const std::array<double, 7> & _arg)
  {
    this->cart_actual_position = _arg;
    return *this;
  }
  Type & set__cart_actual_velocity(
    const std::array<double, 7> & _arg)
  {
    this->cart_actual_velocity = _arg;
    return *this;
  }
  Type & set__cart_actual_accelera(
    const std::array<double, 7> & _arg)
  {
    this->cart_actual_accelera = _arg;
    return *this;
  }
  Type & set__slave_ready(
    const std::array<bool, 7> & _arg)
  {
    this->slave_ready = _arg;
    return *this;
  }
  Type & set__collision(
    const bool & _arg)
  {
    this->collision = _arg;
    return *this;
  }
  Type & set__collision_axis(
    const int8_t & _arg)
  {
    this->collision_axis = _arg;
    return *this;
  }
  Type & set__emc_stop_signal(
    const bool & _arg)
  {
    this->emc_stop_signal = _arg;
    return *this;
  }
  Type & set__robot_state(
    const int8_t & _arg)
  {
    this->robot_state = _arg;
    return *this;
  }
  Type & set__robot_error(
    const int32_t & _arg)
  {
    this->robot_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duco_msg::msg::DucoRobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::msg::DucoRobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::msg::DucoRobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::msg::DucoRobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::msg::DucoRobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::msg::DucoRobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::msg::DucoRobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::msg::DucoRobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::msg::DucoRobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::msg::DucoRobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__msg__DucoRobotState
    std::shared_ptr<duco_msg::msg::DucoRobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__msg__DucoRobotState
    std::shared_ptr<duco_msg::msg::DucoRobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DucoRobotState_ & other) const
  {
    if (this->joint_expect_position != other.joint_expect_position) {
      return false;
    }
    if (this->joint_expect_velocity != other.joint_expect_velocity) {
      return false;
    }
    if (this->joint_expect_accelera != other.joint_expect_accelera) {
      return false;
    }
    if (this->joint_actual_position != other.joint_actual_position) {
      return false;
    }
    if (this->joint_actual_velocity != other.joint_actual_velocity) {
      return false;
    }
    if (this->joint_actual_accelera != other.joint_actual_accelera) {
      return false;
    }
    if (this->joint_actual_current != other.joint_actual_current) {
      return false;
    }
    if (this->joint_temperature != other.joint_temperature) {
      return false;
    }
    if (this->driver_temperature != other.driver_temperature) {
      return false;
    }
    if (this->cart_expect_position != other.cart_expect_position) {
      return false;
    }
    if (this->cart_expect_velocity != other.cart_expect_velocity) {
      return false;
    }
    if (this->cart_expect_accelera != other.cart_expect_accelera) {
      return false;
    }
    if (this->cart_actual_position != other.cart_actual_position) {
      return false;
    }
    if (this->cart_actual_velocity != other.cart_actual_velocity) {
      return false;
    }
    if (this->cart_actual_accelera != other.cart_actual_accelera) {
      return false;
    }
    if (this->slave_ready != other.slave_ready) {
      return false;
    }
    if (this->collision != other.collision) {
      return false;
    }
    if (this->collision_axis != other.collision_axis) {
      return false;
    }
    if (this->emc_stop_signal != other.emc_stop_signal) {
      return false;
    }
    if (this->robot_state != other.robot_state) {
      return false;
    }
    if (this->robot_error != other.robot_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const DucoRobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DucoRobotState_

// alias to use template instance with default allocator
using DucoRobotState =
  duco_msg::msg::DucoRobotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace duco_msg

#endif  // DUCO_MSG__MSG__DETAIL__DUCO_ROBOT_STATE__STRUCT_HPP_
