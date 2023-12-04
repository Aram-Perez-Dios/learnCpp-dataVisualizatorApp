#include "dataReader.hpp"

std::string DataReaderFile::read(const std::string& fileName) {
    data = "";
    
    std::ifstream file(fileName);
    if (file.is_open()) {
        while(!file.eof()) {data += file.get();}
        data.pop_back();
    }
    file.close();

    return data;
}

std::string DataReaderFile::getData() {return data;}