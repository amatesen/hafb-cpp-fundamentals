#include <iostream>
#include "factor.h"
using namespace std;
int main (){
   
    FactorModX(3);
    FactorModX(5);
    FactorModXRange(5, 500);
    int count = GetFactorModXRange (5, 500);
    cout << "You got: " << count << endl;
    auto count2 = GetFactorModXRange(2, 500);
    cout << "you got: " << count2 << endl;
    return 0;
}