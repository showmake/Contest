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
CMAKE_SOURCE_DIR = D:\study\contest\kickstart

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\study\contest\kickstart\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/2020c-2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/2020c-2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2020c-2.dir/flags.make

CMakeFiles/2020c-2.dir/2020/2020c/2.cpp.obj: CMakeFiles/2020c-2.dir/flags.make
CMakeFiles/2020c-2.dir/2020/2020c/2.cpp.obj: ../2020/2020c/2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\study\contest\kickstart\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2020c-2.dir/2020/2020c/2.cpp.obj"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\2020c-2.dir\2020\2020c\2.cpp.obj -c D:\study\contest\kickstart\2020\2020c\2.cpp

CMakeFiles/2020c-2.dir/2020/2020c/2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2020c-2.dir/2020/2020c/2.cpp.i"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\study\contest\kickstart\2020\2020c\2.cpp > CMakeFiles\2020c-2.dir\2020\2020c\2.cpp.i

CMakeFiles/2020c-2.dir/2020/2020c/2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2020c-2.dir/2020/2020c/2.cpp.s"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\study\contest\kickstart\2020\2020c\2.cpp -o CMakeFiles\2020c-2.dir\2020\2020c\2.cpp.s

# Object files for target 2020c-2
2020c__2_OBJECTS = \
"CMakeFiles/2020c-2.dir/2020/2020c/2.cpp.obj"

# External object files for target 2020c-2
2020c__2_EXTERNAL_OBJECTS =

2020c-2.exe: CMakeFiles/2020c-2.dir/2020/2020c/2.cpp.obj
2020c-2.exe: CMakeFiles/2020c-2.dir/build.make
2020c-2.exe: CMakeFiles/2020c-2.dir/linklibs.rsp
2020c-2.exe: CMakeFiles/2020c-2.dir/objects1.rsp
2020c-2.exe: CMakeFiles/2020c-2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\study\contest\kickstart\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 2020c-2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\2020c-2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2020c-2.dir/build: 2020c-2.exe
.PHONY : CMakeFiles/2020c-2.dir/build

CMakeFiles/2020c-2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\2020c-2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/2020c-2.dir/clean

CMakeFiles/2020c-2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\study\contest\kickstart D:\study\contest\kickstart D:\study\contest\kickstart\cmake-build-debug D:\study\contest\kickstart\cmake-build-debug D:\study\contest\kickstart\cmake-build-debug\CMakeFiles\2020c-2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/2020c-2.dir/depend

