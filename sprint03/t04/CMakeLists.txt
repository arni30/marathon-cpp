cmake_minimum_required(VERSION 3.16.3)
project(t04)

set(CMAKE_CXX_STANDARD 17)

add_executable(outputContainer main.cpp outputContainer.h)
set_target_properties(outputContainer PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")

