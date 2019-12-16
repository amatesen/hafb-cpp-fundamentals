#include <iostream>
using namespace std;
const float kMetertoInches  =     39.37;
const float kkilotopounds   =     2.204;
const float kBMIImperial    =       703;
const float klowBMILimit    =       18.5;
const float khighBMILimit   =       18.5;

int main ()
{
    // Calculate BMI: weight(kg)/[height (m)}^2
    // Floating point variables: float, double
    float weight = 0, height= 0, bmi= 0;

   cout << "Welcome to the BMI program!" << endl;
   cout << "Enter your Weight in kg?" << endl;
    cin >> weight;
        
    cout << "What is your Height in meters?" << endl;
    cin >> height;
   // calculate bmi

    bmi = weight/(height* height);
    cout << "Your BMI is: " << bmi << endl;

    //Calculate BMI imperial : weight(lbs) *703)/ [height (in)]^2
    // 1 meter = 39.37 inches
    // 1 kg = 2.204 lbs.

    weight = weight * kkilotopounds;
    height = height * kMetertoInches;
    bmi = (weight * kBMIImperial)/(height *height);
    cout << "Your BMI (imperial) is: " << bmi << endl;

    // Print if they are in a good range: BMI is in the 18.5 to 24.9
    if (bmi > klowBMILimit && bmi < khighBMILimit)
    {
        cout << "Your BMI " << bmi << " is good" << endl;
    }
    else
    {
        cout << "Your BMI " << bmi << " is bad" << endl;
    }
    
    cout << "Thanks for using BMI program" << endl;    
    return 0;
}