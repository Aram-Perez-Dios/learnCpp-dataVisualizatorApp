/**
 * @file dataParser.hpp
 * @author Aram Pérez Dios (aramperezdios@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef CSV_H
#define CSV_H

#include <string>
#include <vector>
#include <regex>

#include <iostream>

class CSV {
    private:
        int columnsCount;
        std::vector<std::vector<std::string>> values;
        
    public:
        CSV(const std::string& data);
        std::vector<std::string> operator[](const int index);
        int getValueAt();
        int getNumberOfColumns();
        int getNumberOfRows();
};

#endif