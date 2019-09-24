# Specify the minimum version for CMake
cmake_minimum_required(VERSION 2.8)
cmake_policy(SET CMP0048 NEW)

# Require C++11.
# Change this value to require other C++ standards (14, 17, etc.)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED)

# Project's name
project(JsonTest VERSION 0.0.1 LANGUAGES CXX)

include_directories(include)
add_subdirectory(json) 

file(GLOB SOURCES "src/*.cpp")
add_executable(JsonTest ${SOURCES})

target_link_libraries(JsonTest PRIVATE nlohmann_json)
