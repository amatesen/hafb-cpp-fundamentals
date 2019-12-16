#include <iostream>
using namespace std;



int main()
{
    int age;    //int: signed integers
    // cout: for system output

    
    
    std::cout << "Now inside VSCode and github" << std::endl;
    cout << "Another line uder namespace std" << endl;
    cout << " wildcats" << "" << "WSU" <<"Ogden" << endl;
    // cin: for system/user input
    cout << "What is your age?" << endl;
    cin >> age;
    cout << "I see you are: " << age << endl;

    cout << "Integers are: " << sizeof(int) << " bytes." << endl;
    cout << "Min Integer value: " << INT32_MIN <<
        " Max Integers value: "  << INT32_MAX << " bytes." << endl;

    return 0;
}
