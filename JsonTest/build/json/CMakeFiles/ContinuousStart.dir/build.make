# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build

# Utility rule file for ContinuousStart.

# Include the progress variables for this target.
include json/CMakeFiles/ContinuousStart.dir/progress.make

json/CMakeFiles/ContinuousStart:
	cd /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build/json && /Applications/CMake.app/Contents/bin/ctest -D ContinuousStart

ContinuousStart: json/CMakeFiles/ContinuousStart
ContinuousStart: json/CMakeFiles/ContinuousStart.dir/build.make

.PHONY : ContinuousStart

# Rule to build all files generated by this target.
json/CMakeFiles/ContinuousStart.dir/build: ContinuousStart

.PHONY : json/CMakeFiles/ContinuousStart.dir/build

json/CMakeFiles/ContinuousStart.dir/clean:
	cd /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build/json && $(CMAKE_COMMAND) -P CMakeFiles/ContinuousStart.dir/cmake_clean.cmake
.PHONY : json/CMakeFiles/ContinuousStart.dir/clean

json/CMakeFiles/ContinuousStart.dir/depend:
	cd /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/json /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build/json /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build/json/CMakeFiles/ContinuousStart.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : json/CMakeFiles/ContinuousStart.dir/depend

