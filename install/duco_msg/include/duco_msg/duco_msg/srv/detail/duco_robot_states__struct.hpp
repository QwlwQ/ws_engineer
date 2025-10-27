// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duco_msg:srv/DucoRobotStates.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__SRV__DETAIL__DUCO_ROBOT_STATES__STRUCT_HPP_
#define DUCO_MSG__SRV__DETAIL__DUCO_ROBOT_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__duco_msg__srv__DucoRobotStates_Request __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__srv__DucoRobotStates_Request __declspec(deprecated)
#endif

namespace duco_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DucoRobotStates_Request_
{
  using Type = DucoRobotStates_Request_<ContainerAllocator>;

  explicit DucoRobotStates_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit DucoRobotStates_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    duco_msg::srv::DucoRobotStates_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::srv::DucoRobotStates_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::srv::DucoRobotStates_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::srv::DucoRobotStates_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::DucoRobotStates_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::DucoRobotStates_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::DucoRobotStates_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::DucoRobotStates_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::srv::DucoRobotStates_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::srv::DucoRobotStates_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__srv__DucoRobotStates_Request
    std::shared_ptr<duco_msg::srv::DucoRobotStates_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__srv__DucoRobotStates_Request
    std::shared_ptr<duco_msg::srv::DucoRobotStates_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DucoRobotStates_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const DucoRobotStates_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DucoRobotStates_Request_

// alias to use template instance with default allocator
using DucoRobotStates_Request =
  duco_msg::srv::DucoRobotStates_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duco_msg


// Include directives for member types
// Member 'robot_states'
#include "duco_msg/msg/detail/duco_robot_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__duco_msg__srv__DucoRobotStates_Response __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__srv__DucoRobotStates_Response __declspec(deprecated)
#endif

namespace duco_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DucoRobotStates_Response_
{
  using Type = DucoRobotStates_Response_<ContainerAllocator>;

  explicit DucoRobotStates_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_states(_init)
  {
    (void)_init;
  }

  explicit DucoRobotStates_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_states(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _robot_states_type =
    duco_msg::msg::DucoRobotState_<ContainerAllocator>;
  _robot_states_type robot_states;

  // setters for named parameter idiom
  Type & set__robot_states(
    const duco_msg::msg::DucoRobotState_<ContainerAllocator> & _arg)
  {
    this->robot_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duco_msg::srv::DucoRobotStates_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::srv::DucoRobotStates_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::srv::DucoRobotStates_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::srv::DucoRobotStates_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::DucoRobotStates_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::DucoRobotStates_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::srv::DucoRobotStates_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::srv::DucoRobotStates_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::srv::DucoRobotStates_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::srv::DucoRobotStates_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__srv__DucoRobotStates_Response
    std::shared_ptr<duco_msg::srv::DucoRobotStates_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__srv__DucoRobotStates_Response
    std::shared_ptr<duco_msg::srv::DucoRobotStates_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DucoRobotStates_Response_ & other) const
  {
    if (this->robot_states != other.robot_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const DucoRobotStates_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DucoRobotStates_Response_

// alias to use template instance with default allocator
using DucoRobotStates_Response =
  duco_msg::srv::DucoRobotStates_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace duco_msg

namespace duco_msg
{

namespace srv
{

struct DucoRobotStates
{
  using Request = duco_msg::srv::DucoRobotStates_Request;
  using Response = duco_msg::srv::DucoRobotStates_Response;
};

}  // namespace srv

}  // namespace duco_msg

#endif  // DUCO_MSG__SRV__DETAIL__DUCO_ROBOT_STATES__STRUCT_HPP_
