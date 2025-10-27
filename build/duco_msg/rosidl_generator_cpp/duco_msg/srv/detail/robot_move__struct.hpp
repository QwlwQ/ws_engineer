// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duco_msg:srv/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__ROBOT_MOVE__STRUCT_HPP_
#define DUCO_MSG__SRV__DETAIL__ROBOT_MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__duco_msg__srv__RobotMove_Request __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__srv__RobotMove_Request __declspec(deprecated)
#endif

namespace duco_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotMove_Request_
{
  using Type = RobotMove_Request_<ContainerAllocator>;

  explicit RobotMove_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->arm_num = 0;
      this->v = 0.0f;
      this->a = 0.0f;
      this->r = 0.0f;
      this->tool = "";
      this->wobj = "";
      this->block = false;
    }
  }

  explicit RobotMove_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    tool(_alloc),
    wobj(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->arm_num = 0;
      this->v = 0.0f;
      this->a = 0.0f;
      this->r = 0.0f;
      this->tool = "";
      this->wobj = "";
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
  using _p_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _p_type p;
  using _q_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _q_type q;
  using _v_type =
    float;
  _v_type v;
  using _a_type =
    float;
  _a_type a;
  using _r_type =
    float;
  _r_type r;
  using _tool_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tool_type tool;
  using _wobj_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _wobj_type wobj;
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
  Type & set__p(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->p = _arg;
    return *this;
  }
  Type & set__q(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__v(
    const float & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__a(
    const float & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__r(
    const float & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__tool(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tool = _arg;
    return *this;
  }
  Type & set__wobj(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->wobj = _arg;
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
    duco_msg::srv::RobotMove_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::srv::RobotMove_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::srv::RobotMove_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::srv::RobotMove_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::RobotMove_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::RobotMove_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::RobotMove_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::RobotMove_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::srv::RobotMove_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::srv::RobotMove_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__srv__RobotMove_Request
    std::shared_ptr<duco_msg::srv::RobotMove_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__srv__RobotMove_Request
    std::shared_ptr<duco_msg::srv::RobotMove_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->arm_num != other.arm_num) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->tool != other.tool) {
      return false;
    }
    if (this->wobj != other.wobj) {
      return false;
    }
    if (this->block != other.block) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_Request_

// alias to use template instance with default allocator
using RobotMove_Request =
  duco_msg::srv::RobotMove_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duco_msg


#ifndef _WIN32
# define DEPRECATED__duco_msg__srv__RobotMove_Response __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__srv__RobotMove_Response __declspec(deprecated)
#endif

namespace duco_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotMove_Response_
{
  using Type = RobotMove_Response_<ContainerAllocator>;

  explicit RobotMove_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit RobotMove_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    duco_msg::srv::RobotMove_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::srv::RobotMove_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::srv::RobotMove_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::srv::RobotMove_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::RobotMove_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::RobotMove_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::RobotMove_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::RobotMove_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::srv::RobotMove_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::srv::RobotMove_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__srv__RobotMove_Response
    std::shared_ptr<duco_msg::srv::RobotMove_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__srv__RobotMove_Response
    std::shared_ptr<duco_msg::srv::RobotMove_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_Response_

// alias to use template instance with default allocator
using RobotMove_Response =
  duco_msg::srv::RobotMove_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duco_msg

namespace duco_msg
{

namespace srv
{

struct RobotMove
{
  using Request = duco_msg::srv::RobotMove_Request;
  using Response = duco_msg::srv::RobotMove_Response;
};

}  // namespace srv

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__ROBOT_MOVE__STRUCT_HPP_
