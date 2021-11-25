#pragma once
#ifndef TRIVIA_H
#define TRIVIA_H

#include "Points.h"

class Trivia :
    public Points
{
private: // Cannot be accessed by any other classes
  char user_input;

public: // Open to all classes
  float question2(float* pts);
};

#endif /* TRIVIA_H */