#include "dataObject.hpp"

CSVobject::CSVobject(const std::string& data) {
    int index = 0;
    int columnsCount = 0;
    std::string word = "";

    while(data[index] != '\n') {
        if(data[index] != ';') {word += data[index];}
        else {
            columnLabels.push_back(word);
            columnsCount++;
            word = "";
        }
        index++;
    }
    word = "";
    columnLabels.push_back(word);
    columnsCount++;

    for(int i = 0; i < columnsCount; i++) {values.push_back(std::vector<std::string>());}
    int columnIndex = 0;

    while(index < data.size()) {        
        switch(data[index]) {
            case ';':
                values[columnIndex].push_back(word);
                word = "";
                columnIndex++;
                break;
            case '\n':
                word = "";
                columnIndex = 0;
                break;
            default:
                word += data[index];
                break;
        }
        index++;
    }
}

std::vector<std::string> CSVobject::operator[](int index) {return values[index];}

int CSVobject::size() {return columnLabels.size();}