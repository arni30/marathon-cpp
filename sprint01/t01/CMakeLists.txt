cmake_minimum_required(VERSION 3.16)
project(t01)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(t01
        src/CMakeLists.txt
        src/moveAlong.cpp
        src/moveAlong.h
        CMakeLists.txt
        main.cpp)
