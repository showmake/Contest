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
include CMakeFiles/207-a.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/207-a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/207-a.dir/flags.make

CMakeFiles/207-a.dir/abc/207/a.cpp.obj: CMakeFiles/207-a.dir/flags.make
CMakeFiles/207-a.dir/abc/207/a.cpp.obj: ../abc/207/a.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\study\contest\atcoder\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/207-a.dir/abc/207/a.cpp.obj"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\207-a.dir\abc\207\a.cpp.obj -c D:\study\contest\atcoder\abc\207\a.cpp

CMakeFiles/207-a.dir/abc/207/a.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/207-a.dir/abc/207/a.cpp.i"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\study\contest\atcoder\abc\207\a.cpp > CMakeFiles\207-a.dir\abc\207\a.cpp.i

CMakeFiles/207-a.dir/abc/207/a.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/207-a.dir/abc/207/a.cpp.s"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\study\contest\atcoder\abc\207\a.cpp -o CMakeFiles\207-a.dir\abc\207\a.cpp.s

# Object files for target 207-a
207__a_OBJECTS = \
"CMakeFiles/207-a.dir/abc/207/a.cpp.obj"

# External object files for target 207-a
207__a_EXTERNAL_OBJECTS =

207-a.exe: CMakeFiles/207-a.dir/abc/207/a.cpp.obj
207-a.exe: CMakeFiles/207-a.dir/build.make
207-a.exe: CMakeFiles/207-a.dir/linklibs.rsp
207-a.exe: CMakeFiles/207-a.dir/objects1.rsp
207-a.exe: CMakeFiles/207-a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\study\contest\atcoder\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 207-a.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\207-a.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/207-a.dir/build: 207-a.exe
.PHONY : CMakeFiles/207-a.dir/build

CMakeFiles/207-a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\207-a.dir\cmake_clean.cmake
.PHONY : CMakeFiles/207-a.dir/clean

CMakeFiles/207-a.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\study\contest\atcoder D:\study\contest\atcoder D:\study\contest\atcoder\cmake-build-debug D:\study\contest\atcoder\cmake-build-debug D:\study\contest\atcoder\cmake-build-debug\CMakeFiles\207-a.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/207-a.dir/depend

