#include <iostream>

#include <iostream>
#include "cars.h"
// using namespace std;
// using namespace lamborghini;
// using porsche::HorsePower;


int main() 
{
    std::cout << "The lamborghini's horse power: " << lamborghini::HorsePower() << std::endl;
    lamborghini :: cout();
    std::cout << "The porsche's horse power: " << porsche::HorsePower() << std::endl;
    //porsche :: cout();
    std::cout << "A regular car's horse power: " << ::HorsePower() << std::endl;
    return 0;
}
