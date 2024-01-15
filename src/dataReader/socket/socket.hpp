/**
 * @file socket.hpp
 * @author Aram Pérez Dios (aramperezdios@gmail.com)
 * @brief Classes to read data from a socket
 * @version 0.1
 * @date 2024-01-03
 * 
 * @copyright Copyright (c) 2023
 */

#ifndef SOCKET_H
#define SOCKET_H

#include <string>

/**
 * @class DataReaderSocket
 * @brief Class to read data from a socket
 */
class Socket {
    private:
        /** @brief attribute storing the retrieved raw data */
        std::string data;
        
    public:
        Socket();

        /**
         * @brief Get the Data object
         * @return <std::string> data retrieved from the 
         */
        std::string getData();
};

#endif