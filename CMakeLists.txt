if(APPLE)
  cmake_minimum_required(VERSION 2.8.11 FATAL_ERROR)
else()
  cmake_minimum_required(VERSION 2.8.7 FATAL_ERROR)
endif()

set(BOOST_CONFIG_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/include" CACHE STRING "Location of boost.config headers")

if(NOT BOOST_INCLUDE_DIRS)
  set(BOOST_INCLUDE_DIRS "${BOOST_CONFIG_INCLUDE_DIRS}" CACHE STRING "All Boost headers")
else()
  set(BOOST_INCLUDE_DIRS "${BOOST_INCLUDE_DIRS}" "${BOOST_CONFIG_INCLUDE_DIRS}" CACHE STRING "All Boost headers" FORCE)
endif(NOT BOOST_INCLUDE_DIRS)

