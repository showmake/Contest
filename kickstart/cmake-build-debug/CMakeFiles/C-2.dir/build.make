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
CMAKE_SOURCE_DIR = /Users/zhuzhen/contest/kickstart

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhuzhen/contest/kickstart/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C-2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C-2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C-2.dir/flags.make

CMakeFiles/C-2.dir/2020/C/2.cpp.o: CMakeFiles/C-2.dir/flags.make
CMakeFiles/C-2.dir/2020/C/2.cpp.o: ../2020/C/2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhuzhen/contest/kickstart/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C-2.dir/2020/C/2.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/C-2.dir/2020/C/2.cpp.o -c /Users/zhuzhen/contest/kickstart/2020/C/2.cpp

CMakeFiles/C-2.dir/2020/C/2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C-2.dir/2020/C/2.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhuzhen/contest/kickstart/2020/C/2.cpp > CMakeFiles/C-2.dir/2020/C/2.cpp.i

CMakeFiles/C-2.dir/2020/C/2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C-2.dir/2020/C/2.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhuzhen/contest/kickstart/2020/C/2.cpp -o CMakeFiles/C-2.dir/2020/C/2.cpp.s

# Object files for target C-2
C__2_OBJECTS = \
"CMakeFiles/C-2.dir/2020/C/2.cpp.o"

# External object files for target C-2
C__2_EXTERNAL_OBJECTS =

C-2: CMakeFiles/C-2.dir/2020/C/2.cpp.o
C-2: CMakeFiles/C-2.dir/build.make
C-2: CMakeFiles/C-2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhuzhen/contest/kickstart/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C-2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C-2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C-2.dir/build: C-2

.PHONY : CMakeFiles/C-2.dir/build

CMakeFiles/C-2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C-2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C-2.dir/clean

CMakeFiles/C-2.dir/depend:
	cd /Users/zhuzhen/contest/kickstart/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhuzhen/contest/kickstart /Users/zhuzhen/contest/kickstart /Users/zhuzhen/contest/kickstart/cmake-build-debug /Users/zhuzhen/contest/kickstart/cmake-build-debug /Users/zhuzhen/contest/kickstart/cmake-build-debug/CMakeFiles/C-2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C-2.dir/depend

