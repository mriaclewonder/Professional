cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(Purevirtual)

add_executable(Purevirtual 
    Animal.h
    Cat.cpp
    Cat.h
    test.cpp
)

target_include_directories(Purevirtual PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/)