# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_SOURCE_DIR = D:\study\contest\codeforces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\study\contest\codeforces\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/112-f.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/112-f.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/112-f.dir/flags.make

CMakeFiles/112-f.dir/edu/112/f.cpp.obj: CMakeFiles/112-f.dir/flags.make
CMakeFiles/112-f.dir/edu/112/f.cpp.obj: ../edu/112/f.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\study\contest\codeforces\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/112-f.dir/edu/112/f.cpp.obj"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\112-f.dir\edu\112\f.cpp.obj -c D:\study\contest\codeforces\edu\112\f.cpp

CMakeFiles/112-f.dir/edu/112/f.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/112-f.dir/edu/112/f.cpp.i"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\study\contest\codeforces\edu\112\f.cpp > CMakeFiles\112-f.dir\edu\112\f.cpp.i

CMakeFiles/112-f.dir/edu/112/f.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/112-f.dir/edu/112/f.cpp.s"
	D:\study\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\study\contest\codeforces\edu\112\f.cpp -o CMakeFiles\112-f.dir\edu\112\f.cpp.s

# Object files for target 112-f
112__f_OBJECTS = \
"CMakeFiles/112-f.dir/edu/112/f.cpp.obj"

# External object files for target 112-f
112__f_EXTERNAL_OBJECTS =

112-f.exe: CMakeFiles/112-f.dir/edu/112/f.cpp.obj
112-f.exe: CMakeFiles/112-f.dir/build.make
112-f.exe: CMakeFiles/112-f.dir/linklibs.rsp
112-f.exe: CMakeFiles/112-f.dir/objects1.rsp
112-f.exe: CMakeFiles/112-f.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\study\contest\codeforces\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 112-f.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\112-f.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/112-f.dir/build: 112-f.exe

.PHONY : CMakeFiles/112-f.dir/build

CMakeFiles/112-f.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\112-f.dir\cmake_clean.cmake
.PHONY : CMakeFiles/112-f.dir/clean

CMakeFiles/112-f.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\study\contest\codeforces D:\study\contest\codeforces D:\study\contest\codeforces\cmake-build-debug D:\study\contest\codeforces\cmake-build-debug D:\study\contest\codeforces\cmake-build-debug\CMakeFiles\112-f.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/112-f.dir/depend
