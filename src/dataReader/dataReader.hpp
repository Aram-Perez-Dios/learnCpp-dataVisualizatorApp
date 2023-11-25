#ifndef DATA_READER_H
#define DATA_READER_H

#include <string>
#include <fstream>



class DataReader {
    protected:
        std::string data;
    
    public:
        virtual std::string read(const std::string& fileName) = 0;
};



class DataReaderFile: public DataReader {
    public:
        std::string read(const std::string& fileName);
        std::string getData();
};

#endif