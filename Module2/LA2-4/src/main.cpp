#include <iostream>
#include "carton.h"
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
// Carton box3(6,89,11);

//box3.ShowInfo();

std::array<Carton, kMaxSize> boxes;
boxes[0] = Carton(11,13,12);
boxes[0].ShowInfo();
boxes[1].ShowInfo();

  
  // add some valid elements to the array

  // loop through the array

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