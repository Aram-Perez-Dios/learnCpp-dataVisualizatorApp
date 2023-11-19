add_library(dataReader
    dataReader.hpp
    dataReaderFile.cpp
    dataReaderSocket.cpp
)

target_link_libraries(${EXECUTABLE_NAME} PRIVATE dataReader)