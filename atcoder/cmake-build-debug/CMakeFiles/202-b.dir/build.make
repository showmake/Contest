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
include CMakeFiles/202-b.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/202-b.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/202-b.dir/flags.make

CMakeFiles/202-b.dir/abc/202/b.cpp.obj: CMakeFiles/202-b.dir/flags.make
CMakeFiles/202-b.dir/abc/202/b.cpp.obj: ../abc/202/b.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\study\contest\atcoder\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/202-b.dir/abc/202/b.cpp.obj"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\202-b.dir\abc\202\b.cpp.obj -c D:\study\contest\atcoder\abc\202\b.cpp

CMakeFiles/202-b.dir/abc/202/b.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/202-b.dir/abc/202/b.cpp.i"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\study\contest\atcoder\abc\202\b.cpp > CMakeFiles\202-b.dir\abc\202\b.cpp.i

CMakeFiles/202-b.dir/abc/202/b.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/202-b.dir/abc/202/b.cpp.s"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\study\contest\atcoder\abc\202\b.cpp -o CMakeFiles\202-b.dir\abc\202\b.cpp.s

# Object files for target 202-b
202__b_OBJECTS = \
"CMakeFiles/202-b.dir/abc/202/b.cpp.obj"

# External object files for target 202-b
202__b_EXTERNAL_OBJECTS =

202-b.exe: CMakeFiles/202-b.dir/abc/202/b.cpp.obj
202-b.exe: CMakeFiles/202-b.dir/build.make
202-b.exe: CMakeFiles/202-b.dir/linklibs.rsp
202-b.exe: CMakeFiles/202-b.dir/objects1.rsp
202-b.exe: CMakeFiles/202-b.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\study\contest\atcoder\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 202-b.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\202-b.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/202-b.dir/build: 202-b.exe
.PHONY : CMakeFiles/202-b.dir/build

CMakeFiles/202-b.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\202-b.dir\cmake_clean.cmake
.PHONY : CMakeFiles/202-b.dir/clean

CMakeFiles/202-b.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\study\contest\atcoder D:\study\contest\atcoder D:\study\contest\atcoder\cmake-build-debug D:\study\contest\atcoder\cmake-build-debug D:\study\contest\atcoder\cmake-build-debug\CMakeFiles\202-b.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/202-b.dir/depend

