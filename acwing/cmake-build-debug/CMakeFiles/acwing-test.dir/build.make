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
include CMakeFiles/acwing-test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/acwing-test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/acwing-test.dir/flags.make

CMakeFiles/acwing-test.dir/test.cpp.o: CMakeFiles/acwing-test.dir/flags.make
CMakeFiles/acwing-test.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/acwing-test.dir/test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/acwing-test.dir/test.cpp.o -c /Users/zhuzhen/contest/acwing/test.cpp

CMakeFiles/acwing-test.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/acwing-test.dir/test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhuzhen/contest/acwing/test.cpp > CMakeFiles/acwing-test.dir/test.cpp.i

CMakeFiles/acwing-test.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/acwing-test.dir/test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhuzhen/contest/acwing/test.cpp -o CMakeFiles/acwing-test.dir/test.cpp.s

# Object files for target acwing-test
acwing__test_OBJECTS = \
"CMakeFiles/acwing-test.dir/test.cpp.o"

# External object files for target acwing-test
acwing__test_EXTERNAL_OBJECTS =

acwing-test: CMakeFiles/acwing-test.dir/test.cpp.o
acwing-test: CMakeFiles/acwing-test.dir/build.make
acwing-test: CMakeFiles/acwing-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable acwing-test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/acwing-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/acwing-test.dir/build: acwing-test

.PHONY : CMakeFiles/acwing-test.dir/build

CMakeFiles/acwing-test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/acwing-test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/acwing-test.dir/clean

CMakeFiles/acwing-test.dir/depend:
	cd /Users/zhuzhen/contest/acwing/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles/acwing-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/acwing-test.dir/depend

