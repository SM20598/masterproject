# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lastsean/CLionProjects/pybindtesting1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lastsean/CLionProjects/pybindtesting1/build/temp.linux-x86_64-3.10/cmake_example

# Include any dependencies generated for this target.
include CMakeFiles/funcs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/funcs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/funcs.dir/flags.make

CMakeFiles/funcs.dir/functions/a_2_1.cpp.o: CMakeFiles/funcs.dir/flags.make
CMakeFiles/funcs.dir/functions/a_2_1.cpp.o: ../../../functions/a_2_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lastsean/CLionProjects/pybindtesting1/build/temp.linux-x86_64-3.10/cmake_example/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/funcs.dir/functions/a_2_1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/funcs.dir/functions/a_2_1.cpp.o -c /home/lastsean/CLionProjects/pybindtesting1/functions/a_2_1.cpp

CMakeFiles/funcs.dir/functions/a_2_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/funcs.dir/functions/a_2_1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lastsean/CLionProjects/pybindtesting1/functions/a_2_1.cpp > CMakeFiles/funcs.dir/functions/a_2_1.cpp.i

CMakeFiles/funcs.dir/functions/a_2_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/funcs.dir/functions/a_2_1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lastsean/CLionProjects/pybindtesting1/functions/a_2_1.cpp -o CMakeFiles/funcs.dir/functions/a_2_1.cpp.s

# Object files for target funcs
funcs_OBJECTS = \
"CMakeFiles/funcs.dir/functions/a_2_1.cpp.o"

# External object files for target funcs
funcs_EXTERNAL_OBJECTS =

libfuncs.a: CMakeFiles/funcs.dir/functions/a_2_1.cpp.o
libfuncs.a: CMakeFiles/funcs.dir/build.make
libfuncs.a: CMakeFiles/funcs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lastsean/CLionProjects/pybindtesting1/build/temp.linux-x86_64-3.10/cmake_example/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libfuncs.a"
	$(CMAKE_COMMAND) -P CMakeFiles/funcs.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/funcs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/funcs.dir/build: libfuncs.a

.PHONY : CMakeFiles/funcs.dir/build

CMakeFiles/funcs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/funcs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/funcs.dir/clean

CMakeFiles/funcs.dir/depend:
	cd /home/lastsean/CLionProjects/pybindtesting1/build/temp.linux-x86_64-3.10/cmake_example && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lastsean/CLionProjects/pybindtesting1 /home/lastsean/CLionProjects/pybindtesting1 /home/lastsean/CLionProjects/pybindtesting1/build/temp.linux-x86_64-3.10/cmake_example /home/lastsean/CLionProjects/pybindtesting1/build/temp.linux-x86_64-3.10/cmake_example /home/lastsean/CLionProjects/pybindtesting1/build/temp.linux-x86_64-3.10/cmake_example/CMakeFiles/funcs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/funcs.dir/depend

