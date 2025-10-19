cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(ch09_02)

add_executable(ch09_02 main.cpp Person.cpp)

target_include_directories(ch09_02 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/)