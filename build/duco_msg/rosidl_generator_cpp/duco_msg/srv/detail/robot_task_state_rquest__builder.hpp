// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duco_msg:srv/RobotTaskStateRquest.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__ROBOT_TASK_STATE_RQUEST__BUILDER_HPP_
#define DUCO_MSG__SRV__DETAIL__ROBOT_TASK_STATE_RQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duco_msg/srv/detail/robot_task_state_rquest__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_RobotTaskStateRquest_Request_arm_num
{
public:
  explicit Init_RobotTaskStateRquest_Request_arm_num(::duco_msg::srv::RobotTaskStateRquest_Request & msg)
  : msg_(msg)
  {}
  ::duco_msg::srv::RobotTaskStateRquest_Request arm_num(::duco_msg::srv::RobotTaskStateRquest_Request::_arm_num_type arg)
  {
    msg_.arm_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::RobotTaskStateRquest_Request msg_;
};

class Init_RobotTaskStateRquest_Request_id
{
public:
  Init_RobotTaskStateRquest_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotTaskStateRquest_Request_arm_num id(::duco_msg::srv::RobotTaskStateRquest_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RobotTaskStateRquest_Request_arm_num(msg_);
  }

private:
  ::duco_msg::srv::RobotTaskStateRquest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::RobotTaskStateRquest_Request>()
{
  return duco_msg::srv::builder::Init_RobotTaskStateRquest_Request_id();
}

}  // namespace duco_msg


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_RobotTaskStateRquest_Response_response
{
public:
  Init_RobotTaskStateRquest_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::duco_msg::srv::RobotTaskStateRquest_Response response(::duco_msg::srv::RobotTaskStateRquest_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::RobotTaskStateRquest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::RobotTaskStateRquest_Response>()
{
  return duco_msg::srv::builder::Init_RobotTaskStateRquest_Response_response();
}

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__ROBOT_TASK_STATE_RQUEST__BUILDER_HPP_
