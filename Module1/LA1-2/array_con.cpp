/**
 * @file array_con.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <array>        //array container
using namespace std;

int main()
{
    // to create arrays with library:
    // array < type, numOfElements> name;
    array<double, 5 > grades;

    cout << "Size of array: " << grades.size() << endl;
    for (int index = 0; index < grades.size(); ++index)

    // For each loop
    cout << "For each: " << endl;
    for(auto grade : grades)
    {
        cout << grade << endl;
    }
    return 0;
}