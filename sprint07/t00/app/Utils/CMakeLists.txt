project(t00)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -Werror -Wpedantic)

add_library(Utils_src INTERFACE)
target_sources(Utils_src INTERFACE algorithmUtils.h)