/**
 * @file main.cpp
 * @author Aram Pérez Dios (aramperezdios@gmail.com)
 * @brief Small application for the visualization of data generating simple graphs. 
 *        All of this with the objective of learning and applying multiple C++ concepts. 
 * @version 0.1
 * @date 2023-12-08
 * 
 * @copyright Copyright (c) 2023
 */

#include <string>
#include <memory>

#include <iostream>

#include "dataReader/file/file.hpp"
#include "dataParser/csv/csv.hpp"

/**
 * @brief Data visualizator program's main function 
 * @param argc  <const int>      Command line arguments count
 * @param argv  <const char*>    Command line arguments array
 * @return      <int>            Program's execution return value
 */
int main(const int argc, const char *argv[]) {
    if(argc > 1) {
        std::string fileName = argv[1];
        File file(fileName);
        std::string data = file.getData();

        CSV csv(data);

        //std::cout << data << '\n';
        std::cout << csv.getNumberOfRows() << '\n';
    }
    return 0;
}