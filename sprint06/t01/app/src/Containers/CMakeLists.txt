project(t01)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)
add_library(
            Containers_src
            Barrel.cpp
            Barrel.h
            Chest.cpp
			Chest.h
			Safe.cpp
			Safe.h
			LockpickDifficulty.h
			Container.cpp
			Container.h
)