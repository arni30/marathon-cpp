cmake_minimum_required(VERSION 3.16.3)
project(t02)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(
        -std=c++17
        -Werror
        -Wall
        -Wextra
        -Wpedantic
)

add_library(visitAll_lib
            visitAll.cpp
            visitAll.h
            )