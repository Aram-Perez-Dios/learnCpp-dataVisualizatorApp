add_library(file
    file.hpp
    file.cpp
)

target_link_libraries(${EXECUTABLE_NAME} file)