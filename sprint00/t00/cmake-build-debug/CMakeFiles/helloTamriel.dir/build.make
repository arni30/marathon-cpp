# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/oarnopolin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.6397.106/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/oarnopolin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.6397.106/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/oarnopolin/Desktop/sprint00/t00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oarnopolin/Desktop/sprint00/t00/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/helloTamriel.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/helloTamriel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/helloTamriel.dir/flags.make

CMakeFiles/helloTamriel.dir/helloTamriel.cpp.o: CMakeFiles/helloTamriel.dir/flags.make
CMakeFiles/helloTamriel.dir/helloTamriel.cpp.o: ../helloTamriel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oarnopolin/Desktop/sprint00/t00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/helloTamriel.dir/helloTamriel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/helloTamriel.dir/helloTamriel.cpp.o -c /home/oarnopolin/Desktop/sprint00/t00/helloTamriel.cpp

CMakeFiles/helloTamriel.dir/helloTamriel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/helloTamriel.dir/helloTamriel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oarnopolin/Desktop/sprint00/t00/helloTamriel.cpp > CMakeFiles/helloTamriel.dir/helloTamriel.cpp.i

CMakeFiles/helloTamriel.dir/helloTamriel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/helloTamriel.dir/helloTamriel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oarnopolin/Desktop/sprint00/t00/helloTamriel.cpp -o CMakeFiles/helloTamriel.dir/helloTamriel.cpp.s

# Object files for target helloTamriel
helloTamriel_OBJECTS = \
"CMakeFiles/helloTamriel.dir/helloTamriel.cpp.o"

# External object files for target helloTamriel
helloTamriel_EXTERNAL_OBJECTS =

helloTamriel: CMakeFiles/helloTamriel.dir/helloTamriel.cpp.o
helloTamriel: CMakeFiles/helloTamriel.dir/build.make
helloTamriel: CMakeFiles/helloTamriel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/oarnopolin/Desktop/sprint00/t00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable helloTamriel"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/helloTamriel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/helloTamriel.dir/build: helloTamriel

.PHONY : CMakeFiles/helloTamriel.dir/build

CMakeFiles/helloTamriel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/helloTamriel.dir/cmake_clean.cmake
.PHONY : CMakeFiles/helloTamriel.dir/clean

CMakeFiles/helloTamriel.dir/depend:
	cd /home/oarnopolin/Desktop/sprint00/t00/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oarnopolin/Desktop/sprint00/t00 /home/oarnopolin/Desktop/sprint00/t00 /home/oarnopolin/Desktop/sprint00/t00/cmake-build-debug /home/oarnopolin/Desktop/sprint00/t00/cmake-build-debug /home/oarnopolin/Desktop/sprint00/t00/cmake-build-debug/CMakeFiles/helloTamriel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/helloTamriel.dir/depend

