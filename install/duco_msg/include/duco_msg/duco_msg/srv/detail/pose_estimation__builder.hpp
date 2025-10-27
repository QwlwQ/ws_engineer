// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duco_msg:srv/PoseEstimation.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__POSE_ESTIMATION__BUILDER_HPP_
#define DUCO_MSG__SRV__DETAIL__POSE_ESTIMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duco_msg/srv/detail/pose_estimation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_PoseEstimation_Request_command
{
public:
  Init_PoseEstimation_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::duco_msg::srv::PoseEstimation_Request command(::duco_msg::srv::PoseEstimation_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::PoseEstimation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::PoseEstimation_Request>()
{
  return duco_msg::srv::builder::Init_PoseEstimation_Request_command();
}

}  // namespace duco_msg


namespace duco_msg
{

namespace srv
{

namespace builder
{

class Init_PoseEstimation_Response_server_id
{
public:
  explicit Init_PoseEstimation_Response_server_id(::duco_msg::srv::PoseEstimation_Response & msg)
  : msg_(msg)
  {}
  ::duco_msg::srv::PoseEstimation_Response server_id(::duco_msg::srv::PoseEstimation_Response::_server_id_type arg)
  {
    msg_.server_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duco_msg::srv::PoseEstimation_Response msg_;
};

class Init_PoseEstimation_Response_size
{
public:
  explicit Init_PoseEstimation_Response_size(::duco_msg::srv::PoseEstimation_Response & msg)
  : msg_(msg)
  {}
  Init_PoseEstimation_Response_server_id size(::duco_msg::srv::PoseEstimation_Response::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_PoseEstimation_Response_server_id(msg_);
  }

private:
  ::duco_msg::srv::PoseEstimation_Response msg_;
};

class Init_PoseEstimation_Response_center
{
public:
  explicit Init_PoseEstimation_Response_center(::duco_msg::srv::PoseEstimation_Response & msg)
  : msg_(msg)
  {}
  Init_PoseEstimation_Response_size center(::duco_msg::srv::PoseEstimation_Response::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_PoseEstimation_Response_size(msg_);
  }

private:
  ::duco_msg::srv::PoseEstimation_Response msg_;
};

class Init_PoseEstimation_Response_pose_pick
{
public:
  explicit Init_PoseEstimation_Response_pose_pick(::duco_msg::srv::PoseEstimation_Response & msg)
  : msg_(msg)
  {}
  Init_PoseEstimation_Response_center pose_pick(::duco_msg::srv::PoseEstimation_Response::_pose_pick_type arg)
  {
    msg_.pose_pick = std::move(arg);
    return Init_PoseEstimation_Response_center(msg_);
  }

private:
  ::duco_msg::srv::PoseEstimation_Response msg_;
};

class Init_PoseEstimation_Response_pose_all
{
public:
  explicit Init_PoseEstimation_Response_pose_all(::duco_msg::srv::PoseEstimation_Response & msg)
  : msg_(msg)
  {}
  Init_PoseEstimation_Response_pose_pick pose_all(::duco_msg::srv::PoseEstimation_Response::_pose_all_type arg)
  {
    msg_.pose_all = std::move(arg);
    return Init_PoseEstimation_Response_pose_pick(msg_);
  }

private:
  ::duco_msg::srv::PoseEstimation_Response msg_;
};

class Init_PoseEstimation_Response_response
{
public:
  Init_PoseEstimation_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseEstimation_Response_pose_all response(::duco_msg::srv::PoseEstimation_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_PoseEstimation_Response_pose_all(msg_);
  }

private:
  ::duco_msg::srv::PoseEstimation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::duco_msg::srv::PoseEstimation_Response>()
{
  return duco_msg::srv::builder::Init_PoseEstimation_Response_response();
}

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__POSE_ESTIMATION__BUILDER_HPP_
