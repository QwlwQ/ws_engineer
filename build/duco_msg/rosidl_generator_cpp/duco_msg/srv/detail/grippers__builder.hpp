// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duco_msg:srv/Grippers.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__GRIPPERS__BUILDER_HPP_
#define DUCO_MSG__SRV__DETAIL__GRIPPERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duco_msg/srv/detail/grippers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_Grippers_Request_force
{
public:
  explicit Init_Grippers_Request_force(::duco_msg::srv::Grippers_Request & msg)
  : msg_(msg)
  {}
  ::duco_msg::srv::Grippers_Request force(::duco_msg::srv::Grippers_Request::_force_type arg)
  {
    msg_.force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::Grippers_Request msg_;
};

class Init_Grippers_Request_pose
{
public:
  explicit Init_Grippers_Request_pose(::duco_msg::srv::Grippers_Request & msg)
  : msg_(msg)
  {}
  Init_Grippers_Request_force pose(::duco_msg::srv::Grippers_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Grippers_Request_force(msg_);
  }

private:
  ::duco_msg::srv::Grippers_Request msg_;
};

class Init_Grippers_Request_name
{
public:
  explicit Init_Grippers_Request_name(::duco_msg::srv::Grippers_Request & msg)
  : msg_(msg)
  {}
  Init_Grippers_Request_pose name(::duco_msg::srv::Grippers_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Grippers_Request_pose(msg_);
  }

private:
  ::duco_msg::srv::Grippers_Request msg_;
};

class Init_Grippers_Request_command
{
public:
  Init_Grippers_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Grippers_Request_name command(::duco_msg::srv::Grippers_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_Grippers_Request_name(msg_);
  }

private:
  ::duco_msg::srv::Grippers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::Grippers_Request>()
{
  return duco_msg::srv::builder::Init_Grippers_Request_command();
}

}  // namespace duco_msg


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_Grippers_Response_response
{
public:
  Init_Grippers_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::duco_msg::srv::Grippers_Response response(::duco_msg::srv::Grippers_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::Grippers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::Grippers_Response>()
{
  return duco_msg::srv::builder::Init_Grippers_Response_response();
}

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__GRIPPERS__BUILDER_HPP_
