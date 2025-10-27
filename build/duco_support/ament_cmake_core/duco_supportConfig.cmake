# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_duco_support_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED duco_support_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(duco_support_FOUND FALSE)
  elseif(NOT duco_support_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(duco_support_FOUND FALSE)
  endif()
  return()
endif()
set(_duco_support_CONFIG_INCLUDED TRUE)

# output package information
if(NOT duco_support_FIND_QUIETLY)
  message(STATUS "Found duco_support: 2.0.7 (${duco_support_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'duco_support' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${duco_support_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(duco_support_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${duco_support_DIR}/${_extra}")
endforeach()
