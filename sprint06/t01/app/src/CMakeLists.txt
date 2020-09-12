project(t01)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)
include_directories(${CMAKE_SOURCE_DIR}/app/src/Containers)
add_subdirectory(Containers)
add_subdirectory(Player)
add_subdirectory(Interfaces)


add_library(lockpicking_src INTERFACE)
target_link_libraries(lockpicking_src INTERFACE Containers_src Player_src Interfaces_src)