#include "carton_fileio.h"
#include <fstream>      


std::string ReadDataFormatFile(std::string filename, 
            std::array<Carton, kMaxArraySize>& cartons,
            int& rec_num)
{
    std::ifstream file(filename);
    if(file.fail())
    {
        return "Unable to open file";
    }
    // Good to Go
    std::string message = "";
    double side1, side2, side3;     //read data from file
    // Load data
    while(rec_num < kMaxArraySize && file >> side1)
    {
        file >> side2 >> side3;
        //Load data into array
        cartons[rec_num] = Carton(side1, side2, side3);
        rec_num +=1; // keep track of # of records loaded from file
    }
    file.close();
    return message;
}

void WriteDataToFile(std::string filename,
            const std::array<Carton, kMaxArraySize>& cartons,
            int rec_num)
{
    std::ofstream file_out(filename);

    for(int index = 0; index < rec_num; ++index)
    {
        cartons[index].WriteData(file_out);
    }
}