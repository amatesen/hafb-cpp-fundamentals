/**
 * @file case.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
using namespace std;



int main()
{
   char code;
   cout << "Enter the specification code: " ;
   cin >> code;

  // == operator to compare values
  // == when comparing characters use a single ticks ''
  //if(code == "S")
  // {            (const char [37])
   //         cout << "The item is space exploration grade" << endl;
  // }
  //Use a switch statement
  switch (code)
  {
    case 'S':           //like an IF statement with OR case (||)
        cout << "The item is space exploration grade." << endl;
        break;  // Exit your switch statement

    case 'M':
        cout << "The item is military grade." << endl;
        break;  // Exit your switch statement

    

    case 'C':
        cout << "The item is commercial grade." << endl;
        break;  // Exit your switch statement

    default:    // like an ELSE statement
        cout << "The item not supported"
        break;

  }

    return 0;
}