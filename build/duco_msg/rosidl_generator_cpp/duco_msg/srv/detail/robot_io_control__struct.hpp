// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duco_msg:srv/RobotIoControl.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__ROBOT_IO_CONTROL__STRUCT_HPP_
#define DUCO_MSG__SRV__DETAIL__ROBOT_IO_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__duco_msg__srv__RobotIoControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__srv__RobotIoControl_Request __declspec(deprecated)
#endif

namespace duco_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotIoControl_Request_
{
  using Type = RobotIoControl_Request_<ContainerAllocator>;

  explicit RobotIoControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->arm_num = 0;
      this->type = 0;
      this->port = 0;
      this->value = false;
      this->block = false;
    }
  }

  explicit RobotIoControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->arm_num = 0;
      this->type = 0;
      this->port = 0;
      this->value = false;
      this->block = false;
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _arm_num_type =
    int8_t;
  _arm_num_type arm_num;
  using _type_type =
    int8_t;
  _type_type type;
  using _port_type =
    int8_t;
  _port_type port;
  using _value_type =
    bool;
  _value_type value;
  using _block_type =
    bool;
  _block_type block;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__arm_num(
    const int8_t & _arg)
  {
    this->arm_num = _arg;
    return *this;
  }
  Type & set__type(
    const int8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__port(
    const int8_t & _arg)
  {
    this->port = _arg;
    return *this;
  }
  Type & set__value(
    const bool & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__block(
    const bool & _arg)
  {
    this->block = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duco_msg::srv::RobotIoControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::srv::RobotIoControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::srv::RobotIoControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::srv::RobotIoControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::RobotIoControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::RobotIoControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::RobotIoControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::RobotIoControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::srv::RobotIoControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::srv::RobotIoControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__srv__RobotIoControl_Request
    std::shared_ptr<duco_msg::srv::RobotIoControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__srv__RobotIoControl_Request
    std::shared_ptr<duco_msg::srv::RobotIoControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotIoControl_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->arm_num != other.arm_num) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->port != other.port) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->block != other.block) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotIoControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotIoControl_Request_

// alias to use template instance with default allocator
using RobotIoControl_Request =
  duco_msg::srv::RobotIoControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duco_msg


#ifndef _WIN32
# define DEPRECATED__duco_msg__srv__RobotIoControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__srv__RobotIoControl_Response __declspec(deprecated)
#endif

namespace duco_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotIoControl_Response_
{
  using Type = RobotIoControl_Response_<ContainerAllocator>;

  explicit RobotIoControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit RobotIoControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    duco_msg::srv::RobotIoControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::srv::RobotIoControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::srv::RobotIoControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::srv::RobotIoControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::RobotIoControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::RobotIoControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::RobotIoControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::RobotIoControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::srv::RobotIoControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::srv::RobotIoControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__srv__RobotIoControl_Response
    std::shared_ptr<duco_msg::srv::RobotIoControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__srv__RobotIoControl_Response
    std::shared_ptr<duco_msg::srv::RobotIoControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotIoControl_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotIoControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotIoControl_Response_

// alias to use template instance with default allocator
using RobotIoControl_Response =
  duco_msg::srv::RobotIoControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duco_msg

namespace duco_msg
{

namespace srv
{

struct RobotIoControl
{
  using Request = duco_msg::srv::RobotIoControl_Request;
  using Response = duco_msg::srv::RobotIoControl_Response;
};

}  // namespace srv

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__ROBOT_IO_CONTROL__STRUCT_HPP_
