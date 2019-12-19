// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
#include "distance.h"

void Distance::ShowDist() const
{
    std::cout << feet() << "\'-" << inches() << "\"" << std::endl;
}

/**
 * @brief 
 * 
 * @param d2 
 * @return Distance 
 */
Distance Distance::operator+(Distance rhs) const
{

    int feet = feet_ + rhs.inches_;
    float inches = inches_ + rhs.inches_;
    // Update values IF inches > 12
    if (inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    //Distance temp(feet, inches);
    //return temp;
    return Distance(feet, inches);
}


std::ostream &operator <<( std::ostream& os, const Distance& distance)
{
    // NOT to include a '\n' or endl character
    os << "feet: " << distance.feet_ << "inches: " , distance.inches_;
    return os;
}

Distance Distance::operator-(Distance rhs) const
{

    int ft = feet_ + rhs.inches_;
    float in = inches_ + rhs.inches_;
    // Update values IF inches > 12
    if (in >= 12.0)
    {
        in -= 12.0;
        ft++;
    }
    //Distance temp(feet, inches);
    //return temp;
    return Distance(ft, in);
}