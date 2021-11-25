#pragma once
#ifndef MATH_H
#define MATH_H

#include "Points.h"
#include <stdlib.h>

class Math :
    public Points
{
private: // Cannot be accessed by any other classes
  int num1 = 0;
  int num2 = 0;
  char user_input;

public: // Open to all classes
  float question3(float *pts);
};

#endif /* MATH_H */