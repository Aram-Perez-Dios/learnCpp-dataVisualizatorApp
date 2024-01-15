/**
 * @file dataParser.hpp
 * @author Aram Pérez Dios (aramperezdios@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef JSON_H
#define JSON_H

#include <memory>

#include <string>
#include <unordered_map>
#include <variant>

#include <regex>

class JSON {
    private:
        std::unordered_map<std::string, std::variant<std::unique_ptr<std::string>, std::unique_ptr<JSON>>> value;
    
    public:
        JSON(const std::string& data);
        std::string to_string();
        
        template<typename T>
        std::string getValue();
        template<typename T>
        T operator[](const int index);
        template<typename T>
        T operator[](const std::string& key);
        
        void parse();
};

#endif