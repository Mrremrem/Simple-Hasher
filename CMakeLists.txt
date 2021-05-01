# cmake version
cmake_minimum_required(VERSION 3.1)

# sets the project name
project(StringHasher VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_STANDARD_REQUIRED True)

# adds Stephan Brumme's hash library
add_subdirectory(HashLibrary)

# EXTRA_LIBS and EXTRA_INCLUDES are variables
list(APPEND EXTRA_LIBS HashLibrary)

# adds an executable
add_executable(StringHasher main.cpp)

# just add graphics window and system
target_link_libraries(StringHasher PUBLIC ${EXTRA_LIBS})

# adds directory to path to search for include files
target_include_directories(StringHasher PUBLIC "${PROJECT_BINARY_DIR}")
