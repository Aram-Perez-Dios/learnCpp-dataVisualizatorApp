#include <string>
#include <memory>

#include <iostream>

#include "dataReader/dataReader.hpp"
#include "dataObject/dataObject.hpp"

int main(int argc, char *argv[]) {
    if(argc > 1) {
        std::unique_ptr<DataReader> dataReader(new DataReaderFile);
        std::string fileName = argv[1];
        std::string data = dataReader->read(fileName);

        CSVobject csv(data);

        std::cout << csv[1][1] << '\n';
    }
    return 0;
}