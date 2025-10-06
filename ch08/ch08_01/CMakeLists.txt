cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(ch08_01)

add_executable(ch08_01 main.cpp Person.cpp)

target_include_directories(ch08_01 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/)