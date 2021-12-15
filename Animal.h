#ifndef ANIMAL_H
#define ANIMAL_H

#include "Points.h"

/**@file Animal.h
 * @brief The derived header from Points, sets up commonly used variables
 * and sends to Animal.cpp
 *
 * LO2
 *
 * @author Mya Gwinn
 * @bugs No known bugs
*/
class Animal :
	public Points
{
private: // Cannot be accessed by any other classes
	char user_input = '0';

public: // Open to all classes
	auto question1(float* pts) -> float;
};

#endif /* ANIMAL_H */