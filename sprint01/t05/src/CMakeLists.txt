cmake_minimum_required(VERSION 3.16.3)
project(t05)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(
        -std=c++17
        -Werror
        -Wall
        -Wextra
        -Wpedantic
)

add_library(stdAlgoV2_lib
            stdAlgoV2.cpp
            stdAlgoV2.h
            )