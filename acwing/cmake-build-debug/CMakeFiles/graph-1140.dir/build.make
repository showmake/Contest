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
include CMakeFiles/graph-1140.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/graph-1140.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/graph-1140.dir/flags.make

CMakeFiles/graph-1140.dir/improve/graph/1140.cpp.o: CMakeFiles/graph-1140.dir/flags.make
CMakeFiles/graph-1140.dir/improve/graph/1140.cpp.o: ../improve/graph/1140.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/graph-1140.dir/improve/graph/1140.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/graph-1140.dir/improve/graph/1140.cpp.o -c /Users/zhuzhen/contest/acwing/improve/graph/1140.cpp

CMakeFiles/graph-1140.dir/improve/graph/1140.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graph-1140.dir/improve/graph/1140.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhuzhen/contest/acwing/improve/graph/1140.cpp > CMakeFiles/graph-1140.dir/improve/graph/1140.cpp.i

CMakeFiles/graph-1140.dir/improve/graph/1140.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graph-1140.dir/improve/graph/1140.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhuzhen/contest/acwing/improve/graph/1140.cpp -o CMakeFiles/graph-1140.dir/improve/graph/1140.cpp.s

# Object files for target graph-1140
graph__1140_OBJECTS = \
"CMakeFiles/graph-1140.dir/improve/graph/1140.cpp.o"

# External object files for target graph-1140
graph__1140_EXTERNAL_OBJECTS =

graph-1140: CMakeFiles/graph-1140.dir/improve/graph/1140.cpp.o
graph-1140: CMakeFiles/graph-1140.dir/build.make
graph-1140: CMakeFiles/graph-1140.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable graph-1140"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/graph-1140.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/graph-1140.dir/build: graph-1140

.PHONY : CMakeFiles/graph-1140.dir/build

CMakeFiles/graph-1140.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/graph-1140.dir/cmake_clean.cmake
.PHONY : CMakeFiles/graph-1140.dir/clean

CMakeFiles/graph-1140.dir/depend:
	cd /Users/zhuzhen/contest/acwing/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles/graph-1140.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/graph-1140.dir/depend

