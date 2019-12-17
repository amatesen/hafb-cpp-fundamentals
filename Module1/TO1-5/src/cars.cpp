#include <iostream>
#include "cars.h"
int HorsePower()   //No name space
{
  return 150;  
}

// using namespace lamborghini;
int lamborghini ::HorsePower()
{
    return 760
}
void lamborghini :: cout()
{
    std::cout << "Super car" << std :: end1;
}
// using namespace porsche;
int porsche :: HorsePower()
{
    return 500
}