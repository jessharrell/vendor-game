# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/jess/PersonalProjects/vendor-game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jess/PersonalProjects/vendor-game/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/_fooTests.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/_fooTests.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/_fooTests.dir/flags.make

tests/CMakeFiles/_fooTests.dir/main.cpp.o: tests/CMakeFiles/_fooTests.dir/flags.make
tests/CMakeFiles/_fooTests.dir/main.cpp.o: ../tests/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jess/PersonalProjects/vendor-game/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/_fooTests.dir/main.cpp.o"
	cd /home/jess/PersonalProjects/vendor-game/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/_fooTests.dir/main.cpp.o -c /home/jess/PersonalProjects/vendor-game/tests/main.cpp

tests/CMakeFiles/_fooTests.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_fooTests.dir/main.cpp.i"
	cd /home/jess/PersonalProjects/vendor-game/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/jess/PersonalProjects/vendor-game/tests/main.cpp > CMakeFiles/_fooTests.dir/main.cpp.i

tests/CMakeFiles/_fooTests.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_fooTests.dir/main.cpp.s"
	cd /home/jess/PersonalProjects/vendor-game/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/jess/PersonalProjects/vendor-game/tests/main.cpp -o CMakeFiles/_fooTests.dir/main.cpp.s

tests/CMakeFiles/_fooTests.dir/main.cpp.o.requires:
.PHONY : tests/CMakeFiles/_fooTests.dir/main.cpp.o.requires

tests/CMakeFiles/_fooTests.dir/main.cpp.o.provides: tests/CMakeFiles/_fooTests.dir/main.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/_fooTests.dir/build.make tests/CMakeFiles/_fooTests.dir/main.cpp.o.provides.build
.PHONY : tests/CMakeFiles/_fooTests.dir/main.cpp.o.provides

tests/CMakeFiles/_fooTests.dir/main.cpp.o.provides.build: tests/CMakeFiles/_fooTests.dir/main.cpp.o

tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o: tests/CMakeFiles/_fooTests.dir/flags.make
tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o: ../tests/fooTests.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jess/PersonalProjects/vendor-game/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o"
	cd /home/jess/PersonalProjects/vendor-game/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/_fooTests.dir/fooTests.cpp.o -c /home/jess/PersonalProjects/vendor-game/tests/fooTests.cpp

tests/CMakeFiles/_fooTests.dir/fooTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_fooTests.dir/fooTests.cpp.i"
	cd /home/jess/PersonalProjects/vendor-game/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/jess/PersonalProjects/vendor-game/tests/fooTests.cpp > CMakeFiles/_fooTests.dir/fooTests.cpp.i

tests/CMakeFiles/_fooTests.dir/fooTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_fooTests.dir/fooTests.cpp.s"
	cd /home/jess/PersonalProjects/vendor-game/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/jess/PersonalProjects/vendor-game/tests/fooTests.cpp -o CMakeFiles/_fooTests.dir/fooTests.cpp.s

tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o.requires:
.PHONY : tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o.requires

tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o.provides: tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/_fooTests.dir/build.make tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o.provides.build
.PHONY : tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o.provides

tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o.provides.build: tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o

# Object files for target _fooTests
_fooTests_OBJECTS = \
"CMakeFiles/_fooTests.dir/main.cpp.o" \
"CMakeFiles/_fooTests.dir/fooTests.cpp.o"

# External object files for target _fooTests
_fooTests_EXTERNAL_OBJECTS =

bin/_fooTests: tests/CMakeFiles/_fooTests.dir/main.cpp.o
bin/_fooTests: tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o
bin/_fooTests: tests/CMakeFiles/_fooTests.dir/build.make
bin/_fooTests: lib/libgtest.a
bin/_fooTests: lib/libfoo.so
bin/_fooTests: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.2.1
bin/_fooTests: tests/CMakeFiles/_fooTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/_fooTests"
	cd /home/jess/PersonalProjects/vendor-game/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/_fooTests.dir/link.txt --verbose=$(VERBOSE)
	cd /home/jess/PersonalProjects/vendor-game/build/tests && ../bin/_fooTests /home/jess/PersonalProjects/vendor-game/build/bin

# Rule to build all files generated by this target.
tests/CMakeFiles/_fooTests.dir/build: bin/_fooTests
.PHONY : tests/CMakeFiles/_fooTests.dir/build

tests/CMakeFiles/_fooTests.dir/requires: tests/CMakeFiles/_fooTests.dir/main.cpp.o.requires
tests/CMakeFiles/_fooTests.dir/requires: tests/CMakeFiles/_fooTests.dir/fooTests.cpp.o.requires
.PHONY : tests/CMakeFiles/_fooTests.dir/requires

tests/CMakeFiles/_fooTests.dir/clean:
	cd /home/jess/PersonalProjects/vendor-game/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/_fooTests.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/_fooTests.dir/clean

tests/CMakeFiles/_fooTests.dir/depend:
	cd /home/jess/PersonalProjects/vendor-game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jess/PersonalProjects/vendor-game /home/jess/PersonalProjects/vendor-game/tests /home/jess/PersonalProjects/vendor-game/build /home/jess/PersonalProjects/vendor-game/build/tests /home/jess/PersonalProjects/vendor-game/build/tests/CMakeFiles/_fooTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/_fooTests.dir/depend

