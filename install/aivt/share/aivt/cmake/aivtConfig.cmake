# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_aivt_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED aivt_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(aivt_FOUND FALSE)
  elseif(NOT aivt_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(aivt_FOUND FALSE)
  endif()
  return()
endif()
set(_aivt_CONFIG_INCLUDED TRUE)

# output package information
if(NOT aivt_FIND_QUIETLY)
  message(STATUS "Found aivt: 0.0.0 (${aivt_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'aivt' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${aivt_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(aivt_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${aivt_DIR}/${_extra}")
endforeach()
