#include "csv.hpp"

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

std::vector<std::string> CSV::operator[](const int index) {return values[index];}

int CSV::getNumberOfColumns() {return columnsCount;}

int CSV::getNumberOfRows() {return values.size();}