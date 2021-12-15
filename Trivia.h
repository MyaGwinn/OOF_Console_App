#ifndef TRIVIA_H
#define TRIVIA_H

#include "Points.h"

/**@file Trivia.h
 * @brief The derived header from Points, sets up commonly used variables
 * and sends to Trivia.cpp
 *
 * LO2
 *
 * @author Mya Gwinn
 * @bugs No known bugs
*/
class Trivia :
	public Points
{
private: // Cannot be accessed by any other classes
	char user_input = '0';

public: // Open to all classes
	auto question2(float* pts) -> float;
};

#endif /* TRIVIA_H */