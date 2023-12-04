#ifndef DATA_PARSER_H
#define DATA_PARSER_H

#include <string>
#include <vector>
#include <variant>

class CSVobject {
    private:
        std::vector<std::string> columnLabels;
        std::vector<std::vector<std::string>> values;
    public:
        CSVobject(const std::string& data);
        std::vector<std::string> operator[](int index);
        int size();
};


class JSONobject {
    private:
        std::string key;
        std::vector<std::variant<bool*, int*, float*, char*, std::string*, JSONobject*>> value;

    public:
        JSONobject(const std::string& data);
        std::variant<bool*, int*, float*, char*, std::string*, JSONobject*> getValue(const std::string& key);
        std::variant<bool*, int*, float*, char*, std::string*, JSONobject*> operator[](const int index);
        std::variant<bool*, int*, float*, char*, std::string*, JSONobject*> operator[](const std::string& key);
        
        void tokenizer();
        void parse(const std::string& data);
};

#endif