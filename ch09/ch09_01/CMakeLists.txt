cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(ch09_01)

add_executable(ch09_01 main.cpp Person.cpp)

target_include_directories(ch09_01 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/)