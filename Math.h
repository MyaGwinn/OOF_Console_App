#ifndef MATH_H
#define MATH_H

#include "Points.h"
#include <cstdlib>

/**@file Math.h
 * @brief The derived header from Points, sets up commonly used variables
 * and sends to Math.cpp
 *
 * LO2
 *
 * @author Mya Gwinn
 * @bugs No known bugs
*/
class Math :
	public Points
{
private: // Cannot be accessed by any other classes
	// LO6
	float num1 = 0.0;
	float num2 = 0.0;
	char user_input = '0';

public: // Open to all classes
	auto question3(float* pts) -> float;
};

#endif /* MATH_H */