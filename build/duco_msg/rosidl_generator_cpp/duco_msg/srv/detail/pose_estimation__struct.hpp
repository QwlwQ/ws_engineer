// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duco_msg:srv/PoseEstimation.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__POSE_ESTIMATION__STRUCT_HPP_
#define DUCO_MSG__SRV__DETAIL__POSE_ESTIMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__duco_msg__srv__PoseEstimation_Request __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__srv__PoseEstimation_Request __declspec(deprecated)
#endif

namespace duco_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PoseEstimation_Request_
{
  using Type = PoseEstimation_Request_<ContainerAllocator>;

  explicit PoseEstimation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit PoseEstimation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duco_msg::srv::PoseEstimation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::srv::PoseEstimation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::srv::PoseEstimation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::srv::PoseEstimation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::PoseEstimation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::PoseEstimation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::PoseEstimation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::PoseEstimation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::srv::PoseEstimation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::srv::PoseEstimation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__srv__PoseEstimation_Request
    std::shared_ptr<duco_msg::srv::PoseEstimation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__srv__PoseEstimation_Request
    std::shared_ptr<duco_msg::srv::PoseEstimation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseEstimation_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseEstimation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseEstimation_Request_

// alias to use template instance with default allocator
using PoseEstimation_Request =
  duco_msg::srv::PoseEstimation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duco_msg


// Include directives for member types
// Member 'pose_all'
// Member 'pose_pick'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__duco_msg__srv__PoseEstimation_Response __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__srv__PoseEstimation_Response __declspec(deprecated)
#endif

namespace duco_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PoseEstimation_Response_
{
  using Type = PoseEstimation_Response_<ContainerAllocator>;

  explicit PoseEstimation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
      this->server_id = 0l;
    }
  }

  explicit PoseEstimation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
      this->server_id = 0l;
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;
  using _pose_all_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _pose_all_type pose_all;
  using _pose_pick_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _pose_pick_type pose_pick;
  using _center_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _center_type center;
  using _size_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _size_type size;
  using _server_id_type =
    int32_t;
  _server_id_type server_id;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }
  Type & set__pose_all(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->pose_all = _arg;
    return *this;
  }
  Type & set__pose_pick(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->pose_pick = _arg;
    return *this;
  }
  Type & set__center(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__size(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__server_id(
    const int32_t & _arg)
  {
    this->server_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duco_msg::srv::PoseEstimation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::srv::PoseEstimation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::srv::PoseEstimation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::srv::PoseEstimation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::PoseEstimation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::PoseEstimation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::PoseEstimation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::PoseEstimation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::srv::PoseEstimation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::srv::PoseEstimation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__srv__PoseEstimation_Response
    std::shared_ptr<duco_msg::srv::PoseEstimation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__srv__PoseEstimation_Response
    std::shared_ptr<duco_msg::srv::PoseEstimation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseEstimation_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    if (this->pose_all != other.pose_all) {
      return false;
    }
    if (this->pose_pick != other.pose_pick) {
      return false;
    }
    if (this->center != other.center) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->server_id != other.server_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseEstimation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseEstimation_Response_

// alias to use template instance with default allocator
using PoseEstimation_Response =
  duco_msg::srv::PoseEstimation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duco_msg

namespace duco_msg
{

namespace srv
{

struct PoseEstimation
{
  using Request = duco_msg::srv::PoseEstimation_Request;
  using Response = duco_msg::srv::PoseEstimation_Response;
};

}  // namespace srv

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__POSE_ESTIMATION__STRUCT_HPP_
