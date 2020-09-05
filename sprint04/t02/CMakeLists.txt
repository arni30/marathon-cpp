project(dragonborn)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(app)

#target_link_libraries(dragonborn PUBLIC imperialVsStormcloak_lib)
set_target_properties(dragonborn PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../../")
