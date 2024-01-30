/**
 * @file csv.hpp
 * @author Aram Pérez Dios (aramperezdios@gmail.com)
 * @brief Class to parse a string as an csv object
 * @version 1.0
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

/**
 * @class CSV
 * @brief Class to parse a string into a csv object
 */
class CSV {
    private:
        /** @brief Number of columns of the csv object */
        int columnsCount;
        
        /** @brief Matrix with all values stored as strings */
        std::vector<std::vector<std::string>> values;
        
    public:
        /**
         * @brief Constructor method to parse a string into a csv object
         * @param data <const std::string&> string containing
         */
        CSV(const std::string& data);

        /**
         * @brief Method to return a row
         * @param index <const int> index of row
         * @return <std::vector<std::string>> Row of values at index
         */
        std::vector<std::string> operator[](const int index);

        /**
         * @brief Get number of columns of the csv
         * @return <int> 
         */
        int getNumberOfColumns();

        /**
         * @brief Get number of rows stored
         * @return <int> 
         */
        int getNumberOfRows();
};

#endif