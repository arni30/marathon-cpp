cmake_minimum_required(VERSION 3.16.3)
project(t07)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_executable(inventory main.cpp)
target_link_libraries(inventory src)
set_target_properties(inventory PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")

