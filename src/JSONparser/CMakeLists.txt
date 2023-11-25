add_library(JSONparser
    JSONparser.hpp
    JSONparser.cpp
)

target_link_libraries(${EXECUTABLE_NAME} PRIVATE JSONparser)