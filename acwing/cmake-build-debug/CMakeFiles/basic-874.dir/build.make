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
include CMakeFiles/basic-874.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/basic-874.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/basic-874.dir/flags.make

CMakeFiles/basic-874.dir/basic/874.cpp.o: CMakeFiles/basic-874.dir/flags.make
CMakeFiles/basic-874.dir/basic/874.cpp.o: ../basic/874.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/basic-874.dir/basic/874.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/basic-874.dir/basic/874.cpp.o -c /Users/zhuzhen/contest/acwing/basic/874.cpp

CMakeFiles/basic-874.dir/basic/874.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/basic-874.dir/basic/874.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhuzhen/contest/acwing/basic/874.cpp > CMakeFiles/basic-874.dir/basic/874.cpp.i

CMakeFiles/basic-874.dir/basic/874.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/basic-874.dir/basic/874.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhuzhen/contest/acwing/basic/874.cpp -o CMakeFiles/basic-874.dir/basic/874.cpp.s

# Object files for target basic-874
basic__874_OBJECTS = \
"CMakeFiles/basic-874.dir/basic/874.cpp.o"

# External object files for target basic-874
basic__874_EXTERNAL_OBJECTS =

basic-874: CMakeFiles/basic-874.dir/basic/874.cpp.o
basic-874: CMakeFiles/basic-874.dir/build.make
basic-874: CMakeFiles/basic-874.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable basic-874"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/basic-874.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/basic-874.dir/build: basic-874

.PHONY : CMakeFiles/basic-874.dir/build

CMakeFiles/basic-874.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/basic-874.dir/cmake_clean.cmake
.PHONY : CMakeFiles/basic-874.dir/clean

CMakeFiles/basic-874.dir/depend:
	cd /Users/zhuzhen/contest/acwing/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles/basic-874.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/basic-874.dir/depend

