#include "factor.h"
#include <iostream>
using namespace std;

/**
 * @brief  Calculate the number of instances divisible
 * by 3 in the range 1 through 30
 * 
 */

void FactorModX(int mod_number){
    int count = 0;
    for (int i = 1; i<= 30; ++i){
        if (i % mod_number == 0)
        count++;
    
    }
    cout << "count : " << count << endl;
}
/**
 * @brief 
 * 
 * @param mod_number 
 * @param max_range 
 */

void FactorModXRange(int mod_number, int max_range){
     int count = 0;
    for (int i = 1; i<= max_range; ++i){
        if (i% mod_number == 0)
        count++;
    
    }
    cout << "count : " << count << endl;
}
/**
 * @brief 
 * 
 * @param mod_number 
 * @param max_range 
 * @return int 
 */
int GetFactorModXRange(int mod_number, int max_range){
    int count = 0;
    for (int i = 1; i<= max_range; ++i){
        if (i% mod_number == 0)
        count++;
    
    }
    return count;
}