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

# Include any dependencies generated for this target.
include CMakeFiles/JsonTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/JsonTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/JsonTest.dir/flags.make

CMakeFiles/JsonTest.dir/src/json.cpp.o: CMakeFiles/JsonTest.dir/flags.make
CMakeFiles/JsonTest.dir/src/json.cpp.o: ../src/json.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/JsonTest.dir/src/json.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JsonTest.dir/src/json.cpp.o -c /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/src/json.cpp

CMakeFiles/JsonTest.dir/src/json.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JsonTest.dir/src/json.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/src/json.cpp > CMakeFiles/JsonTest.dir/src/json.cpp.i

CMakeFiles/JsonTest.dir/src/json.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JsonTest.dir/src/json.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/src/json.cpp -o CMakeFiles/JsonTest.dir/src/json.cpp.s

# Object files for target JsonTest
JsonTest_OBJECTS = \
"CMakeFiles/JsonTest.dir/src/json.cpp.o"

# External object files for target JsonTest
JsonTest_EXTERNAL_OBJECTS =

JsonTest: CMakeFiles/JsonTest.dir/src/json.cpp.o
JsonTest: CMakeFiles/JsonTest.dir/build.make
JsonTest: CMakeFiles/JsonTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable JsonTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JsonTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/JsonTest.dir/build: JsonTest

.PHONY : CMakeFiles/JsonTest.dir/build

CMakeFiles/JsonTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/JsonTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/JsonTest.dir/clean

CMakeFiles/JsonTest.dir/depend:
	cd /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build /Users/roccoferrante/Dropbox/Coding/C++/DevTools/JsonTest/build/CMakeFiles/JsonTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/JsonTest.dir/depend

