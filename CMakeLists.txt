cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(CMake)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
message(STATUS "CMAKE_RUNTIME_OUTPUT_DIRECTORY = ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")

set(CMAKE_CXX_STANDARD 20)
# 保证如果编译器不支持会报错而不是回退。
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# 用来关闭 GNU 扩展（例如把 -std=gnu++17 改为 -std=c++17）。
set(CMAKE_CXX_EXTENSIONS OFF)

message(STATUS "CMAKE_CXX_STANDARD = ${CMAKE_CXX_STANDARD}")
message(STATUS "CMAKE_CXX_EXTENSIONS = ${CMAKE_CXX_EXTENSIONS}")

# add_subdirectory(ch01)
# add_subdirectory(ch02)
# add_subdirectory(ch07)
add_subdirectory(ch08)

