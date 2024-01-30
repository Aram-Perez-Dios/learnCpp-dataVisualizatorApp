/**
 * @file file.cpp
 * @author Aram Pérez Dios (aramperezdios@gmail.com)
 * @brief Classes to read data from a file
 * @version 0.1
 * @date 2023-12-08
 * 
 * @copyright Copyright (c) 2023
 */

#include "file.hpp"

/**
 * @brief Constructor method initialize empty file object
 */
File::File(void) {}

/**
 * @brief @brief Constructor method to read a file and retrieve the data inside
 * @param filePath <const std::string&> Relative path to file
 */
File::File(const std::string& filePath) {read(filePath);}

/**
 * @brief Get the Data object
 * @return <std::string> Data retrieved 
 */
std::string File::getData() {return data;}


/**
 * @brief Method to read a file and retrieve the data inside
 * @param filePath <const std::string&> Relative path to file
 */
void File::read(const std::string& filePath) {
    data.clear();
    
    std::ifstream file(filePath);
    if (file.is_open()) {
        while(!file.eof()) {data += file.get();}
        data.pop_back();
    }
    file.close();
}

/**
 * @brief Method to clear the object
 */
void File::clear() {data.clear();}