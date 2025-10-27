// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duco_msg:srv/RobotTaskStateRquest.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__ROBOT_TASK_STATE_RQUEST__STRUCT_HPP_
#define DUCO_MSG__SRV__DETAIL__ROBOT_TASK_STATE_RQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__duco_msg__srv__RobotTaskStateRquest_Request __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__srv__RobotTaskStateRquest_Request __declspec(deprecated)
#endif

namespace duco_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotTaskStateRquest_Request_
{
  using Type = RobotTaskStateRquest_Request_<ContainerAllocator>;

  explicit RobotTaskStateRquest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->arm_num = 0;
    }
  }

  explicit RobotTaskStateRquest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->arm_num = 0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _arm_num_type =
    int8_t;
  _arm_num_type arm_num;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__arm_num(
    const int8_t & _arg)
  {
    this->arm_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duco_msg::srv::RobotTaskStateRquest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::srv::RobotTaskStateRquest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::srv::RobotTaskStateRquest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::srv::RobotTaskStateRquest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::RobotTaskStateRquest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::RobotTaskStateRquest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::RobotTaskStateRquest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::RobotTaskStateRquest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::srv::RobotTaskStateRquest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::srv::RobotTaskStateRquest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__srv__RobotTaskStateRquest_Request
    std::shared_ptr<duco_msg::srv::RobotTaskStateRquest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__srv__RobotTaskStateRquest_Request
    std::shared_ptr<duco_msg::srv::RobotTaskStateRquest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotTaskStateRquest_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->arm_num != other.arm_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotTaskStateRquest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotTaskStateRquest_Request_

// alias to use template instance with default allocator
using RobotTaskStateRquest_Request =
  duco_msg::srv::RobotTaskStateRquest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duco_msg


#ifndef _WIN32
# define DEPRECATED__duco_msg__srv__RobotTaskStateRquest_Response __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__srv__RobotTaskStateRquest_Response __declspec(deprecated)
#endif

namespace duco_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotTaskStateRquest_Response_
{
  using Type = RobotTaskStateRquest_Response_<ContainerAllocator>;

  explicit RobotTaskStateRquest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit RobotTaskStateRquest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duco_msg::srv::RobotTaskStateRquest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::srv::RobotTaskStateRquest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::srv::RobotTaskStateRquest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::srv::RobotTaskStateRquest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::RobotTaskStateRquest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::RobotTaskStateRquest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::RobotTaskStateRquest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::RobotTaskStateRquest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::srv::RobotTaskStateRquest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::srv::RobotTaskStateRquest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__srv__RobotTaskStateRquest_Response
    std::shared_ptr<duco_msg::srv::RobotTaskStateRquest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__srv__RobotTaskStateRquest_Response
    std::shared_ptr<duco_msg::srv::RobotTaskStateRquest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotTaskStateRquest_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotTaskStateRquest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotTaskStateRquest_Response_

// alias to use template instance with default allocator
using RobotTaskStateRquest_Response =
  duco_msg::srv::RobotTaskStateRquest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duco_msg

namespace duco_msg
{

namespace srv
{

struct RobotTaskStateRquest
{
  using Request = duco_msg::srv::RobotTaskStateRquest_Request;
  using Response = duco_msg::srv::RobotTaskStateRquest_Response;
};

}  // namespace srv

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__ROBOT_TASK_STATE_RQUEST__STRUCT_HPP_
