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
CMAKE_SOURCE_DIR = /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/build

# Include any dependencies generated for this target.
include CMakeFiles/nodeGenerator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nodeGenerator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nodeGenerator.dir/flags.make

CMakeFiles/nodeGenerator.dir/src/mainApp.cpp.o: CMakeFiles/nodeGenerator.dir/flags.make
CMakeFiles/nodeGenerator.dir/src/mainApp.cpp.o: ../src/mainApp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nodeGenerator.dir/src/mainApp.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nodeGenerator.dir/src/mainApp.cpp.o -c /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/src/mainApp.cpp

CMakeFiles/nodeGenerator.dir/src/mainApp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nodeGenerator.dir/src/mainApp.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/src/mainApp.cpp > CMakeFiles/nodeGenerator.dir/src/mainApp.cpp.i

CMakeFiles/nodeGenerator.dir/src/mainApp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nodeGenerator.dir/src/mainApp.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/src/mainApp.cpp -o CMakeFiles/nodeGenerator.dir/src/mainApp.cpp.s

CMakeFiles/nodeGenerator.dir/src/nodeLibrary.cpp.o: CMakeFiles/nodeGenerator.dir/flags.make
CMakeFiles/nodeGenerator.dir/src/nodeLibrary.cpp.o: ../src/nodeLibrary.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/nodeGenerator.dir/src/nodeLibrary.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nodeGenerator.dir/src/nodeLibrary.cpp.o -c /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/src/nodeLibrary.cpp

CMakeFiles/nodeGenerator.dir/src/nodeLibrary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nodeGenerator.dir/src/nodeLibrary.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/src/nodeLibrary.cpp > CMakeFiles/nodeGenerator.dir/src/nodeLibrary.cpp.i

CMakeFiles/nodeGenerator.dir/src/nodeLibrary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nodeGenerator.dir/src/nodeLibrary.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/src/nodeLibrary.cpp -o CMakeFiles/nodeGenerator.dir/src/nodeLibrary.cpp.s

# Object files for target nodeGenerator
nodeGenerator_OBJECTS = \
"CMakeFiles/nodeGenerator.dir/src/mainApp.cpp.o" \
"CMakeFiles/nodeGenerator.dir/src/nodeLibrary.cpp.o"

# External object files for target nodeGenerator
nodeGenerator_EXTERNAL_OBJECTS =

nodeGenerator: CMakeFiles/nodeGenerator.dir/src/mainApp.cpp.o
nodeGenerator: CMakeFiles/nodeGenerator.dir/src/nodeLibrary.cpp.o
nodeGenerator: CMakeFiles/nodeGenerator.dir/build.make
nodeGenerator: CMakeFiles/nodeGenerator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable nodeGenerator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nodeGenerator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nodeGenerator.dir/build: nodeGenerator

.PHONY : CMakeFiles/nodeGenerator.dir/build

CMakeFiles/nodeGenerator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nodeGenerator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nodeGenerator.dir/clean

CMakeFiles/nodeGenerator.dir/depend:
	cd /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/build /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/build /Users/roccoferrante/Dropbox/Coding/C++/devTools/nodeGenerator/build/CMakeFiles/nodeGenerator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nodeGenerator.dir/depend

