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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tristan/RUPA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tristan/RUPA/build

# Utility rule file for rupa-pot-update.

# Include the progress variables for this target.
include CMakeFiles/rupa-pot-update.dir/progress.make

CMakeFiles/rupa-pot-update: po/rupa_pi.pot.dummy
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tristan/RUPA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "[rupa_pi]-pot-update: Done."

po/rupa_pi.pot.dummy: ../po/POTFILES.in
po/rupa_pi.pot.dummy: ../po/rupa_pi.pot
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tristan/RUPA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "rupa-pot-update [rupa_pi]: Generated pot file."
	cd /home/tristan/RUPA && /usr/bin/xgettext --force-po --package-name=rupa_pi --package-version="1.9.055" --output=po/rupa_pi.pot --keyword=_ --width=80 --files-from=/home/tristan/RUPA/po/POTFILES.in

rupa-pot-update: CMakeFiles/rupa-pot-update
rupa-pot-update: po/rupa_pi.pot.dummy
rupa-pot-update: CMakeFiles/rupa-pot-update.dir/build.make

.PHONY : rupa-pot-update

# Rule to build all files generated by this target.
CMakeFiles/rupa-pot-update.dir/build: rupa-pot-update

.PHONY : CMakeFiles/rupa-pot-update.dir/build

CMakeFiles/rupa-pot-update.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rupa-pot-update.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rupa-pot-update.dir/clean

CMakeFiles/rupa-pot-update.dir/depend:
	cd /home/tristan/RUPA/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tristan/RUPA /home/tristan/RUPA /home/tristan/RUPA/build /home/tristan/RUPA/build /home/tristan/RUPA/build/CMakeFiles/rupa-pot-update.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rupa-pot-update.dir/depend

