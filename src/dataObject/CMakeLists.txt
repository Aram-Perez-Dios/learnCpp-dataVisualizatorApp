add_library(dataObject
    dataObject.hpp
    dataObject.cpp
)

target_link_libraries(${EXECUTABLE_NAME} PRIVATE dataObject)