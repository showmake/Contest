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
include CMakeFiles/tree_dp-1073.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tree_dp-1073.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tree_dp-1073.dir/flags.make

CMakeFiles/tree_dp-1073.dir/improve/dp/tree_dp/1073.cpp.o: CMakeFiles/tree_dp-1073.dir/flags.make
CMakeFiles/tree_dp-1073.dir/improve/dp/tree_dp/1073.cpp.o: ../improve/dp/tree_dp/1073.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tree_dp-1073.dir/improve/dp/tree_dp/1073.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tree_dp-1073.dir/improve/dp/tree_dp/1073.cpp.o -c /Users/zhuzhen/contest/acwing/improve/dp/tree_dp/1073.cpp

CMakeFiles/tree_dp-1073.dir/improve/dp/tree_dp/1073.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tree_dp-1073.dir/improve/dp/tree_dp/1073.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhuzhen/contest/acwing/improve/dp/tree_dp/1073.cpp > CMakeFiles/tree_dp-1073.dir/improve/dp/tree_dp/1073.cpp.i

CMakeFiles/tree_dp-1073.dir/improve/dp/tree_dp/1073.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tree_dp-1073.dir/improve/dp/tree_dp/1073.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhuzhen/contest/acwing/improve/dp/tree_dp/1073.cpp -o CMakeFiles/tree_dp-1073.dir/improve/dp/tree_dp/1073.cpp.s

# Object files for target tree_dp-1073
tree_dp__1073_OBJECTS = \
"CMakeFiles/tree_dp-1073.dir/improve/dp/tree_dp/1073.cpp.o"

# External object files for target tree_dp-1073
tree_dp__1073_EXTERNAL_OBJECTS =

tree_dp-1073: CMakeFiles/tree_dp-1073.dir/improve/dp/tree_dp/1073.cpp.o
tree_dp-1073: CMakeFiles/tree_dp-1073.dir/build.make
tree_dp-1073: CMakeFiles/tree_dp-1073.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tree_dp-1073"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tree_dp-1073.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tree_dp-1073.dir/build: tree_dp-1073

.PHONY : CMakeFiles/tree_dp-1073.dir/build

CMakeFiles/tree_dp-1073.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tree_dp-1073.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tree_dp-1073.dir/clean

CMakeFiles/tree_dp-1073.dir/depend:
	cd /Users/zhuzhen/contest/acwing/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles/tree_dp-1073.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tree_dp-1073.dir/depend

