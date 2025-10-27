// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duco_msg:srv/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__ROBOT_MOVE__BUILDER_HPP_
#define DUCO_MSG__SRV__DETAIL__ROBOT_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duco_msg/srv/detail/robot_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_RobotMove_Request_block
{
public:
  explicit Init_RobotMove_Request_block(::duco_msg::srv::RobotMove_Request & msg)
  : msg_(msg)
  {}
  ::duco_msg::srv::RobotMove_Request block(::duco_msg::srv::RobotMove_Request::_block_type arg)
  {
    msg_.block = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::RobotMove_Request msg_;
};

class Init_RobotMove_Request_wobj
{
public:
  explicit Init_RobotMove_Request_wobj(::duco_msg::srv::RobotMove_Request & msg)
  : msg_(msg)
  {}
  Init_RobotMove_Request_block wobj(::duco_msg::srv::RobotMove_Request::_wobj_type arg)
  {
    msg_.wobj = std::move(arg);
    return Init_RobotMove_Request_block(msg_);
  }

private:
  ::duco_msg::srv::RobotMove_Request msg_;
};

class Init_RobotMove_Request_tool
{
public:
  explicit Init_RobotMove_Request_tool(::duco_msg::srv::RobotMove_Request & msg)
  : msg_(msg)
  {}
  Init_RobotMove_Request_wobj tool(::duco_msg::srv::RobotMove_Request::_tool_type arg)
  {
    msg_.tool = std::move(arg);
    return Init_RobotMove_Request_wobj(msg_);
  }

private:
  ::duco_msg::srv::RobotMove_Request msg_;
};

class Init_RobotMove_Request_r
{
public:
  explicit Init_RobotMove_Request_r(::duco_msg::srv::RobotMove_Request & msg)
  : msg_(msg)
  {}
  Init_RobotMove_Request_tool r(::duco_msg::srv::RobotMove_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_RobotMove_Request_tool(msg_);
  }

private:
  ::duco_msg::srv::RobotMove_Request msg_;
};

class Init_RobotMove_Request_a
{
public:
  explicit Init_RobotMove_Request_a(::duco_msg::srv::RobotMove_Request & msg)
  : msg_(msg)
  {}
  Init_RobotMove_Request_r a(::duco_msg::srv::RobotMove_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_RobotMove_Request_r(msg_);
  }

private:
  ::duco_msg::srv::RobotMove_Request msg_;
};

class Init_RobotMove_Request_v
{
public:
  explicit Init_RobotMove_Request_v(::duco_msg::srv::RobotMove_Request & msg)
  : msg_(msg)
  {}
  Init_RobotMove_Request_a v(::duco_msg::srv::RobotMove_Request::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_RobotMove_Request_a(msg_);
  }

private:
  ::duco_msg::srv::RobotMove_Request msg_;
};

class Init_RobotMove_Request_q
{
public:
  explicit Init_RobotMove_Request_q(::duco_msg::srv::RobotMove_Request & msg)
  : msg_(msg)
  {}
  Init_RobotMove_Request_v q(::duco_msg::srv::RobotMove_Request::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_RobotMove_Request_v(msg_);
  }

private:
  ::duco_msg::srv::RobotMove_Request msg_;
};

class Init_RobotMove_Request_p
{
public:
  explicit Init_RobotMove_Request_p(::duco_msg::srv::RobotMove_Request & msg)
  : msg_(msg)
  {}
  Init_RobotMove_Request_q p(::duco_msg::srv::RobotMove_Request::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_RobotMove_Request_q(msg_);
  }

private:
  ::duco_msg::srv::RobotMove_Request msg_;
};

class Init_RobotMove_Request_arm_num
{
public:
  explicit Init_RobotMove_Request_arm_num(::duco_msg::srv::RobotMove_Request & msg)
  : msg_(msg)
  {}
  Init_RobotMove_Request_p arm_num(::duco_msg::srv::RobotMove_Request::_arm_num_type arg)
  {
    msg_.arm_num = std::move(arg);
    return Init_RobotMove_Request_p(msg_);
  }

private:
  ::duco_msg::srv::RobotMove_Request msg_;
};

class Init_RobotMove_Request_command
{
public:
  Init_RobotMove_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMove_Request_arm_num command(::duco_msg::srv::RobotMove_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_RobotMove_Request_arm_num(msg_);
  }

private:
  ::duco_msg::srv::RobotMove_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::RobotMove_Request>()
{
  return duco_msg::srv::builder::Init_RobotMove_Request_command();
}

}  // namespace duco_msg


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_RobotMove_Response_response
{
public:
  Init_RobotMove_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::duco_msg::srv::RobotMove_Response response(::duco_msg::srv::RobotMove_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::RobotMove_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::RobotMove_Response>()
{
  return duco_msg::srv::builder::Init_RobotMove_Response_response();
}

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__ROBOT_MOVE__BUILDER_HPP_
