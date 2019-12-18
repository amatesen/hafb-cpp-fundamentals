#include <iostream>
#include "carton.h"
#include "carton_fileio.h"
#include <array>
const int kMaxSize = 10;

// using namespace std;

int main() {
  // create a Carton object using the default constructor
//   Carton box = Carton();
  
//   std::cout << "Box height: " << box.height() << std::endl;
//   std::cout << "Box width: " << box.width() << std::endl;
//   std::cout << "Box length: " << box.length() << std::endl;

//   box.ShowInfo();  // display object
//   box.set_length (10);
//   box.set_width (13);
//   box.set_height (12.5);
//   box.ShowInfo(); 
//   // create a Carton object using the other constructor
//   Carton box2(-5,89,11);
//   box2.ShowInfo();
//   // create an array of Cartons
//Carton box3(6,89,11);

//box3.ShowInfo();

std::array<Carton, kMaxArraySize> boxes;
//boxes[0] = Carton(11,13,12);

// Read data from file
std::string message;
int record_size = 0;

message = ReadDataFormatFile("../carton_data.txt", boxes, record_size);
std::cout << message << std::endl;


  // add some valid elements to the array

  // loop through the array
std::cout << "\nPrinting Array: " << std::endl;
// for(auto box : boxes)
for(auto index = 0; index < record_size; ++index)
{
  boxes[index].ShowInfo();
}

WriteDataToFile("../data.cvs", boxes, record_size);
  // print out the volume of packages

  // print out the girth of packages

  // print out the length plus girth of packages

  // check if package is sized to ship

  // define a package that is too big to ship

  // define a package that is too small to ship

  // print if sized to ship

  // write carton data and information

  // read data from file

  // write data to file

  return 0;
}