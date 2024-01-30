enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# name of the tests program executable
set(TESTS_EXECUTABLE_NAME "tests.exe")

# executable on example main directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

# create tests program executable
add_executable(${TESTS_EXECUTABLE_NAME} test.cpp)

# gcc compiler options
#   -g to generate data for debugger
#   -Wall to display hidden all warnings
target_compile_options(${TESTS_EXECUTABLE_NAME} PRIVATE -Wall -Werror -Wextra -g)

# add target to create tests program
target_link_libraries(${TESTS_EXECUTABLE_NAME} gtest_main)

# depenendencies of project to test
target_link_libraries(${TESTS_EXECUTABLE_NAME} file)
#target_link_libraries(${TESTS_EXECUTABLE_NAME} csv)


#add_test(NAME example_test COMMAND example)