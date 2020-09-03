project(t01)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(
        -std=c++17
        -Werror
        -Wall
        -Wextra
        -Wpedantic
)

add_executable(printDialog printDialog.cpp printDialog.h)
set_target_properties(printDialog PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")