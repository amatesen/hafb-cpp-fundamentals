#include "containers.h"
#include "csvstream.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>

void Load_Data(std::vector<Data> &data, const std::string &input_file)
{
    csvstream csvinput(inputfile);   //Open file
  // // Rows have a key = column name, value = cell data
    std::map<std::string, std::string> row;

  // // Extract the animal column
    while (csvinput >> row)
  {
    std::cout << row["ID"] << "," << row["name"] << "," << row["animal"] std::endl;
    temp.id = row["id"];
    temp.id = row["name"];
    temp.id = row["animal"];
    data.push_back(temp); // Load Data into vector

  }
}