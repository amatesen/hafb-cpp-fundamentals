#pragma once
#include <iostream>
class Distance
{
private:
    int feet_;
    float inches_;

public:
    Distance() : feet_(0), inches_(0) {}
    Distance(int feet, float inches) : feet_(feet), inches_(inches) {}
    Distance(const Distance& dist);     // Copy Constructor
    ~Distance(){}
    // Getter & Setters
    int feet() const {return feet_;}
    void set_feet(int feet)  {feet_ = feet;}

    float inches() const {return inches_;}
    void set_inches(float inches)  {inches_ = inches;}
    // Other Methods
    void ShowDist() const;

    Distance operator + (Distance rhs) const;
    friend std::ostream& operator <<(std::ostream& os, const Distance& distance);
    // Task 1: create the - operator
    // Distance operator - (Distance rhs) const;
    friend Distance operator - (Distance lhs, Distance rhs); // friend operator
    // Task 2: create a update_distance(feet, inches) function to update fields using setters
    void update_distance(int ft, float in);
    bool operator < (Distance rhs) const; // compare objects
    bool operator == (Distance rhs) const; // compare objects

    Distance operator = (Distance& rhs);
};