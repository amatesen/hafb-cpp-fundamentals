#pragma once
#include <iostream>

class Counter
{
private:
   
    unsigned int count_ ;

public:
    Counter::Counter() : count_(0) {}

    ~Counter(){std::cout << "Bye\n";}
    // Setter & getter
    unsigned int count() {return count_;}
    void set_count(unsigned int count){count_ = count;}
    // Operator overloads
    //void operator ++() { ++count_;}

    Counter operator ++();      //prefix
    
};

