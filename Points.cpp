#include "Points.h"
#include "Animal.h"
#include "Math.h"
#include "Trivia.h"
#include <iostream>
using namespace std;

// User selects which question to perform
// System carrys out the selection
float Points::menu_selection(float* pts)
{
	// Menu
	cout << "Which question do you want to do? Enter the appropriate number:\n\n"
		"Animal - \n"
		"	Question One: 1\n\n"
		"Triva - \n"
		"	Queston Two: 2\n\n"
		"Math - \n"
		"	Question Three: 3\n" << endl;
	
	int menu_selection;

	cin.ignore(1000, '\n');
	cin >> menu_selection;

	Animal begin_animal;
	Trivia begin_trivia;
	Math begin_math;

	switch (menu_selection)
	{
	case 1:
		begin_animal.question1(pts);
		break;
	case 2:
		begin_trivia.question2(pts);
		break;
	case 3:
		begin_math.question3(pts);
		break;
	default:
		cout << "That wasn't an answer choice, am I not good enough for you?" << endl;
		break;
	}

	return 0;
}