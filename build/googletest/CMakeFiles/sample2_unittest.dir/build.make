# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ludovicdelisle/ClionProjects/neurons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ludovicdelisle/ClionProjects/neurons/build

# Include any dependencies generated for this target.
include googletest/CMakeFiles/sample2_unittest.dir/depend.make

# Include the progress variables for this target.
include googletest/CMakeFiles/sample2_unittest.dir/progress.make

# Include the compile flags for this target's objects.
include googletest/CMakeFiles/sample2_unittest.dir/flags.make

googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o: googletest/CMakeFiles/sample2_unittest.dir/flags.make
googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o: ../googletest/samples/sample2_unittest.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ludovicdelisle/ClionProjects/neurons/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o"
	cd /Users/ludovicdelisle/ClionProjects/neurons/build/googletest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o -c /Users/ludovicdelisle/ClionProjects/neurons/googletest/samples/sample2_unittest.cc

googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.i"
	cd /Users/ludovicdelisle/ClionProjects/neurons/build/googletest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ludovicdelisle/ClionProjects/neurons/googletest/samples/sample2_unittest.cc > CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.i

googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.s"
	cd /Users/ludovicdelisle/ClionProjects/neurons/build/googletest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ludovicdelisle/ClionProjects/neurons/googletest/samples/sample2_unittest.cc -o CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.s

googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o.requires:

.PHONY : googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o.requires

googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o.provides: googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o.requires
	$(MAKE) -f googletest/CMakeFiles/sample2_unittest.dir/build.make googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o.provides.build
.PHONY : googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o.provides

googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o.provides.build: googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o


googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o: googletest/CMakeFiles/sample2_unittest.dir/flags.make
googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o: ../googletest/samples/sample2.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ludovicdelisle/ClionProjects/neurons/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o"
	cd /Users/ludovicdelisle/ClionProjects/neurons/build/googletest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o -c /Users/ludovicdelisle/ClionProjects/neurons/googletest/samples/sample2.cc

googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample2_unittest.dir/samples/sample2.cc.i"
	cd /Users/ludovicdelisle/ClionProjects/neurons/build/googletest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ludovicdelisle/ClionProjects/neurons/googletest/samples/sample2.cc > CMakeFiles/sample2_unittest.dir/samples/sample2.cc.i

googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample2_unittest.dir/samples/sample2.cc.s"
	cd /Users/ludovicdelisle/ClionProjects/neurons/build/googletest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ludovicdelisle/ClionProjects/neurons/googletest/samples/sample2.cc -o CMakeFiles/sample2_unittest.dir/samples/sample2.cc.s

googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o.requires:

.PHONY : googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o.requires

googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o.provides: googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o.requires
	$(MAKE) -f googletest/CMakeFiles/sample2_unittest.dir/build.make googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o.provides.build
.PHONY : googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o.provides

googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o.provides.build: googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o


# Object files for target sample2_unittest
sample2_unittest_OBJECTS = \
"CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o" \
"CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o"

# External object files for target sample2_unittest
sample2_unittest_EXTERNAL_OBJECTS =

googletest/sample2_unittest: googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o
googletest/sample2_unittest: googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o
googletest/sample2_unittest: googletest/CMakeFiles/sample2_unittest.dir/build.make
googletest/sample2_unittest: googletest/libgtest_main.a
googletest/sample2_unittest: googletest/libgtest.a
googletest/sample2_unittest: googletest/CMakeFiles/sample2_unittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ludovicdelisle/ClionProjects/neurons/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable sample2_unittest"
	cd /Users/ludovicdelisle/ClionProjects/neurons/build/googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sample2_unittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
googletest/CMakeFiles/sample2_unittest.dir/build: googletest/sample2_unittest

.PHONY : googletest/CMakeFiles/sample2_unittest.dir/build

googletest/CMakeFiles/sample2_unittest.dir/requires: googletest/CMakeFiles/sample2_unittest.dir/samples/sample2_unittest.cc.o.requires
googletest/CMakeFiles/sample2_unittest.dir/requires: googletest/CMakeFiles/sample2_unittest.dir/samples/sample2.cc.o.requires

.PHONY : googletest/CMakeFiles/sample2_unittest.dir/requires

googletest/CMakeFiles/sample2_unittest.dir/clean:
	cd /Users/ludovicdelisle/ClionProjects/neurons/build/googletest && $(CMAKE_COMMAND) -P CMakeFiles/sample2_unittest.dir/cmake_clean.cmake
.PHONY : googletest/CMakeFiles/sample2_unittest.dir/clean

googletest/CMakeFiles/sample2_unittest.dir/depend:
	cd /Users/ludovicdelisle/ClionProjects/neurons/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ludovicdelisle/ClionProjects/neurons /Users/ludovicdelisle/ClionProjects/neurons/googletest /Users/ludovicdelisle/ClionProjects/neurons/build /Users/ludovicdelisle/ClionProjects/neurons/build/googletest /Users/ludovicdelisle/ClionProjects/neurons/build/googletest/CMakeFiles/sample2_unittest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : googletest/CMakeFiles/sample2_unittest.dir/depend

