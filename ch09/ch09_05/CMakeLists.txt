cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(ch09_05)

add_executable(ch09_05 main.cpp)

target_include_directories(ch09_05 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/)