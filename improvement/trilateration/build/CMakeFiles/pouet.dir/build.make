# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/jack/Tristan/gpadsl/sandbox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jack/Tristan/gpadsl/sandbox/build

# Include any dependencies generated for this target.
include CMakeFiles/pouet.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pouet.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pouet.dir/flags.make

CMakeFiles/pouet.dir/main.o: CMakeFiles/pouet.dir/flags.make
CMakeFiles/pouet.dir/main.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jack/Tristan/gpadsl/sandbox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pouet.dir/main.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pouet.dir/main.o -c /home/jack/Tristan/gpadsl/sandbox/main.cpp

CMakeFiles/pouet.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pouet.dir/main.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jack/Tristan/gpadsl/sandbox/main.cpp > CMakeFiles/pouet.dir/main.i

CMakeFiles/pouet.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pouet.dir/main.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jack/Tristan/gpadsl/sandbox/main.cpp -o CMakeFiles/pouet.dir/main.s

CMakeFiles/pouet.dir/main.o.requires:

.PHONY : CMakeFiles/pouet.dir/main.o.requires

CMakeFiles/pouet.dir/main.o.provides: CMakeFiles/pouet.dir/main.o.requires
	$(MAKE) -f CMakeFiles/pouet.dir/build.make CMakeFiles/pouet.dir/main.o.provides.build
.PHONY : CMakeFiles/pouet.dir/main.o.provides

CMakeFiles/pouet.dir/main.o.provides.build: CMakeFiles/pouet.dir/main.o


CMakeFiles/pouet.dir/Position.o: CMakeFiles/pouet.dir/flags.make
CMakeFiles/pouet.dir/Position.o: ../Position.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jack/Tristan/gpadsl/sandbox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/pouet.dir/Position.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pouet.dir/Position.o -c /home/jack/Tristan/gpadsl/sandbox/Position.cpp

CMakeFiles/pouet.dir/Position.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pouet.dir/Position.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jack/Tristan/gpadsl/sandbox/Position.cpp > CMakeFiles/pouet.dir/Position.i

CMakeFiles/pouet.dir/Position.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pouet.dir/Position.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jack/Tristan/gpadsl/sandbox/Position.cpp -o CMakeFiles/pouet.dir/Position.s

CMakeFiles/pouet.dir/Position.o.requires:

.PHONY : CMakeFiles/pouet.dir/Position.o.requires

CMakeFiles/pouet.dir/Position.o.provides: CMakeFiles/pouet.dir/Position.o.requires
	$(MAKE) -f CMakeFiles/pouet.dir/build.make CMakeFiles/pouet.dir/Position.o.provides.build
.PHONY : CMakeFiles/pouet.dir/Position.o.provides

CMakeFiles/pouet.dir/Position.o.provides.build: CMakeFiles/pouet.dir/Position.o


CMakeFiles/pouet.dir/Trilateration.o: CMakeFiles/pouet.dir/flags.make
CMakeFiles/pouet.dir/Trilateration.o: ../Trilateration.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jack/Tristan/gpadsl/sandbox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/pouet.dir/Trilateration.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pouet.dir/Trilateration.o -c /home/jack/Tristan/gpadsl/sandbox/Trilateration.cpp

CMakeFiles/pouet.dir/Trilateration.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pouet.dir/Trilateration.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jack/Tristan/gpadsl/sandbox/Trilateration.cpp > CMakeFiles/pouet.dir/Trilateration.i

CMakeFiles/pouet.dir/Trilateration.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pouet.dir/Trilateration.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jack/Tristan/gpadsl/sandbox/Trilateration.cpp -o CMakeFiles/pouet.dir/Trilateration.s

CMakeFiles/pouet.dir/Trilateration.o.requires:

.PHONY : CMakeFiles/pouet.dir/Trilateration.o.requires

CMakeFiles/pouet.dir/Trilateration.o.provides: CMakeFiles/pouet.dir/Trilateration.o.requires
	$(MAKE) -f CMakeFiles/pouet.dir/build.make CMakeFiles/pouet.dir/Trilateration.o.provides.build
.PHONY : CMakeFiles/pouet.dir/Trilateration.o.provides

CMakeFiles/pouet.dir/Trilateration.o.provides.build: CMakeFiles/pouet.dir/Trilateration.o


# Object files for target pouet
pouet_OBJECTS = \
"CMakeFiles/pouet.dir/main.o" \
"CMakeFiles/pouet.dir/Position.o" \
"CMakeFiles/pouet.dir/Trilateration.o"

# External object files for target pouet
pouet_EXTERNAL_OBJECTS =

pouet: CMakeFiles/pouet.dir/main.o
pouet: CMakeFiles/pouet.dir/Position.o
pouet: CMakeFiles/pouet.dir/Trilateration.o
pouet: CMakeFiles/pouet.dir/build.make
pouet: CMakeFiles/pouet.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jack/Tristan/gpadsl/sandbox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable pouet"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pouet.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pouet.dir/build: pouet

.PHONY : CMakeFiles/pouet.dir/build

CMakeFiles/pouet.dir/requires: CMakeFiles/pouet.dir/main.o.requires
CMakeFiles/pouet.dir/requires: CMakeFiles/pouet.dir/Position.o.requires
CMakeFiles/pouet.dir/requires: CMakeFiles/pouet.dir/Trilateration.o.requires

.PHONY : CMakeFiles/pouet.dir/requires

CMakeFiles/pouet.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pouet.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pouet.dir/clean

CMakeFiles/pouet.dir/depend:
	cd /home/jack/Tristan/gpadsl/sandbox/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jack/Tristan/gpadsl/sandbox /home/jack/Tristan/gpadsl/sandbox /home/jack/Tristan/gpadsl/sandbox/build /home/jack/Tristan/gpadsl/sandbox/build /home/jack/Tristan/gpadsl/sandbox/build/CMakeFiles/pouet.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pouet.dir/depend

