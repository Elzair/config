if(APPLE)
  cmake_minimum_required(VERSION 2.8.11 FATAL_ERROR)
else()
  cmake_minimum_required(VERSION 2.8.7 FATAL_ERROR)
endif()

add_library(boost_config INTERFACE GLOBAL)

target_include_directories(boost_config BEFORE PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
