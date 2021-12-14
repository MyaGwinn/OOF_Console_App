#ifndef TRIVIA_H
#define TRIVIA_H

#include "Points.h"

// LO2
class Trivia :
    public Points
{
private: // Cannot be accessed by any other classes
  char user_input = '0';

public: // Open to all classes
  auto question2(float* pts) -> float;
};

#endif /* TRIVIA_H */