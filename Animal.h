#ifndef ANIMAL_H
#define ANIMAL_H
#include "Points.h"

using namespace std;
class Animal :
    public Points
{
private: // Cannot be accessed by any other classes
  char user_input;

public: // Open to all classes
  float question1(float* pts);
};

#endif /* ANIMAL_H */