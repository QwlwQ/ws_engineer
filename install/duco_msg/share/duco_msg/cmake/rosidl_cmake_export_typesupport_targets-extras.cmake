# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:duco_msg__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:duco_msg__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:duco_msg__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:duco_msg__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:duco_msg__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:duco_msg__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:duco_msg__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:duco_msg__rosidl_typesupport_cpp;__rosidl_generator_py:duco_msg__rosidl_generator_py")

# populate duco_msg_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "duco_msg::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'duco_msg' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND duco_msg_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
