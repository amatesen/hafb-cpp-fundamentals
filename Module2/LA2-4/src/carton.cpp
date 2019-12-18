#include "carton.h"
#include <iostream>

        // Do not use the static keyword
        const double Carton::kMaxsize   = 10;
        const double Carton::kMinlength = 10;
        const double Carton::kMinWidth  = 11;
        const double Carton::kMinHeight = 11;


// Constructors have access to private data members
/**
 * @brief Construct a new Carton:: Carton object
 * 
 */
Carton::Carton()
{
    height_= 0;
    width_ = 0;
    length_= 0;
}

double Carton::length()
{
    return length_;
}

double Carton::width()
{
    return width_;
}

double Carton::height()
{
    return height_;
}

void Carton::set_length(double length)
{
    length_=length;
}

void Carton::set_width(double width)
{
    width_=width;
}

void Carton::set_height(double height)
{
    height_=height;
}

void Carton::ShowInfo()
{
    std::cout << "Box width: " << width() << std::endl;
    std::cout << "Box length: " << length() << std::endl;
    std::cout << "Box height: " << height() << std::endl;
    std::cout << "Box Volume: " << Volume() << std::endl;


}
// Second Constructor
Carton::Carton(double length, double width, double height)
{
    SetMeasurements(length, width, height);
}

Carton::~Carton()
{

}
void Carton::SetMeasurements( double length, double width, double height)
{
    if(length <=0 || width <=0 || height <=0)
    {
        throw std::out_of_range("All measurements must be greater than zero");
    }
    // Good to Go
    length_ = length;
    width_  = width;
    height_ = height;
}

double Carton::Volume() const
{
    return length_* width_ * height_;
}
