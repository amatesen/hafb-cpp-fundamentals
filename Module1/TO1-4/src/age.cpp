#include "age.h"

// age.cpp
void ByValueAgeIn5Years(int& age) 
{
    age += 5;
}

int CurrentAge(int age) 
{
  return age;
}