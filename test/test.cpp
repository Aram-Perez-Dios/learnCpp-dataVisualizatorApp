/**
 * @file test.hpp
 * @author Aram Pérez Dios (aramperezdios@gmail.com)
 * @brief Tests for the different classes of the learnCPP-dataVisualizatorApp project
 * @version 1.0
 * @date 2024-22-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <string>
#include <iostream>
#include <gtest/gtest.h>

#include "../src/dataReader/file/file.hpp"
#include "../src/dataParser/csv/csv.hpp"

TEST(dataReaderTests, checkFileCanBeRead) {

    // Test class constructor which reads a file
    std::string fileName = "data/test/test-dataset.csv";
    std::string fileContent = "column1, column2, column3\n1,2,3\n4,5,6\n7,8,9";
    File file(fileName);
    std::string data = file.getData();

    EXPECT_EQ(data, fileContent);


    // test read() function with a new file
    fileName = "data/test/test-dataset.json";
    fileContent =  "{\n    \"column 1\": [1,2,3],\n    \"column 2\": [4,5,6],\n    \"column 3\": [7,8,9]\n}";
    file.read(fileName);
    data = file.getData();

    EXPECT_EQ(data, fileContent);

    // test for the function clear()
    fileContent = "";
    file.clear();
    data = file.getData();
    
    EXPECT_EQ(data, fileContent);
}