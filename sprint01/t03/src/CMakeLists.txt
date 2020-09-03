cmake_minimum_required(VERSION 3.16.3)
project(t03)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(
        -std=c++17
        -Werror
        -Wall
        -Wextra
        -Wpedantic
)

add_library(vampireRabbits_lib
            vampireRabbits.cpp
            main_cycle.cpp
            vampireRabbits.h
            )