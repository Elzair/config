cmake_minimum_required(VERSION 3.3)

project(boost_config)

add_library(boost_config INTERFACE)

target_include_directories(boost_config BEFORE INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

install(TARGETS boost_config DESTINATION lib)
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/boost DESTINATION include)

add_library(boost::config ALIAS boost_config)
