project(imperialVsStormcloak)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_library(imperialVsStormcloak_src Soldier.h Soldier.cpp Weapon.cpp Weapon.h StormcloakSoldier.cpp StormcloakSoldier.h ImperialSoldier.cpp ImperialSoldier.h Sword.cpp Sword.h Axe.cpp Axe.h)