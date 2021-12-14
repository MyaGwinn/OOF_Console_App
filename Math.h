#ifndef MATH_H
#define MATH_H

#include "Points.h"
#include <cstdlib>

// LO2
class Math :
    public Points
{
private: // Cannot be accessed by any other classes
  int num1 = 0;
  int num2 = 0;
  char user_input = '0';

public: // Open to all classes
  auto question3(float *pts) -> float;
};

#endif /* MATH_H */