/*
** carton.h for hafb-cpp-fundamentals in c:\Users\CCEClass1.AD\Documents\hafb-cpp-fundamentals\Module2\LA2-4\src
**
** Made by 
** Login   <>
**
** Started on  Wed Dec 18 9:35:53 AM 2019 
** Last update Thu Dec 18 10:16:51 AM 2019 
*/

#ifndef CARTON_H_
# define CARTON_H_
#pragma once
#include <iostream>

class Carton
{
    private:
        double length_;
        double width_;
        double height_;


    public:
        // Static constants
        static const double kMaxsize;
        static const double kMinlength;
        static const double kMinWidth;
        static const double kMinHeight;

        // Constructor: build/create your object
        Carton();
        Carton(double length, double width, double height);
        ~Carton();

        double length();
        double width();
        double height();

    // Setters    
    void set_length(double length);
    void set_width(double width);
    void set_height(double height);

    // Other Methods
    void SetMeasurements( double length, double width, double height);
    void ShowInfo();
    double Volume() const;
    void WriteData(std::ostream &out) const;
};          // must have ;

#endif /* !CARTON_H_ */
