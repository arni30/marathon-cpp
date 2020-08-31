cmake_minimum_required(VERSION 3.16.3)
project(t02)

set(CMAKE_CXX_STANDARD 17)

add_executable(walletManager main.cpp walletManager.cpp walletManager.h)
add_executable(main main.cpp)