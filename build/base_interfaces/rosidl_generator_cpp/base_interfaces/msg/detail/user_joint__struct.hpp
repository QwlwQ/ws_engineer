// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces:msg/UserJoint.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES__MSG__DETAIL__USER_JOINT__STRUCT_HPP_
#define BASE_INTERFACES__MSG__DETAIL__USER_JOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__base_interfaces__msg__UserJoint __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces__msg__UserJoint __declspec(deprecated)
#endif

namespace base_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UserJoint_
{
  using Type = UserJoint_<ContainerAllocator>;

  explicit UserJoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint0 = 0.0;
      this->joint1 = 0.0;
      this->joint2 = 0.0;
      this->joint3 = 0.0;
      this->joint4 = 0.0;
      this->joint5 = 0.0;
    }
  }

  explicit UserJoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint0 = 0.0;
      this->joint1 = 0.0;
      this->joint2 = 0.0;
      this->joint3 = 0.0;
      this->joint4 = 0.0;
      this->joint5 = 0.0;
    }
  }

  // field types and members
  using _joint0_type =
    double;
  _joint0_type joint0;
  using _joint1_type =
    double;
  _joint1_type joint1;
  using _joint2_type =
    double;
  _joint2_type joint2;
  using _joint3_type =
    double;
  _joint3_type joint3;
  using _joint4_type =
    double;
  _joint4_type joint4;
  using _joint5_type =
    double;
  _joint5_type joint5;

  // setters for named parameter idiom
  Type & set__joint0(
    const double & _arg)
  {
    this->joint0 = _arg;
    return *this;
  }
  Type & set__joint1(
    const double & _arg)
  {
    this->joint1 = _arg;
    return *this;
  }
  Type & set__joint2(
    const double & _arg)
  {
    this->joint2 = _arg;
    return *this;
  }
  Type & set__joint3(
    const double & _arg)
  {
    this->joint3 = _arg;
    return *this;
  }
  Type & set__joint4(
    const double & _arg)
  {
    this->joint4 = _arg;
    return *this;
  }
  Type & set__joint5(
    const double & _arg)
  {
    this->joint5 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces::msg::UserJoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces::msg::UserJoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces::msg::UserJoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces::msg::UserJoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces::msg::UserJoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::msg::UserJoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces::msg::UserJoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::msg::UserJoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces::msg::UserJoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces::msg::UserJoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces__msg__UserJoint
    std::shared_ptr<base_interfaces::msg::UserJoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces__msg__UserJoint
    std::shared_ptr<base_interfaces::msg::UserJoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserJoint_ & other) const
  {
    if (this->joint0 != other.joint0) {
      return false;
    }
    if (this->joint1 != other.joint1) {
      return false;
    }
    if (this->joint2 != other.joint2) {
      return false;
    }
    if (this->joint3 != other.joint3) {
      return false;
    }
    if (this->joint4 != other.joint4) {
      return false;
    }
    if (this->joint5 != other.joint5) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserJoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserJoint_

// alias to use template instance with default allocator
using UserJoint =
  base_interfaces::msg::UserJoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__MSG__DETAIL__USER_JOINT__STRUCT_HPP_
