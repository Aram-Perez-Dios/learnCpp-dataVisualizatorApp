add_library(json
    json.hpp
    json.cpp
)

target_link_libraries(${EXECUTABLE_NAME} PRIVATE json)