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
CMAKE_COMMAND = "D:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\programe\GitHub project warehouse manager\c-cpp-practice\explicit"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\programe\GitHub project warehouse manager\c-cpp-practice\explicit\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/explicit.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/explicit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/explicit.dir/flags.make

CMakeFiles/explicit.dir/main.cpp.obj: CMakeFiles/explicit.dir/flags.make
CMakeFiles/explicit.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-practice\explicit\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/explicit.dir/main.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\explicit.dir\main.cpp.obj -c "E:\programe\GitHub project warehouse manager\c-cpp-practice\explicit\main.cpp"

CMakeFiles/explicit.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/explicit.dir/main.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\programe\GitHub project warehouse manager\c-cpp-practice\explicit\main.cpp" > CMakeFiles\explicit.dir\main.cpp.i

CMakeFiles/explicit.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/explicit.dir/main.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\programe\GitHub project warehouse manager\c-cpp-practice\explicit\main.cpp" -o CMakeFiles\explicit.dir\main.cpp.s

# Object files for target explicit
explicit_OBJECTS = \
"CMakeFiles/explicit.dir/main.cpp.obj"

# External object files for target explicit
explicit_EXTERNAL_OBJECTS =

explicit.exe: CMakeFiles/explicit.dir/main.cpp.obj
explicit.exe: CMakeFiles/explicit.dir/build.make
explicit.exe: CMakeFiles/explicit.dir/linklibs.rsp
explicit.exe: CMakeFiles/explicit.dir/objects1.rsp
explicit.exe: CMakeFiles/explicit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-practice\explicit\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable explicit.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\explicit.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/explicit.dir/build: explicit.exe

.PHONY : CMakeFiles/explicit.dir/build

CMakeFiles/explicit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\explicit.dir\cmake_clean.cmake
.PHONY : CMakeFiles/explicit.dir/clean

CMakeFiles/explicit.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\programe\GitHub project warehouse manager\c-cpp-practice\explicit" "E:\programe\GitHub project warehouse manager\c-cpp-practice\explicit" "E:\programe\GitHub project warehouse manager\c-cpp-practice\explicit\cmake-build-debug" "E:\programe\GitHub project warehouse manager\c-cpp-practice\explicit\cmake-build-debug" "E:\programe\GitHub project warehouse manager\c-cpp-practice\explicit\cmake-build-debug\CMakeFiles\explicit.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/explicit.dir/depend

