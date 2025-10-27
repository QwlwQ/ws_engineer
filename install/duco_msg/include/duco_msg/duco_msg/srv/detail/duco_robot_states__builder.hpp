// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duco_msg:srv/DucoRobotStates.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__DUCO_ROBOT_STATES__BUILDER_HPP_
#define DUCO_MSG__SRV__DETAIL__DUCO_ROBOT_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duco_msg/srv/detail/duco_robot_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duco_msg
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::DucoRobotStates_Request>()
{
  return ::duco_msg::srv::DucoRobotStates_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace duco_msg


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_DucoRobotStates_Response_robot_states
{
public:
  Init_DucoRobotStates_Response_robot_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::duco_msg::srv::DucoRobotStates_Response robot_states(::duco_msg::srv::DucoRobotStates_Response::_robot_states_type arg)
  {
    msg_.robot_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::DucoRobotStates_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::DucoRobotStates_Response>()
{
  return duco_msg::srv::builder::Init_DucoRobotStates_Response_robot_states();
}

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__DUCO_ROBOT_STATES__BUILDER_HPP_
