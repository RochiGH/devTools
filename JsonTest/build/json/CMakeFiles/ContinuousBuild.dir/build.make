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
CMAKE_SOURCE_DIR = /Users/roccoferrante/Dropbox/Coding/C++/JsonTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/build

# Utility rule file for ContinuousBuild.

# Include the progress variables for this target.
include json/CMakeFiles/ContinuousBuild.dir/progress.make

json/CMakeFiles/ContinuousBuild:
	cd /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/build/json && /Applications/CMake.app/Contents/bin/ctest -D ContinuousBuild

ContinuousBuild: json/CMakeFiles/ContinuousBuild
ContinuousBuild: json/CMakeFiles/ContinuousBuild.dir/build.make

.PHONY : ContinuousBuild

# Rule to build all files generated by this target.
json/CMakeFiles/ContinuousBuild.dir/build: ContinuousBuild

.PHONY : json/CMakeFiles/ContinuousBuild.dir/build

json/CMakeFiles/ContinuousBuild.dir/clean:
	cd /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/build/json && $(CMAKE_COMMAND) -P CMakeFiles/ContinuousBuild.dir/cmake_clean.cmake
.PHONY : json/CMakeFiles/ContinuousBuild.dir/clean

json/CMakeFiles/ContinuousBuild.dir/depend:
	cd /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/roccoferrante/Dropbox/Coding/C++/JsonTest /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/build /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/build/json /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/build/json/CMakeFiles/ContinuousBuild.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : json/CMakeFiles/ContinuousBuild.dir/depend
