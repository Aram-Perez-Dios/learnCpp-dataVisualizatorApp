#include "dataReader.hpp"

std::string DataReaderFile::read(const std::string& fileName) {
    data = "";
    
    std::ifstream file(fileName);
    if (file.is_open()) {
        while(!file.eof()) {
            std::string line;
            file >> line;
            data += line;
        }
    }
    file.close();

    return data;
}

std::string DataReaderFile::getData() {return data;}