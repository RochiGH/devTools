# CMake generated Testfile for 
# Source directory: /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_import_minver
# Build directory: /Users/roccoferrante/Dropbox/Coding/C++/JsonTest/build/json/test/cmake_import_minver
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cmake_import_minver_configure "/Applications/CMake.app/Contents/bin/cmake" "-G" "Unix Makefiles" "-Dnlohmann_json_DIR=/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/build/json" "/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_import_minver/project")
set_tests_properties(cmake_import_minver_configure PROPERTIES  FIXTURES_SETUP "cmake_import_minver" _BACKTRACE_TRIPLES "/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_import_minver/CMakeLists.txt;1;add_test;/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_import_minver/CMakeLists.txt;0;")
add_test(cmake_import_minver_build "/Applications/CMake.app/Contents/bin/cmake" "--build" ".")
set_tests_properties(cmake_import_minver_build PROPERTIES  FIXTURES_REQUIRED "cmake_import_minver" _BACKTRACE_TRIPLES "/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_import_minver/CMakeLists.txt;7;add_test;/Users/roccoferrante/Dropbox/Coding/C++/JsonTest/json/test/cmake_import_minver/CMakeLists.txt;0;")
