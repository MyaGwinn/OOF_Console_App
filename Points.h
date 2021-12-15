#ifndef POINTS_H
#define POINTS_H
#include <iostream>
#include <string>

/**@file Points.h
 * @brief Points is the base class for Trivia, Math, and Animal.
 * and it declares the point system.
 *
 * LO1 & LO1a
 * 
 * @author Mya Gwinn
 * @bugs No known bugs
*/
class Points
{
private:
	// LO6 & LO3
	float* pts = &points;

protected: // Only open to derived classes
	float points = 0;
	const float one_point = 1.0;
	const float two_points = 2.0;
	const float bad_points = 5.0; // Indicates worse answer choice
	const float good_points = 5.0; // Best answer choice

public: // Open to all classes
	static auto menu_selection(float* pts) -> float;
};

#endif /* POINTS_H */