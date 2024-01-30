/**
 * @file csv.cpp
 * @author Aram Pérez Dios (aramperezdios@gmail.com)
 * @brief Class to parse a string as an csv object
 * @version 1.0
 * @date 2023-12-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "csv.hpp"

/**
 * @brief Constructor method to parse a string into a csv object
 * @param data <const std::string&> string containing
 */
CSV::CSV(const std::string& data):
    columnsCount(0)
{
    values.push_back(std::vector<std::string>());
    std::string::const_iterator dataIt = data.cbegin();
    const std::string::const_iterator dataCend = data.cend();
    int row = 0;

    while(dataIt < dataCend) {
        const std::regex valueToken("^(\".*?\"|[^,]*)");
        const char valueSeparatorToken = ',';
        const char rowSeparatorToken = '\n';
        const std::string emptyValue = "";

        std::smatch matchToken;
        if(std::regex_search(dataIt, dataCend, matchToken, valueToken)) {
            values[values.size() - 1].push_back(matchToken[0]);
            dataIt += matchToken[row].length();}
        else {values[row].push_back(emptyValue);}
        
        if(*dataIt == valueSeparatorToken) {row++;}
        else if(*dataIt == rowSeparatorToken) {
            values.push_back(std::vector<std::string>());
            
            int columnSize = values[row].size();
            if(columnsCount < columnSize) {columnsCount = columnSize;}
            row = 0;
        }
        dataIt++;
    }
}
/**
 * @brief Method to return a row
 * @param index <const int> index of row
 * @return <std::vector<std::string>> Row of values at index
 */
std::vector<std::string> CSV::operator[](const int index) {return values[index];}

/**
 * @brief Get number of columns of the csv
 * @return <int> 
 */
int CSV::getNumberOfColumns() {return columnsCount;}

/**
 * @brief Get number of rows stored
 * @return <int> 
 */
int CSV::getNumberOfRows() {return values.size();}