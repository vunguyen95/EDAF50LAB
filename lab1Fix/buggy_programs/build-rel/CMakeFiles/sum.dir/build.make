# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs/build-rel"

# Include any dependencies generated for this target.
include CMakeFiles/sum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sum.dir/flags.make

CMakeFiles/sum.dir/sum.cc.o: CMakeFiles/sum.dir/flags.make
CMakeFiles/sum.dir/sum.cc.o: ../sum.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs/build-rel/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sum.dir/sum.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sum.dir/sum.cc.o -c "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs/sum.cc"

CMakeFiles/sum.dir/sum.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sum.dir/sum.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs/sum.cc" > CMakeFiles/sum.dir/sum.cc.i

CMakeFiles/sum.dir/sum.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sum.dir/sum.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs/sum.cc" -o CMakeFiles/sum.dir/sum.cc.s

# Object files for target sum
sum_OBJECTS = \
"CMakeFiles/sum.dir/sum.cc.o"

# External object files for target sum
sum_EXTERNAL_OBJECTS =

sum: CMakeFiles/sum.dir/sum.cc.o
sum: CMakeFiles/sum.dir/build.make
sum: CMakeFiles/sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs/build-rel/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sum"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sum.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sum.dir/build: sum

.PHONY : CMakeFiles/sum.dir/build

CMakeFiles/sum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sum.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sum.dir/clean

CMakeFiles/sum.dir/depend:
	cd "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs/build-rel" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs" "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs" "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs/build-rel" "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs/build-rel" "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/buggy_programs/build-rel/CMakeFiles/sum.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/sum.dir/depend
