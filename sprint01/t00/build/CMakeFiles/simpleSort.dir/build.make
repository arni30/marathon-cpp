# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/oarnopolin/Desktop/sprint01/t00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oarnopolin/Desktop/sprint01/t00/build

# Include any dependencies generated for this target.
include CMakeFiles/simpleSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/simpleSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simpleSort.dir/flags.make

CMakeFiles/simpleSort.dir/main.cpp.o: CMakeFiles/simpleSort.dir/flags.make
CMakeFiles/simpleSort.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oarnopolin/Desktop/sprint01/t00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simpleSort.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simpleSort.dir/main.cpp.o -c /home/oarnopolin/Desktop/sprint01/t00/main.cpp

CMakeFiles/simpleSort.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSort.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oarnopolin/Desktop/sprint01/t00/main.cpp > CMakeFiles/simpleSort.dir/main.cpp.i

CMakeFiles/simpleSort.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSort.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oarnopolin/Desktop/sprint01/t00/main.cpp -o CMakeFiles/simpleSort.dir/main.cpp.s

CMakeFiles/simpleSort.dir/src/simpleSort.cpp.o: CMakeFiles/simpleSort.dir/flags.make
CMakeFiles/simpleSort.dir/src/simpleSort.cpp.o: ../src/simpleSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oarnopolin/Desktop/sprint01/t00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/simpleSort.dir/src/simpleSort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simpleSort.dir/src/simpleSort.cpp.o -c /home/oarnopolin/Desktop/sprint01/t00/src/simpleSort.cpp

CMakeFiles/simpleSort.dir/src/simpleSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simpleSort.dir/src/simpleSort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oarnopolin/Desktop/sprint01/t00/src/simpleSort.cpp > CMakeFiles/simpleSort.dir/src/simpleSort.cpp.i

CMakeFiles/simpleSort.dir/src/simpleSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simpleSort.dir/src/simpleSort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oarnopolin/Desktop/sprint01/t00/src/simpleSort.cpp -o CMakeFiles/simpleSort.dir/src/simpleSort.cpp.s

# Object files for target simpleSort
simpleSort_OBJECTS = \
"CMakeFiles/simpleSort.dir/main.cpp.o" \
"CMakeFiles/simpleSort.dir/src/simpleSort.cpp.o"

# External object files for target simpleSort
simpleSort_EXTERNAL_OBJECTS =

simpleSort: CMakeFiles/simpleSort.dir/main.cpp.o
simpleSort: CMakeFiles/simpleSort.dir/src/simpleSort.cpp.o
simpleSort: CMakeFiles/simpleSort.dir/build.make
simpleSort: CMakeFiles/simpleSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/oarnopolin/Desktop/sprint01/t00/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable simpleSort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simpleSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simpleSort.dir/build: simpleSort

.PHONY : CMakeFiles/simpleSort.dir/build

CMakeFiles/simpleSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simpleSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simpleSort.dir/clean

CMakeFiles/simpleSort.dir/depend:
	cd /home/oarnopolin/Desktop/sprint01/t00/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oarnopolin/Desktop/sprint01/t00 /home/oarnopolin/Desktop/sprint01/t00 /home/oarnopolin/Desktop/sprint01/t00/build /home/oarnopolin/Desktop/sprint01/t00/build /home/oarnopolin/Desktop/sprint01/t00/build/CMakeFiles/simpleSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simpleSort.dir/depend

