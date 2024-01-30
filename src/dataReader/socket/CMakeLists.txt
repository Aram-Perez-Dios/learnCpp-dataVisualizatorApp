add_library(socket
    socket.hpp
    socket.cpp
)

target_link_libraries(${EXECUTABLE_NAME} socket)