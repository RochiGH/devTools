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
CMAKE_SOURCE_DIR = /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build

# Include any dependencies generated for this target.
include CMakeFiles/fltk.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fltk.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fltk.dir/flags.make

CMakeFiles/fltk.dir/src/fltkLibrary.cpp.o: CMakeFiles/fltk.dir/flags.make
CMakeFiles/fltk.dir/src/fltkLibrary.cpp.o: ../src/fltkLibrary.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fltk.dir/src/fltkLibrary.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fltk.dir/src/fltkLibrary.cpp.o -c /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/src/fltkLibrary.cpp

CMakeFiles/fltk.dir/src/fltkLibrary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fltk.dir/src/fltkLibrary.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/src/fltkLibrary.cpp > CMakeFiles/fltk.dir/src/fltkLibrary.cpp.i

CMakeFiles/fltk.dir/src/fltkLibrary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fltk.dir/src/fltkLibrary.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/src/fltkLibrary.cpp -o CMakeFiles/fltk.dir/src/fltkLibrary.cpp.s

CMakeFiles/fltk.dir/src/mainApp.cpp.o: CMakeFiles/fltk.dir/flags.make
CMakeFiles/fltk.dir/src/mainApp.cpp.o: ../src/mainApp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/fltk.dir/src/mainApp.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fltk.dir/src/mainApp.cpp.o -c /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/src/mainApp.cpp

CMakeFiles/fltk.dir/src/mainApp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fltk.dir/src/mainApp.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/src/mainApp.cpp > CMakeFiles/fltk.dir/src/mainApp.cpp.i

CMakeFiles/fltk.dir/src/mainApp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fltk.dir/src/mainApp.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/src/mainApp.cpp -o CMakeFiles/fltk.dir/src/mainApp.cpp.s

# Object files for target fltk
fltk_OBJECTS = \
"CMakeFiles/fltk.dir/src/fltkLibrary.cpp.o" \
"CMakeFiles/fltk.dir/src/mainApp.cpp.o"

# External object files for target fltk
fltk_EXTERNAL_OBJECTS =

fltk: CMakeFiles/fltk.dir/src/fltkLibrary.cpp.o
fltk: CMakeFiles/fltk.dir/src/mainApp.cpp.o
fltk: CMakeFiles/fltk.dir/build.make
fltk: CMakeFiles/fltk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable fltk"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fltk.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fltk.dir/build: fltk

.PHONY : CMakeFiles/fltk.dir/build

CMakeFiles/fltk.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fltk.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fltk.dir/clean

CMakeFiles/fltk.dir/depend:
	cd /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build/CMakeFiles/fltk.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fltk.dir/depend
