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
CMAKE_SOURCE_DIR = /home/oarnopolin/Desktop/sprint00/t01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oarnopolin/Desktop/sprint00/t01/build

# Include any dependencies generated for this target.
include CMakeFiles/printDialog.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/printDialog.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/printDialog.dir/flags.make

CMakeFiles/printDialog.dir/printDialog.cpp.o: CMakeFiles/printDialog.dir/flags.make
CMakeFiles/printDialog.dir/printDialog.cpp.o: ../printDialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oarnopolin/Desktop/sprint00/t01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/printDialog.dir/printDialog.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/printDialog.dir/printDialog.cpp.o -c /home/oarnopolin/Desktop/sprint00/t01/printDialog.cpp

CMakeFiles/printDialog.dir/printDialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/printDialog.dir/printDialog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oarnopolin/Desktop/sprint00/t01/printDialog.cpp > CMakeFiles/printDialog.dir/printDialog.cpp.i

CMakeFiles/printDialog.dir/printDialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/printDialog.dir/printDialog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oarnopolin/Desktop/sprint00/t01/printDialog.cpp -o CMakeFiles/printDialog.dir/printDialog.cpp.s

# Object files for target printDialog
printDialog_OBJECTS = \
"CMakeFiles/printDialog.dir/printDialog.cpp.o"

# External object files for target printDialog
printDialog_EXTERNAL_OBJECTS =

printDialog: CMakeFiles/printDialog.dir/printDialog.cpp.o
printDialog: CMakeFiles/printDialog.dir/build.make
printDialog: CMakeFiles/printDialog.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/oarnopolin/Desktop/sprint00/t01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable printDialog"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/printDialog.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/printDialog.dir/build: printDialog

.PHONY : CMakeFiles/printDialog.dir/build

CMakeFiles/printDialog.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/printDialog.dir/cmake_clean.cmake
.PHONY : CMakeFiles/printDialog.dir/clean

CMakeFiles/printDialog.dir/depend:
	cd /home/oarnopolin/Desktop/sprint00/t01/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oarnopolin/Desktop/sprint00/t01 /home/oarnopolin/Desktop/sprint00/t01 /home/oarnopolin/Desktop/sprint00/t01/build /home/oarnopolin/Desktop/sprint00/t01/build /home/oarnopolin/Desktop/sprint00/t01/build/CMakeFiles/printDialog.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/printDialog.dir/depend
