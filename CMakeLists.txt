# Minimum version of CMake as required by bsf
cmake_minimum_required (VERSION 3.9.0)

# Name of your project
project (myProject)

# Make sure to use the C++14 standard
set(CMAKE_CXX_STANDARD 14)

# Build an executable from the provided C++ files
add_executable(myApp "Main.cpp")

# Path to where you have installed bsf
set(bsf_INSTALL_DIR "D:/Programming/C++/Libraries/bsf/")

# Let CMake know where to find the Findbsf.cmake file (at current folder)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}")

# Find bsf libraries and headers
find_package(bsf REQUIRED)

# Link bsf library with your application
target_link_libraries(myApp PRIVATE bsf)