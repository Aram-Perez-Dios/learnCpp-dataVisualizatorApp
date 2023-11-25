cmake_minimum_required(VERSION 3.22.1)

project(server VERSION 0.2.0)

# C++ standard in use
set(CMAKE_CXX_STANDARD 23)

# Executable name
set(EXECUTABLE_NAME "visualizator.exe")

# executable on example main directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

# create executable
add_executable(${EXECUTABLE_NAME} src/main.cpp)

# gcc compiler options
#   -g to generate data for debugger
#   -Wall to display hidden all warnings
target_compile_options(${EXECUTABLE_NAME} PRIVATE -Wall -g)

add_subdirectory(src)