#include <string>
#include <memory>

#include <iostream>

#include "dataReader/dataReader.hpp"

int main(int argc, char *argv[]) {
    std::unique_ptr<DataReader> dataReader(new DataReaderFile);
    std::string fileName = argv[1];
    std::string data = dataReader->read(fileName);

    std::cout << data << '\n';

    return 0;
}