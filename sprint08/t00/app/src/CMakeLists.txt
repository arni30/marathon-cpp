project(smartPointers)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -Werror -Wpedantic)

add_library(smartPointers_src INTERFACE)
target_sources(smartPointers_src INTERFACE Map.h MoveManager.h Player.h
        Map.cpp Player.cpp MoveManager.cpp)