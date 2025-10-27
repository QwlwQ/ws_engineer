// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duco_msg:srv/Speech.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__SPEECH__BUILDER_HPP_
#define DUCO_MSG__SRV__DETAIL__SPEECH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duco_msg/srv/detail/speech__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_Speech_Request_command
{
public:
  Init_Speech_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::duco_msg::srv::Speech_Request command(::duco_msg::srv::Speech_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::Speech_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::Speech_Request>()
{
  return duco_msg::srv::builder::Init_Speech_Request_command();
}

}  // namespace duco_msg


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_Speech_Response_response
{
public:
  Init_Speech_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::duco_msg::srv::Speech_Response response(::duco_msg::srv::Speech_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::Speech_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::Speech_Response>()
{
  return duco_msg::srv::builder::Init_Speech_Response_response();
}

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__SPEECH__BUILDER_HPP_
