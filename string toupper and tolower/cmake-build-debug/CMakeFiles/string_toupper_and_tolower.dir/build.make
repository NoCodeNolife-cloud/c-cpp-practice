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
CMAKE_COMMAND = "D:\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\programe\GitHub project warehouse manager\c-cpp-practice\string toupper and tolower"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\programe\GitHub project warehouse manager\c-cpp-practice\string toupper and tolower\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/string_toupper_and_tolower.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/string_toupper_and_tolower.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/string_toupper_and_tolower.dir/flags.make

CMakeFiles/string_toupper_and_tolower.dir/main.cpp.obj: CMakeFiles/string_toupper_and_tolower.dir/flags.make
CMakeFiles/string_toupper_and_tolower.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-practice\string toupper and tolower\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/string_toupper_and_tolower.dir/main.cpp.obj"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\string_toupper_and_tolower.dir\main.cpp.obj -c "E:\programe\GitHub project warehouse manager\c-cpp-practice\string toupper and tolower\main.cpp"

CMakeFiles/string_toupper_and_tolower.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/string_toupper_and_tolower.dir/main.cpp.i"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\programe\GitHub project warehouse manager\c-cpp-practice\string toupper and tolower\main.cpp" > CMakeFiles\string_toupper_and_tolower.dir\main.cpp.i

CMakeFiles/string_toupper_and_tolower.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/string_toupper_and_tolower.dir/main.cpp.s"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\programe\GitHub project warehouse manager\c-cpp-practice\string toupper and tolower\main.cpp" -o CMakeFiles\string_toupper_and_tolower.dir\main.cpp.s

# Object files for target string_toupper_and_tolower
string_toupper_and_tolower_OBJECTS = \
"CMakeFiles/string_toupper_and_tolower.dir/main.cpp.obj"

# External object files for target string_toupper_and_tolower
string_toupper_and_tolower_EXTERNAL_OBJECTS =

string_toupper_and_tolower.exe: CMakeFiles/string_toupper_and_tolower.dir/main.cpp.obj
string_toupper_and_tolower.exe: CMakeFiles/string_toupper_and_tolower.dir/build.make
string_toupper_and_tolower.exe: CMakeFiles/string_toupper_and_tolower.dir/linklibs.rsp
string_toupper_and_tolower.exe: CMakeFiles/string_toupper_and_tolower.dir/objects1.rsp
string_toupper_and_tolower.exe: CMakeFiles/string_toupper_and_tolower.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-practice\string toupper and tolower\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable string_toupper_and_tolower.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\string_toupper_and_tolower.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/string_toupper_and_tolower.dir/build: string_toupper_and_tolower.exe

.PHONY : CMakeFiles/string_toupper_and_tolower.dir/build

CMakeFiles/string_toupper_and_tolower.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\string_toupper_and_tolower.dir\cmake_clean.cmake
.PHONY : CMakeFiles/string_toupper_and_tolower.dir/clean

CMakeFiles/string_toupper_and_tolower.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\programe\GitHub project warehouse manager\c-cpp-practice\string toupper and tolower" "E:\programe\GitHub project warehouse manager\c-cpp-practice\string toupper and tolower" "E:\programe\GitHub project warehouse manager\c-cpp-practice\string toupper and tolower\cmake-build-debug" "E:\programe\GitHub project warehouse manager\c-cpp-practice\string toupper and tolower\cmake-build-debug" "E:\programe\GitHub project warehouse manager\c-cpp-practice\string toupper and tolower\cmake-build-debug\CMakeFiles\string_toupper_and_tolower.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/string_toupper_and_tolower.dir/depend

