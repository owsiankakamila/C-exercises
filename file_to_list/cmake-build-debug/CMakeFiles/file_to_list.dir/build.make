# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/kamila/clion-2017.3.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/kamila/clion-2017.3.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kamila/CLionProjects/file_to_list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kamila/CLionProjects/file_to_list/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/file_to_list.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/file_to_list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/file_to_list.dir/flags.make

CMakeFiles/file_to_list.dir/main.c.o: CMakeFiles/file_to_list.dir/flags.make
CMakeFiles/file_to_list.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamila/CLionProjects/file_to_list/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/file_to_list.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/file_to_list.dir/main.c.o   -c /home/kamila/CLionProjects/file_to_list/main.c

CMakeFiles/file_to_list.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/file_to_list.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kamila/CLionProjects/file_to_list/main.c > CMakeFiles/file_to_list.dir/main.c.i

CMakeFiles/file_to_list.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/file_to_list.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kamila/CLionProjects/file_to_list/main.c -o CMakeFiles/file_to_list.dir/main.c.s

CMakeFiles/file_to_list.dir/main.c.o.requires:

.PHONY : CMakeFiles/file_to_list.dir/main.c.o.requires

CMakeFiles/file_to_list.dir/main.c.o.provides: CMakeFiles/file_to_list.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/file_to_list.dir/build.make CMakeFiles/file_to_list.dir/main.c.o.provides.build
.PHONY : CMakeFiles/file_to_list.dir/main.c.o.provides

CMakeFiles/file_to_list.dir/main.c.o.provides.build: CMakeFiles/file_to_list.dir/main.c.o


# Object files for target file_to_list
file_to_list_OBJECTS = \
"CMakeFiles/file_to_list.dir/main.c.o"

# External object files for target file_to_list
file_to_list_EXTERNAL_OBJECTS =

file_to_list: CMakeFiles/file_to_list.dir/main.c.o
file_to_list: CMakeFiles/file_to_list.dir/build.make
file_to_list: CMakeFiles/file_to_list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kamila/CLionProjects/file_to_list/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable file_to_list"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/file_to_list.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/file_to_list.dir/build: file_to_list

.PHONY : CMakeFiles/file_to_list.dir/build

CMakeFiles/file_to_list.dir/requires: CMakeFiles/file_to_list.dir/main.c.o.requires

.PHONY : CMakeFiles/file_to_list.dir/requires

CMakeFiles/file_to_list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/file_to_list.dir/cmake_clean.cmake
.PHONY : CMakeFiles/file_to_list.dir/clean

CMakeFiles/file_to_list.dir/depend:
	cd /home/kamila/CLionProjects/file_to_list/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kamila/CLionProjects/file_to_list /home/kamila/CLionProjects/file_to_list /home/kamila/CLionProjects/file_to_list/cmake-build-debug /home/kamila/CLionProjects/file_to_list/cmake-build-debug /home/kamila/CLionProjects/file_to_list/cmake-build-debug/CMakeFiles/file_to_list.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/file_to_list.dir/depend

