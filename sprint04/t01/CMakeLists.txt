project(imperialVsStormcloak)
cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(app)
set_target_properties(imperialVsStormcloak PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../../")
