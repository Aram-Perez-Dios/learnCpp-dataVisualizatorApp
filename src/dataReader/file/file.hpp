/**
 * @file dataReader.hpp
 * @author Aram Pérez Dios (aramperezdios@gmail.com)
 * @brief Classes to read data from different sources
 * @version 0.1
 * @date 2023-12-08
 * 
 * @copyright Copyright (c) 2023
 */

#ifndef FILE_H
#define FILE_H

#include <string>
#include <fstream>

/**
 * @class File
 * @pure
 * @brief Abstract class to represent an object that reads information from a soruce
 */
class File {
    private:
        /** @brief attribute storing the retrieved raw data */
        std::string data;
    
    public:
        /**
         * @brief Method to read a file retrieve the data inside of it
         * @param fileName <const std::string&>   Name of the file
         */
        File(const std::string& fileName);

        /**
         * @brief Get the Data object
         * @return <std::string>    Data retrieved 
         */
        std::string getData();
};

#endif