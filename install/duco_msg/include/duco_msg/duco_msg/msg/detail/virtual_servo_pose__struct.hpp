// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duco_msg:msg/VirtualServoPose.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__STRUCT_HPP_
#define DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__duco_msg__msg__VirtualServoPose __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__msg__VirtualServoPose __declspec(deprecated)
#endif

namespace duco_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VirtualServoPose_
{
  using Type = VirtualServoPose_<ContainerAllocator>;

  explicit VirtualServoPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_group = "";
    }
  }

  explicit VirtualServoPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    arm_group(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_group = "";
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _arm_group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _arm_group_type arm_group;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__arm_group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->arm_group = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duco_msg::msg::VirtualServoPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::msg::VirtualServoPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::msg::VirtualServoPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::msg::VirtualServoPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::msg::VirtualServoPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::msg::VirtualServoPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::msg::VirtualServoPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::msg::VirtualServoPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::msg::VirtualServoPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::msg::VirtualServoPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__msg__VirtualServoPose
    std::shared_ptr<duco_msg::msg::VirtualServoPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__msg__VirtualServoPose
    std::shared_ptr<duco_msg::msg::VirtualServoPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VirtualServoPose_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->arm_group != other.arm_group) {
      return false;
    }
    return true;
  }
  bool operator!=(const VirtualServoPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VirtualServoPose_

// alias to use template instance with default allocator
using VirtualServoPose =
  duco_msg::msg::VirtualServoPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace duco_msg

#endif  // DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POSE__STRUCT_HPP_
