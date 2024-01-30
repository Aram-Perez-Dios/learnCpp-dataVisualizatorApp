/**
 * @file file.hpp
 * @author Aram Pérez Dios (aramperezdios@gmail.com)
 * @brief Classes to read data from a file
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
 * @brief Class to read a file
 */
class File {
    private:
        /** @brief Attribute storing the retrieved raw data */
        std::string data;
    
    public:        
        /**
         * @brief Constructor method initialize empty file object
         */
        File(void);

        /**
         * @brief Constructor method to read a file and retrieve the data inside
         * @param filePath <const std::string&> Relative path to file
         */
        File(const std::string& filePath);

        /**
         * @brief Get the Data object
         * @return <std::string> Data retrieved 
         */
        std::string getData();

        /**
         * @brief Method to read a file and retrieve the data inside
         * @param filePath <const std::string&> Relative path to file
         */
        void read(const std::string& filePath);

        /**
         * @brief Method to clear the object
         */
        void clear();
};

#endif