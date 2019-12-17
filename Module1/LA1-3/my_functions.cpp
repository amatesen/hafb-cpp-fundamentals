#include <iostream>
#include "my_functions.h"
using namespace std;

/**
 * @brief sum two numbers
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int Sum(int num1, int num2){
    return num1 + num2;
}

/**
 * @brief 
 * 
 * @param step 
 */
void UpdateStep(int& step) // take the address of the parameter
{
    cout << "Current step: " << step << endl;
    step += 1;
    cout << "New step: " << step << endl;
}