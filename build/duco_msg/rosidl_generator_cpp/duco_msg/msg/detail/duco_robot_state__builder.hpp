// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duco_msg:msg/DucoRobotState.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__DUCO_ROBOT_STATE__BUILDER_HPP_
#define DUCO_MSG__MSG__DETAIL__DUCO_ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duco_msg/msg/detail/duco_robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duco_msg
{

namespace msg
{

namespace builder
{

class Init_DucoRobotState_robot_error
{
public:
  explicit Init_DucoRobotState_robot_error(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  ::duco_msg::msg::DucoRobotState robot_error(::duco_msg::msg::DucoRobotState::_robot_error_type arg)
  {
    msg_.robot_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_robot_state
{
public:
  explicit Init_DucoRobotState_robot_state(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_robot_error robot_state(::duco_msg::msg::DucoRobotState::_robot_state_type arg)
  {
    msg_.robot_state = std::move(arg);
    return Init_DucoRobotState_robot_error(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_emc_stop_signal
{
public:
  explicit Init_DucoRobotState_emc_stop_signal(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_robot_state emc_stop_signal(::duco_msg::msg::DucoRobotState::_emc_stop_signal_type arg)
  {
    msg_.emc_stop_signal = std::move(arg);
    return Init_DucoRobotState_robot_state(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_collision_axis
{
public:
  explicit Init_DucoRobotState_collision_axis(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_emc_stop_signal collision_axis(::duco_msg::msg::DucoRobotState::_collision_axis_type arg)
  {
    msg_.collision_axis = std::move(arg);
    return Init_DucoRobotState_emc_stop_signal(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_collision
{
public:
  explicit Init_DucoRobotState_collision(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_collision_axis collision(::duco_msg::msg::DucoRobotState::_collision_type arg)
  {
    msg_.collision = std::move(arg);
    return Init_DucoRobotState_collision_axis(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_slave_ready
{
public:
  explicit Init_DucoRobotState_slave_ready(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_collision slave_ready(::duco_msg::msg::DucoRobotState::_slave_ready_type arg)
  {
    msg_.slave_ready = std::move(arg);
    return Init_DucoRobotState_collision(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_cart_actual_accelera
{
public:
  explicit Init_DucoRobotState_cart_actual_accelera(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_slave_ready cart_actual_accelera(::duco_msg::msg::DucoRobotState::_cart_actual_accelera_type arg)
  {
    msg_.cart_actual_accelera = std::move(arg);
    return Init_DucoRobotState_slave_ready(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_cart_actual_velocity
{
public:
  explicit Init_DucoRobotState_cart_actual_velocity(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_cart_actual_accelera cart_actual_velocity(::duco_msg::msg::DucoRobotState::_cart_actual_velocity_type arg)
  {
    msg_.cart_actual_velocity = std::move(arg);
    return Init_DucoRobotState_cart_actual_accelera(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_cart_actual_position
{
public:
  explicit Init_DucoRobotState_cart_actual_position(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_cart_actual_velocity cart_actual_position(::duco_msg::msg::DucoRobotState::_cart_actual_position_type arg)
  {
    msg_.cart_actual_position = std::move(arg);
    return Init_DucoRobotState_cart_actual_velocity(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_cart_expect_accelera
{
public:
  explicit Init_DucoRobotState_cart_expect_accelera(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_cart_actual_position cart_expect_accelera(::duco_msg::msg::DucoRobotState::_cart_expect_accelera_type arg)
  {
    msg_.cart_expect_accelera = std::move(arg);
    return Init_DucoRobotState_cart_actual_position(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_cart_expect_velocity
{
public:
  explicit Init_DucoRobotState_cart_expect_velocity(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_cart_expect_accelera cart_expect_velocity(::duco_msg::msg::DucoRobotState::_cart_expect_velocity_type arg)
  {
    msg_.cart_expect_velocity = std::move(arg);
    return Init_DucoRobotState_cart_expect_accelera(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_cart_expect_position
{
public:
  explicit Init_DucoRobotState_cart_expect_position(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_cart_expect_velocity cart_expect_position(::duco_msg::msg::DucoRobotState::_cart_expect_position_type arg)
  {
    msg_.cart_expect_position = std::move(arg);
    return Init_DucoRobotState_cart_expect_velocity(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_driver_temperature
{
public:
  explicit Init_DucoRobotState_driver_temperature(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_cart_expect_position driver_temperature(::duco_msg::msg::DucoRobotState::_driver_temperature_type arg)
  {
    msg_.driver_temperature = std::move(arg);
    return Init_DucoRobotState_cart_expect_position(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_joint_temperature
{
public:
  explicit Init_DucoRobotState_joint_temperature(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_driver_temperature joint_temperature(::duco_msg::msg::DucoRobotState::_joint_temperature_type arg)
  {
    msg_.joint_temperature = std::move(arg);
    return Init_DucoRobotState_driver_temperature(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_joint_actual_current
{
public:
  explicit Init_DucoRobotState_joint_actual_current(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_joint_temperature joint_actual_current(::duco_msg::msg::DucoRobotState::_joint_actual_current_type arg)
  {
    msg_.joint_actual_current = std::move(arg);
    return Init_DucoRobotState_joint_temperature(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_joint_actual_accelera
{
public:
  explicit Init_DucoRobotState_joint_actual_accelera(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_joint_actual_current joint_actual_accelera(::duco_msg::msg::DucoRobotState::_joint_actual_accelera_type arg)
  {
    msg_.joint_actual_accelera = std::move(arg);
    return Init_DucoRobotState_joint_actual_current(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_joint_actual_velocity
{
public:
  explicit Init_DucoRobotState_joint_actual_velocity(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_joint_actual_accelera joint_actual_velocity(::duco_msg::msg::DucoRobotState::_joint_actual_velocity_type arg)
  {
    msg_.joint_actual_velocity = std::move(arg);
    return Init_DucoRobotState_joint_actual_accelera(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_joint_actual_position
{
public:
  explicit Init_DucoRobotState_joint_actual_position(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_joint_actual_velocity joint_actual_position(::duco_msg::msg::DucoRobotState::_joint_actual_position_type arg)
  {
    msg_.joint_actual_position = std::move(arg);
    return Init_DucoRobotState_joint_actual_velocity(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_joint_expect_accelera
{
public:
  explicit Init_DucoRobotState_joint_expect_accelera(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_joint_actual_position joint_expect_accelera(::duco_msg::msg::DucoRobotState::_joint_expect_accelera_type arg)
  {
    msg_.joint_expect_accelera = std::move(arg);
    return Init_DucoRobotState_joint_actual_position(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_joint_expect_velocity
{
public:
  explicit Init_DucoRobotState_joint_expect_velocity(::duco_msg::msg::DucoRobotState & msg)
  : msg_(msg)
  {}
  Init_DucoRobotState_joint_expect_accelera joint_expect_velocity(::duco_msg::msg::DucoRobotState::_joint_expect_velocity_type arg)
  {
    msg_.joint_expect_velocity = std::move(arg);
    return Init_DucoRobotState_joint_expect_accelera(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

class Init_DucoRobotState_joint_expect_position
{
public:
  Init_DucoRobotState_joint_expect_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DucoRobotState_joint_expect_velocity joint_expect_position(::duco_msg::msg::DucoRobotState::_joint_expect_position_type arg)
  {
    msg_.joint_expect_position = std::move(arg);
    return Init_DucoRobotState_joint_expect_velocity(msg_);
  }

private:
  ::duco_msg::msg::DucoRobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::msg::DucoRobotState>()
{
  return duco_msg::msg::builder::Init_DucoRobotState_joint_expect_position();
}

}  // namespace duco_msg

#endif  // DUCO_MSG__MSG__DETAIL__DUCO_ROBOT_STATE__BUILDER_HPP_
