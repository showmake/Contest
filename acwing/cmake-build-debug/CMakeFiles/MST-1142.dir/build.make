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
include CMakeFiles/MST-1142.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/MST-1142.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MST-1142.dir/flags.make

CMakeFiles/MST-1142.dir/improve/graph/MST/1142.cpp.obj: CMakeFiles/MST-1142.dir/flags.make
CMakeFiles/MST-1142.dir/improve/graph/MST/1142.cpp.obj: ../improve/graph/MST/1142.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\study\contest\acwing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MST-1142.dir/improve/graph/MST/1142.cpp.obj"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MST-1142.dir\improve\graph\MST\1142.cpp.obj -c D:\study\contest\acwing\improve\graph\MST\1142.cpp

CMakeFiles/MST-1142.dir/improve/graph/MST/1142.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MST-1142.dir/improve/graph/MST/1142.cpp.i"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\study\contest\acwing\improve\graph\MST\1142.cpp > CMakeFiles\MST-1142.dir\improve\graph\MST\1142.cpp.i

CMakeFiles/MST-1142.dir/improve/graph/MST/1142.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MST-1142.dir/improve/graph/MST/1142.cpp.s"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\study\contest\acwing\improve\graph\MST\1142.cpp -o CMakeFiles\MST-1142.dir\improve\graph\MST\1142.cpp.s

# Object files for target MST-1142
MST__1142_OBJECTS = \
"CMakeFiles/MST-1142.dir/improve/graph/MST/1142.cpp.obj"

# External object files for target MST-1142
MST__1142_EXTERNAL_OBJECTS =

MST-1142.exe: CMakeFiles/MST-1142.dir/improve/graph/MST/1142.cpp.obj
MST-1142.exe: CMakeFiles/MST-1142.dir/build.make
MST-1142.exe: CMakeFiles/MST-1142.dir/linklibs.rsp
MST-1142.exe: CMakeFiles/MST-1142.dir/objects1.rsp
MST-1142.exe: CMakeFiles/MST-1142.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\study\contest\acwing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MST-1142.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MST-1142.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MST-1142.dir/build: MST-1142.exe
.PHONY : CMakeFiles/MST-1142.dir/build

CMakeFiles/MST-1142.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MST-1142.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MST-1142.dir/clean

CMakeFiles/MST-1142.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\study\contest\acwing D:\study\contest\acwing D:\study\contest\acwing\cmake-build-debug D:\study\contest\acwing\cmake-build-debug D:\study\contest\acwing\cmake-build-debug\CMakeFiles\MST-1142.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MST-1142.dir/depend

