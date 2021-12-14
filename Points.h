#ifndef POINTS_H
#define POINTS_H
#include <iostream>
#include <string>

// LO1 & LO1a: at least one class in a header file
class Points
{
private:
	 // WARN: has tried before, may not work?
	float* pts = &points;

protected: // Only open to derived classes
	float points = 0;
	const float one_point = 1.0;
	const float two_points = 2.0;
	const float bad_points = 5.0; // indicates worse answer choice
	const float good_points = 5.0; // best answer choice

public: // Open to all classes
	static auto menu_selection(float* pts) -> float;
};

#endif /* POINTS_H */