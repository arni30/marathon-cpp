cmake_minimum_required(VERSION 3.16.3)
project(t07)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(inventory
        src/inventory.cpp
        src/inventory.h
        main.cpp)


add_executable(inventory src/inventory.cpp)