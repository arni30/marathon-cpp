# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Users/oarnopolin/.brew/Cellar/cmake/3.18.2/bin/cmake

# The command to remove a file.
RM = /Users/oarnopolin/.brew/Cellar/cmake/3.18.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build

# Include any dependencies generated for this target.
include src/CMakeFiles/stdAlgoV1_lib.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/stdAlgoV1_lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/stdAlgoV1_lib.dir/flags.make

src/CMakeFiles/stdAlgoV1_lib.dir/stdAlgoV1.cpp.o: src/CMakeFiles/stdAlgoV1_lib.dir/flags.make
src/CMakeFiles/stdAlgoV1_lib.dir/stdAlgoV1.cpp.o: ../src/stdAlgoV1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/stdAlgoV1_lib.dir/stdAlgoV1.cpp.o"
	cd /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stdAlgoV1_lib.dir/stdAlgoV1.cpp.o -c /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/src/stdAlgoV1.cpp

src/CMakeFiles/stdAlgoV1_lib.dir/stdAlgoV1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stdAlgoV1_lib.dir/stdAlgoV1.cpp.i"
	cd /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/src/stdAlgoV1.cpp > CMakeFiles/stdAlgoV1_lib.dir/stdAlgoV1.cpp.i

src/CMakeFiles/stdAlgoV1_lib.dir/stdAlgoV1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stdAlgoV1_lib.dir/stdAlgoV1.cpp.s"
	cd /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/src/stdAlgoV1.cpp -o CMakeFiles/stdAlgoV1_lib.dir/stdAlgoV1.cpp.s

# Object files for target stdAlgoV1_lib
stdAlgoV1_lib_OBJECTS = \
"CMakeFiles/stdAlgoV1_lib.dir/stdAlgoV1.cpp.o"

# External object files for target stdAlgoV1_lib
stdAlgoV1_lib_EXTERNAL_OBJECTS =

src/libstdAlgoV1_lib.a: src/CMakeFiles/stdAlgoV1_lib.dir/stdAlgoV1.cpp.o
src/libstdAlgoV1_lib.a: src/CMakeFiles/stdAlgoV1_lib.dir/build.make
src/libstdAlgoV1_lib.a: src/CMakeFiles/stdAlgoV1_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libstdAlgoV1_lib.a"
	cd /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build/src && $(CMAKE_COMMAND) -P CMakeFiles/stdAlgoV1_lib.dir/cmake_clean_target.cmake
	cd /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stdAlgoV1_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/stdAlgoV1_lib.dir/build: src/libstdAlgoV1_lib.a

.PHONY : src/CMakeFiles/stdAlgoV1_lib.dir/build

src/CMakeFiles/stdAlgoV1_lib.dir/clean:
	cd /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build/src && $(CMAKE_COMMAND) -P CMakeFiles/stdAlgoV1_lib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/stdAlgoV1_lib.dir/clean

src/CMakeFiles/stdAlgoV1_lib.dir/depend:
	cd /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04 /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/src /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build/src /Users/oarnopolin/Desktop/marathon-cpp/sprint01/t04/build/src/CMakeFiles/stdAlgoV1_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/stdAlgoV1_lib.dir/depend
