/**
 * @file dataReaderFile.cpp
 * @author Aram Pérez Dios (aramperezdios@gmail.com)
 * @brief Classes to read data from different sources
 * @version 0.1
 * @date 2023-12-08
 * 
 * @copyright Copyright (c) 2023
 */

#include "file.hpp"

File::File(const std::string& fileName):
    data("")
{
    std::ifstream file(fileName);
    if (file.is_open()) {
        while(!file.eof()) {data += file.get();}
        data.pop_back();
    }
    file.close();
}

std::string File::getData() {return data;}