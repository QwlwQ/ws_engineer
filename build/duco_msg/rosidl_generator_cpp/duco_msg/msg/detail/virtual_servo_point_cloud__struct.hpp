// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duco_msg:msg/VirtualServoPointCloud.idl
// generated code does not contain a copyright notice

#ifndef DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POINT_CLOUD__STRUCT_HPP_
#define DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POINT_CLOUD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__duco_msg__msg__VirtualServoPointCloud __attribute__((deprecated))
#else
# define DEPRECATED__duco_msg__msg__VirtualServoPointCloud __declspec(deprecated)
#endif

namespace duco_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VirtualServoPointCloud_
{
  using Type = VirtualServoPointCloud_<ContainerAllocator>;

  explicit VirtualServoPointCloud_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init),
    point_cloud(_init)
  {
    (void)_init;
  }

  explicit VirtualServoPointCloud_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init),
    point_cloud(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _point_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _point_cloud_type point_cloud;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__point_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->point_cloud = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duco_msg::msg::VirtualServoPointCloud_<ContainerAllocator> *;
  using ConstRawPtr =
    const duco_msg::msg::VirtualServoPointCloud_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duco_msg::msg::VirtualServoPointCloud_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duco_msg::msg::VirtualServoPointCloud_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duco_msg::msg::VirtualServoPointCloud_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duco_msg::msg::VirtualServoPointCloud_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duco_msg::msg::VirtualServoPointCloud_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duco_msg::msg::VirtualServoPointCloud_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duco_msg::msg::VirtualServoPointCloud_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duco_msg::msg::VirtualServoPointCloud_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duco_msg__msg__VirtualServoPointCloud
    std::shared_ptr<duco_msg::msg::VirtualServoPointCloud_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duco_msg__msg__VirtualServoPointCloud
    std::shared_ptr<duco_msg::msg::VirtualServoPointCloud_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VirtualServoPointCloud_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    if (this->point_cloud != other.point_cloud) {
      return false;
    }
    return true;
  }
  bool operator!=(const VirtualServoPointCloud_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VirtualServoPointCloud_

// alias to use template instance with default allocator
using VirtualServoPointCloud =
  duco_msg::msg::VirtualServoPointCloud_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace duco_msg

#endif  // DUCO_MSG__MSG__DETAIL__VIRTUAL_SERVO_POINT_CLOUD__STRUCT_HPP_
