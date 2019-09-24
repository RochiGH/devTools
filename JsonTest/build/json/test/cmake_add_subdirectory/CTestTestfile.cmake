# CMake generated Testfile for 
# Source directory: /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_add_subdirectory
# Build directory: /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/build/json/test/cmake_add_subdirectory
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cmake_add_subdirectory_configure "/Applications/CMake.app/Contents/bin/cmake" "-G" "Unix Makefiles" "-Dnlohmann_json_source=/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json" "/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_add_subdirectory/project")
set_tests_properties(cmake_add_subdirectory_configure PROPERTIES  FIXTURES_SETUP "cmake_add_subdirectory" _BACKTRACE_TRIPLES "/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_add_subdirectory/CMakeLists.txt;1;add_test;/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_add_subdirectory/CMakeLists.txt;0;")
add_test(cmake_add_subdirectory_build "/Applications/CMake.app/Contents/bin/cmake" "--build" ".")
set_tests_properties(cmake_add_subdirectory_build PROPERTIES  FIXTURES_REQUIRED "cmake_add_subdirectory" _BACKTRACE_TRIPLES "/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_add_subdirectory/CMakeLists.txt;7;add_test;/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_add_subdirectory/CMakeLists.txt;0;")
