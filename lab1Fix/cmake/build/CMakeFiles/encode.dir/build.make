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
CMAKE_SOURCE_DIR = "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake/build"

# Include any dependencies generated for this target.
include CMakeFiles/encode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/encode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/encode.dir/flags.make

CMakeFiles/encode.dir/encode.cc.o: CMakeFiles/encode.dir/flags.make
CMakeFiles/encode.dir/encode.cc.o: ../encode.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/encode.dir/encode.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/encode.dir/encode.cc.o -c "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake/encode.cc"

CMakeFiles/encode.dir/encode.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/encode.dir/encode.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake/encode.cc" > CMakeFiles/encode.dir/encode.cc.i

CMakeFiles/encode.dir/encode.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/encode.dir/encode.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake/encode.cc" -o CMakeFiles/encode.dir/encode.cc.s

# Object files for target encode
encode_OBJECTS = \
"CMakeFiles/encode.dir/encode.cc.o"

# External object files for target encode
encode_EXTERNAL_OBJECTS =

encode: CMakeFiles/encode.dir/encode.cc.o
encode: CMakeFiles/encode.dir/build.make
encode: liblab1/libcoding.a
encode: CMakeFiles/encode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable encode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/encode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/encode.dir/build: encode

.PHONY : CMakeFiles/encode.dir/build

CMakeFiles/encode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/encode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/encode.dir/clean

CMakeFiles/encode.dir/depend:
	cd "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake" "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake" "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake/build" "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake/build" "/mnt/c/Users/co7647ng/Program/Visual Studio Projects/C++ Course/lab1Fix/cmake/build/CMakeFiles/encode.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/encode.dir/depend

