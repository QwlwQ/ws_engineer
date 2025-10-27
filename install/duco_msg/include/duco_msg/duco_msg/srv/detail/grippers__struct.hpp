// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duco_msg:srv/Grippers.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__GRIPPERS__STRUCT_HPP_
#define DUCO_MSG__SRV__DETAIL__GRIPPERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__duco_msg__srv__Grippers_Request __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__srv__Grippers_Request __declspec(deprecated)
#endif

namespace duco_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Grippers_Request_
{
  using Type = Grippers_Request_<ContainerAllocator>;

  explicit Grippers_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->name = "";
      this->pose = 0.0f;
      this->force = 0.0f;
    }
  }

  explicit Grippers_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->name = "";
      this->pose = 0.0f;
      this->force = 0.0f;
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _pose_type =
    float;
  _pose_type pose;
  using _force_type =
    float;
  _force_type force;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__pose(
    const float & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__force(
    const float & _arg)
  {
    this->force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duco_msg::srv::Grippers_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::srv::Grippers_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::srv::Grippers_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::srv::Grippers_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::Grippers_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::Grippers_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::Grippers_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::Grippers_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::srv::Grippers_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::srv::Grippers_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__srv__Grippers_Request
    std::shared_ptr<duco_msg::srv::Grippers_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__srv__Grippers_Request
    std::shared_ptr<duco_msg::srv::Grippers_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Grippers_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    return true;
  }
  bool operator!=(const Grippers_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Grippers_Request_

// alias to use template instance with default allocator
using Grippers_Request =
  duco_msg::srv::Grippers_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duco_msg


#ifndef _WIN32
# define DEPRECATED__duco_msg__srv__Grippers_Response __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__srv__Grippers_Response __declspec(deprecated)
#endif

namespace duco_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Grippers_Response_
{
  using Type = Grippers_Response_<ContainerAllocator>;

  explicit Grippers_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit Grippers_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    duco_msg::srv::Grippers_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::srv::Grippers_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::srv::Grippers_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::srv::Grippers_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::Grippers_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::Grippers_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::Grippers_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::Grippers_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::srv::Grippers_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::srv::Grippers_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__srv__Grippers_Response
    std::shared_ptr<duco_msg::srv::Grippers_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__srv__Grippers_Response
    std::shared_ptr<duco_msg::srv::Grippers_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Grippers_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Grippers_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Grippers_Response_

// alias to use template instance with default allocator
using Grippers_Response =
  duco_msg::srv::Grippers_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duco_msg

namespace duco_msg
{

namespace srv
{

struct Grippers
{
  using Request = duco_msg::srv::Grippers_Request;
  using Response = duco_msg::srv::Grippers_Response;
};

}  // namespace srv

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__GRIPPERS__STRUCT_HPP_
