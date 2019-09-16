# Specify the minimum version for CMake
cmake_minimum_required(VERSION 2.8)

# Require C++11.
# Change this value to require other C++ standards (14, 17, etc.)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED)

# Project's name
project(fltk)

FIND_PACKAGE(FLTK REQUIRED)
FIND_PACKAGE(OpenGL REQUIRED)


#Bring the headers, such as Student.h into the project 
include_directories(include)
include_directories(/usr/local/Cellar/fltk/1.3.5/include/FL)
 
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")
 
add_executable(fltk ${SOURCES})


