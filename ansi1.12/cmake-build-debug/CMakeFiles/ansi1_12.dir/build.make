# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /opt/clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kamila/CLionProjects/ansi1.12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kamila/CLionProjects/ansi1.12/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ansi1_12.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ansi1_12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ansi1_12.dir/flags.make

CMakeFiles/ansi1_12.dir/main.c.o: CMakeFiles/ansi1_12.dir/flags.make
CMakeFiles/ansi1_12.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamila/CLionProjects/ansi1.12/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ansi1_12.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ansi1_12.dir/main.c.o   -c /home/kamila/CLionProjects/ansi1.12/main.c

CMakeFiles/ansi1_12.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ansi1_12.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kamila/CLionProjects/ansi1.12/main.c > CMakeFiles/ansi1_12.dir/main.c.i

CMakeFiles/ansi1_12.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ansi1_12.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kamila/CLionProjects/ansi1.12/main.c -o CMakeFiles/ansi1_12.dir/main.c.s

CMakeFiles/ansi1_12.dir/main.c.o.requires:

.PHONY : CMakeFiles/ansi1_12.dir/main.c.o.requires

CMakeFiles/ansi1_12.dir/main.c.o.provides: CMakeFiles/ansi1_12.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/ansi1_12.dir/build.make CMakeFiles/ansi1_12.dir/main.c.o.provides.build
.PHONY : CMakeFiles/ansi1_12.dir/main.c.o.provides

CMakeFiles/ansi1_12.dir/main.c.o.provides.build: CMakeFiles/ansi1_12.dir/main.c.o


# Object files for target ansi1_12
ansi1_12_OBJECTS = \
"CMakeFiles/ansi1_12.dir/main.c.o"

# External object files for target ansi1_12
ansi1_12_EXTERNAL_OBJECTS =

ansi1_12: CMakeFiles/ansi1_12.dir/main.c.o
ansi1_12: CMakeFiles/ansi1_12.dir/build.make
ansi1_12: CMakeFiles/ansi1_12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kamila/CLionProjects/ansi1.12/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ansi1_12"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ansi1_12.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ansi1_12.dir/build: ansi1_12

.PHONY : CMakeFiles/ansi1_12.dir/build

CMakeFiles/ansi1_12.dir/requires: CMakeFiles/ansi1_12.dir/main.c.o.requires

.PHONY : CMakeFiles/ansi1_12.dir/requires

CMakeFiles/ansi1_12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ansi1_12.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ansi1_12.dir/clean

CMakeFiles/ansi1_12.dir/depend:
	cd /home/kamila/CLionProjects/ansi1.12/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kamila/CLionProjects/ansi1.12 /home/kamila/CLionProjects/ansi1.12 /home/kamila/CLionProjects/ansi1.12/cmake-build-debug /home/kamila/CLionProjects/ansi1.12/cmake-build-debug /home/kamila/CLionProjects/ansi1.12/cmake-build-debug/CMakeFiles/ansi1_12.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ansi1_12.dir/depend

