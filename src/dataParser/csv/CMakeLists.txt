add_library(csv
    csv.hpp
    csv.cpp
)

target_link_libraries(${EXECUTABLE_NAME} PRIVATE csv)