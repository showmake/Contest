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
CMAKE_SOURCE_DIR = D:\study\contest\acwing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\study\contest\acwing\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/linear-1010.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/linear-1010.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linear-1010.dir/flags.make

CMakeFiles/linear-1010.dir/improve/dp/linear/1010.cpp.obj: CMakeFiles/linear-1010.dir/flags.make
CMakeFiles/linear-1010.dir/improve/dp/linear/1010.cpp.obj: ../improve/dp/linear/1010.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\study\contest\acwing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/linear-1010.dir/improve/dp/linear/1010.cpp.obj"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\linear-1010.dir\improve\dp\linear\1010.cpp.obj -c D:\study\contest\acwing\improve\dp\linear\1010.cpp

CMakeFiles/linear-1010.dir/improve/dp/linear/1010.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linear-1010.dir/improve/dp/linear/1010.cpp.i"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\study\contest\acwing\improve\dp\linear\1010.cpp > CMakeFiles\linear-1010.dir\improve\dp\linear\1010.cpp.i

CMakeFiles/linear-1010.dir/improve/dp/linear/1010.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linear-1010.dir/improve/dp/linear/1010.cpp.s"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\study\contest\acwing\improve\dp\linear\1010.cpp -o CMakeFiles\linear-1010.dir\improve\dp\linear\1010.cpp.s

# Object files for target linear-1010
linear__1010_OBJECTS = \
"CMakeFiles/linear-1010.dir/improve/dp/linear/1010.cpp.obj"

# External object files for target linear-1010
linear__1010_EXTERNAL_OBJECTS =

linear-1010.exe: CMakeFiles/linear-1010.dir/improve/dp/linear/1010.cpp.obj
linear-1010.exe: CMakeFiles/linear-1010.dir/build.make
linear-1010.exe: CMakeFiles/linear-1010.dir/linklibs.rsp
linear-1010.exe: CMakeFiles/linear-1010.dir/objects1.rsp
linear-1010.exe: CMakeFiles/linear-1010.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\study\contest\acwing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable linear-1010.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\linear-1010.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linear-1010.dir/build: linear-1010.exe
.PHONY : CMakeFiles/linear-1010.dir/build

CMakeFiles/linear-1010.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\linear-1010.dir\cmake_clean.cmake
.PHONY : CMakeFiles/linear-1010.dir/clean

CMakeFiles/linear-1010.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\study\contest\acwing D:\study\contest\acwing D:\study\contest\acwing\cmake-build-debug D:\study\contest\acwing\cmake-build-debug D:\study\contest\acwing\cmake-build-debug\CMakeFiles\linear-1010.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linear-1010.dir/depend

