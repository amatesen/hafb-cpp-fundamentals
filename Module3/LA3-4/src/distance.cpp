#include <iostream>
#include "distance.h"

/**
 * @brief Show the distance and inches in:
 * feet'-inches" format.
 * 
 */
void Distance::ShowDist() const
{
    std::cout << feet() << "\'-" << inches() << "\"" << std::endl; 
}

/**
 * @brief Plus + Operator for Distance objects
 * 
 * @param d2 Second Distance object
 * @return Distance : Sum of self + d2 objects
 */
Distance Distance::operator + (Distance rhs) const
{
    int feet = feet_ + rhs.feet_;
    float inches = inches_ + rhs.inches_;
    // Update values IF inches > 12
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    // Distance temp(feet, inches);
    // return temp;
    return Distance(feet, inches);
}

std::ostream& operator <<(std::ostream& os, const Distance& distance)
{
    // NOT to include a '\n' or endl character
    os << "feet: " << distance.feet_ << " inches: " << distance.inches_;
    return os;
}

// Distance Distance::operator - (Distance rhs) const
Distance operator - (Distance lhs, Distance rhs) // friend operator
{
    int ft = lhs.feet_ - rhs.feet_;
    float in = 0;
    // Update values IF inches > 12
    if(lhs.inches_ < rhs.inches_)
    {
        ft -= 1; 
        in  = (lhs.inches_ + 12) - rhs.inches_;
    }
    return Distance(ft, in);
}

void Distance::update_distance(int ft, float in)
{
    set_feet(ft);
    set_inches(in);
}
   
bool Distance:: operator < (Distance rhs) const
{
    float ft1 = feet_ + inches_/12.0;           // convert inches to feet 
    float ft2 = rhs.feet_ + rhs.inches_/12.0; 
    if(ft1 < ft2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Distance::operator == (Distance rhs) const // compare objects
{
    float ft1 = feet_ + inches_/12.0;           // convert inches to feet 
    float ft2 = rhs.feet_ + rhs.inches_/12.0; 
    
    return(ft1 == ft2) ? true : false;
}

Distance Distance::operator = (Distance& rhs)
{
    std::cout<<"Assignment operator invoked!"<< std::endl;
    feet_ = rhs.feet_;
    inches_ = rhs.inches_;
    return Distance(feet_, inches_);
}

// Copy Constructor
Distance::Distance(const Distance& dist)     // Copy Constructor
{
    std::cout<<"Copy constructor invoked" << std::endl;
    feet_ = dist.feet_;
    inches_ = dist.inches_;
}