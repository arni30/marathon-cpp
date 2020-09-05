cmake_minimum_required(VERSION 3.16.3)
project(t04)

set(CMAKE_CXX_STANDARD 17)

add_executable(isPalindrome main.cpp isPalindrome.h)
set_target_properties(isPalindrome PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")

