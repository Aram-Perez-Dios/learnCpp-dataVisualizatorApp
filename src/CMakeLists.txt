# name of the main program executable
set(EXECUTABLE_NAME "visualizator.exe")

# executable on example main directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

# create main program executable
add_executable(${EXECUTABLE_NAME} main.cpp)

# gcc compiler options
#   -g to generate data for debugger
#   -Wall to display hidden all warnings
target_compile_options(${EXECUTABLE_NAME} PRIVATE -Wall -Werror -Wextra -g -O1)

# source code subdirectories dependencies
add_subdirectory(dataReader)
add_subdirectory(dataParser)