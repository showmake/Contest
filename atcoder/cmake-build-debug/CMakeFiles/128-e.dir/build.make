# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\study\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\study\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\study\contest\atcoder

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\study\contest\atcoder\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/128-e.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/128-e.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/128-e.dir/flags.make

CMakeFiles/128-e.dir/arc/128/e.cpp.obj: CMakeFiles/128-e.dir/flags.make
CMakeFiles/128-e.dir/arc/128/e.cpp.obj: ../arc/128/e.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\study\contest\atcoder\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/128-e.dir/arc/128/e.cpp.obj"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\128-e.dir\arc\128\e.cpp.obj -c D:\study\contest\atcoder\arc\128\e.cpp

CMakeFiles/128-e.dir/arc/128/e.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/128-e.dir/arc/128/e.cpp.i"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\study\contest\atcoder\arc\128\e.cpp > CMakeFiles\128-e.dir\arc\128\e.cpp.i

CMakeFiles/128-e.dir/arc/128/e.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/128-e.dir/arc/128/e.cpp.s"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\study\contest\atcoder\arc\128\e.cpp -o CMakeFiles\128-e.dir\arc\128\e.cpp.s

# Object files for target 128-e
128__e_OBJECTS = \
"CMakeFiles/128-e.dir/arc/128/e.cpp.obj"

# External object files for target 128-e
128__e_EXTERNAL_OBJECTS =

128-e.exe: CMakeFiles/128-e.dir/arc/128/e.cpp.obj
128-e.exe: CMakeFiles/128-e.dir/build.make
128-e.exe: CMakeFiles/128-e.dir/linklibs.rsp
128-e.exe: CMakeFiles/128-e.dir/objects1.rsp
128-e.exe: CMakeFiles/128-e.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\study\contest\atcoder\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 128-e.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\128-e.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/128-e.dir/build: 128-e.exe
.PHONY : CMakeFiles/128-e.dir/build

CMakeFiles/128-e.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\128-e.dir\cmake_clean.cmake
.PHONY : CMakeFiles/128-e.dir/clean

CMakeFiles/128-e.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\study\contest\atcoder D:\study\contest\atcoder D:\study\contest\atcoder\cmake-build-debug D:\study\contest\atcoder\cmake-build-debug D:\study\contest\atcoder\cmake-build-debug\CMakeFiles\128-e.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/128-e.dir/depend

