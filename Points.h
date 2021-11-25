#ifndef POINTS_H
#define POINTS_H
#pragma once
using namespace std;
#include <iostream>
#include <string>

class Points
{
protected: // Only open to derived classes
	float points;

public: // Open to all classes
	float* pts = &points;
	
	float menu_selection(float* pts);
};

#endif /* POINTS_H */