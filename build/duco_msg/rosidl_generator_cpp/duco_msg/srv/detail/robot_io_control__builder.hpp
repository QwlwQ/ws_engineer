// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duco_msg:srv/RobotIoControl.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__ROBOT_IO_CONTROL__BUILDER_HPP_
#define DUCO_MSG__SRV__DETAIL__ROBOT_IO_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duco_msg/srv/detail/robot_io_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_RobotIoControl_Request_block
{
public:
  explicit Init_RobotIoControl_Request_block(::duco_msg::srv::RobotIoControl_Request & msg)
  : msg_(msg)
  {}
  ::duco_msg::srv::RobotIoControl_Request block(::duco_msg::srv::RobotIoControl_Request::_block_type arg)
  {
    msg_.block = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::RobotIoControl_Request msg_;
};

class Init_RobotIoControl_Request_value
{
public:
  explicit Init_RobotIoControl_Request_value(::duco_msg::srv::RobotIoControl_Request & msg)
  : msg_(msg)
  {}
  Init_RobotIoControl_Request_block value(::duco_msg::srv::RobotIoControl_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_RobotIoControl_Request_block(msg_);
  }

private:
  ::duco_msg::srv::RobotIoControl_Request msg_;
};

class Init_RobotIoControl_Request_port
{
public:
  explicit Init_RobotIoControl_Request_port(::duco_msg::srv::RobotIoControl_Request & msg)
  : msg_(msg)
  {}
  Init_RobotIoControl_Request_value port(::duco_msg::srv::RobotIoControl_Request::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_RobotIoControl_Request_value(msg_);
  }

private:
  ::duco_msg::srv::RobotIoControl_Request msg_;
};

class Init_RobotIoControl_Request_type
{
public:
  explicit Init_RobotIoControl_Request_type(::duco_msg::srv::RobotIoControl_Request & msg)
  : msg_(msg)
  {}
  Init_RobotIoControl_Request_port type(::duco_msg::srv::RobotIoControl_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RobotIoControl_Request_port(msg_);
  }

private:
  ::duco_msg::srv::RobotIoControl_Request msg_;
};

class Init_RobotIoControl_Request_arm_num
{
public:
  explicit Init_RobotIoControl_Request_arm_num(::duco_msg::srv::RobotIoControl_Request & msg)
  : msg_(msg)
  {}
  Init_RobotIoControl_Request_type arm_num(::duco_msg::srv::RobotIoControl_Request::_arm_num_type arg)
  {
    msg_.arm_num = std::move(arg);
    return Init_RobotIoControl_Request_type(msg_);
  }

private:
  ::duco_msg::srv::RobotIoControl_Request msg_;
};

class Init_RobotIoControl_Request_command
{
public:
  Init_RobotIoControl_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotIoControl_Request_arm_num command(::duco_msg::srv::RobotIoControl_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_RobotIoControl_Request_arm_num(msg_);
  }

private:
  ::duco_msg::srv::RobotIoControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::RobotIoControl_Request>()
{
  return duco_msg::srv::builder::Init_RobotIoControl_Request_command();
}

}  // namespace duco_msg


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_RobotIoControl_Response_response
{
public:
  Init_RobotIoControl_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::duco_msg::srv::RobotIoControl_Response response(::duco_msg::srv::RobotIoControl_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::RobotIoControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::RobotIoControl_Response>()
{
  return duco_msg::srv::builder::Init_RobotIoControl_Response_response();
}

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__ROBOT_IO_CONTROL__BUILDER_HPP_
