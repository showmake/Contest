# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhuzhen/contest/acwing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhuzhen/contest/acwing/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/acwing-3574.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/acwing-3574.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/acwing-3574.dir/flags.make

CMakeFiles/acwing-3574.dir/3574.cpp.o: CMakeFiles/acwing-3574.dir/flags.make
CMakeFiles/acwing-3574.dir/3574.cpp.o: ../3574.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/acwing-3574.dir/3574.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/acwing-3574.dir/3574.cpp.o -c /Users/zhuzhen/contest/acwing/3574.cpp

CMakeFiles/acwing-3574.dir/3574.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/acwing-3574.dir/3574.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhuzhen/contest/acwing/3574.cpp > CMakeFiles/acwing-3574.dir/3574.cpp.i

CMakeFiles/acwing-3574.dir/3574.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/acwing-3574.dir/3574.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhuzhen/contest/acwing/3574.cpp -o CMakeFiles/acwing-3574.dir/3574.cpp.s

# Object files for target acwing-3574
acwing__3574_OBJECTS = \
"CMakeFiles/acwing-3574.dir/3574.cpp.o"

# External object files for target acwing-3574
acwing__3574_EXTERNAL_OBJECTS =

acwing-3574: CMakeFiles/acwing-3574.dir/3574.cpp.o
acwing-3574: CMakeFiles/acwing-3574.dir/build.make
acwing-3574: CMakeFiles/acwing-3574.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable acwing-3574"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/acwing-3574.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/acwing-3574.dir/build: acwing-3574

.PHONY : CMakeFiles/acwing-3574.dir/build

CMakeFiles/acwing-3574.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/acwing-3574.dir/cmake_clean.cmake
.PHONY : CMakeFiles/acwing-3574.dir/clean

CMakeFiles/acwing-3574.dir/depend:
	cd /Users/zhuzhen/contest/acwing/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles/acwing-3574.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/acwing-3574.dir/depend
