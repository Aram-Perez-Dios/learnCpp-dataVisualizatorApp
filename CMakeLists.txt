cmake_minimum_required(VERSION 3.22.1)

project(server VERSION 1.0.0)

# C++ default standard to use
set(CMAKE_CXX_STANDARD 23)

# source code directory
add_subdirectory(src)

# tests directory (googletest)
add_subdirectory(test)