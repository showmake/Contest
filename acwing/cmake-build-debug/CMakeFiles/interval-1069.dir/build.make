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
include CMakeFiles/interval-1069.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/interval-1069.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/interval-1069.dir/flags.make

CMakeFiles/interval-1069.dir/improve/dp/interval/1069.cpp.o: CMakeFiles/interval-1069.dir/flags.make
CMakeFiles/interval-1069.dir/improve/dp/interval/1069.cpp.o: ../improve/dp/interval/1069.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/interval-1069.dir/improve/dp/interval/1069.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/interval-1069.dir/improve/dp/interval/1069.cpp.o -c /Users/zhuzhen/contest/acwing/improve/dp/interval/1069.cpp

CMakeFiles/interval-1069.dir/improve/dp/interval/1069.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/interval-1069.dir/improve/dp/interval/1069.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhuzhen/contest/acwing/improve/dp/interval/1069.cpp > CMakeFiles/interval-1069.dir/improve/dp/interval/1069.cpp.i

CMakeFiles/interval-1069.dir/improve/dp/interval/1069.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/interval-1069.dir/improve/dp/interval/1069.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhuzhen/contest/acwing/improve/dp/interval/1069.cpp -o CMakeFiles/interval-1069.dir/improve/dp/interval/1069.cpp.s

# Object files for target interval-1069
interval__1069_OBJECTS = \
"CMakeFiles/interval-1069.dir/improve/dp/interval/1069.cpp.o"

# External object files for target interval-1069
interval__1069_EXTERNAL_OBJECTS =

interval-1069: CMakeFiles/interval-1069.dir/improve/dp/interval/1069.cpp.o
interval-1069: CMakeFiles/interval-1069.dir/build.make
interval-1069: CMakeFiles/interval-1069.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable interval-1069"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/interval-1069.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/interval-1069.dir/build: interval-1069

.PHONY : CMakeFiles/interval-1069.dir/build

CMakeFiles/interval-1069.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/interval-1069.dir/cmake_clean.cmake
.PHONY : CMakeFiles/interval-1069.dir/clean

CMakeFiles/interval-1069.dir/depend:
	cd /Users/zhuzhen/contest/acwing/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles/interval-1069.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/interval-1069.dir/depend

