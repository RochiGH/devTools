# CMake generated Testfile for 
# Source directory: /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_import
# Build directory: /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/build/json/test/cmake_import
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cmake_import_configure "/Applications/CMake.app/Contents/bin/cmake" "-G" "Unix Makefiles" "-Dnlohmann_json_DIR=/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/build/json" "/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_import/project")
set_tests_properties(cmake_import_configure PROPERTIES  FIXTURES_SETUP "cmake_import" _BACKTRACE_TRIPLES "/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_import/CMakeLists.txt;1;add_test;/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_import/CMakeLists.txt;0;")
add_test(cmake_import_build "/Applications/CMake.app/Contents/bin/cmake" "--build" ".")
set_tests_properties(cmake_import_build PROPERTIES  FIXTURES_REQUIRED "cmake_import" _BACKTRACE_TRIPLES "/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_import/CMakeLists.txt;7;add_test;/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_import/CMakeLists.txt;0;")
