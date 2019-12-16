/**
 * @file my_array.cpp
 * @author your name (you@domain.com)
 * @brief Learn about C-Style arrays
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
using namespace std;

const int kMaxNum = 5;
int main()
{
    // C-Style
    // Array notation: type  name[elements];
    // To access elements, use Index notation: begins at 0
    int grades[kMaxNum] = {10, 20, 30, 10, 50};  // an array of 5 integers
    // int grades[] = {10, 20, 30, 10, 50};  // an array of 5 integers set by the compiler
    // int grades[kMaxNum] = {10, 20, 30};  // an array of 5 integers, initialize 3, rest are set to zero
    float average = 0;
    int sum = 0;
    cout<<"Enter your exam grades" << endl;
    for(int num = 0; num < kMaxNum; ++num)
    {
        cout << grades[num] << endl;
        // cout << "Enter "<< num + 1 << " grade: " << endl;
        // cin >> grades[num]; // access each element using []
        // average = average + grades[num]; 
        average += grades[num]; 
        sum += grades[num]; 
    }
    average = average/kMaxNum;
    cout << "Your avg is: " << average << endl;
    // Cast or change variable type from integer to float to preserve fraction
    // static_cast<type>(variable)
    average = static_cast<float>(sum)/kMaxNum;  
    cout << "Your avg is: " << average << endl;

    // 2D Arrays: type name[row][col]
    int bi_array[3][5] = {
        {2, 4, 6, 11, 67},
        {4, 5, 22, 33, 99},
        {89, 33, 22, 11, 0}
    };
    // Print each element in the array
    for(int row = 0; row < 3; ++row)
    {
        for(int column = 0; column < 5; ++column)
        {
            cout << "Array element at [" << row << "]"
                 << "[" << column << "]" << bi_array[row][column] << endl;
        }
    }


    return 0;
}