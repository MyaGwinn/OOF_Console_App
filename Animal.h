#ifndef ANIMAL_H
#define ANIMAL_H
#include "Points.h"

// LO2
class Animal :
    public Points
{
private: // Cannot be accessed by any other classes
  char user_input = '0';

public: // Open to all classes
  auto question1(float* pts) -> float;
};

#endif /* ANIMAL_H */