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
include CMakeFiles/number_dp-1086.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/number_dp-1086.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/number_dp-1086.dir/flags.make

CMakeFiles/number_dp-1086.dir/improve/dp/number_dp/1086.cpp.o: CMakeFiles/number_dp-1086.dir/flags.make
CMakeFiles/number_dp-1086.dir/improve/dp/number_dp/1086.cpp.o: ../improve/dp/number_dp/1086.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/number_dp-1086.dir/improve/dp/number_dp/1086.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/number_dp-1086.dir/improve/dp/number_dp/1086.cpp.o -c /Users/zhuzhen/contest/acwing/improve/dp/number_dp/1086.cpp

CMakeFiles/number_dp-1086.dir/improve/dp/number_dp/1086.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/number_dp-1086.dir/improve/dp/number_dp/1086.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhuzhen/contest/acwing/improve/dp/number_dp/1086.cpp > CMakeFiles/number_dp-1086.dir/improve/dp/number_dp/1086.cpp.i

CMakeFiles/number_dp-1086.dir/improve/dp/number_dp/1086.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/number_dp-1086.dir/improve/dp/number_dp/1086.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhuzhen/contest/acwing/improve/dp/number_dp/1086.cpp -o CMakeFiles/number_dp-1086.dir/improve/dp/number_dp/1086.cpp.s

# Object files for target number_dp-1086
number_dp__1086_OBJECTS = \
"CMakeFiles/number_dp-1086.dir/improve/dp/number_dp/1086.cpp.o"

# External object files for target number_dp-1086
number_dp__1086_EXTERNAL_OBJECTS =

number_dp-1086: CMakeFiles/number_dp-1086.dir/improve/dp/number_dp/1086.cpp.o
number_dp-1086: CMakeFiles/number_dp-1086.dir/build.make
number_dp-1086: CMakeFiles/number_dp-1086.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable number_dp-1086"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/number_dp-1086.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/number_dp-1086.dir/build: number_dp-1086

.PHONY : CMakeFiles/number_dp-1086.dir/build

CMakeFiles/number_dp-1086.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/number_dp-1086.dir/cmake_clean.cmake
.PHONY : CMakeFiles/number_dp-1086.dir/clean

CMakeFiles/number_dp-1086.dir/depend:
	cd /Users/zhuzhen/contest/acwing/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug /Users/zhuzhen/contest/acwing/cmake-build-debug/CMakeFiles/number_dp-1086.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/number_dp-1086.dir/depend

