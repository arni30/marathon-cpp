project(t00)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_library(utils INTERFACE)
target_sources(utils INTERFACE algorithmUtils.h)