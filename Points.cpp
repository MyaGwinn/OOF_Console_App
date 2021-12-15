#include "Points.h"
#include "Animal.h"
#include "Math.h"
#include "Trivia.h"
#include <iostream>

/**@file Points.cpp
 * @brief User selects which question to perform (LO1a).
 *
 * @param pts (if the user is coming from another question,
 * points will carry over).
 * @return points (carries points over to next question, if needed).
 *
 * @author Mya Gwinn
 * @bugs No known bugs
*/
auto Points::menu_selection(float* pts) -> float
{
	// Menu
	std::cout << "Which question do you want to do?" <<
		" Enter the appropriate number:\n\n"
		"Animal - \n"
		"	Question One: 1\n\n"
		"Triva - \n"
		"	Queston Two: 2\n\n"
		"Math - \n"
		"	Question Three: 3\n" << std::endl;

	int menu_selection = 0;

	constexpr int temp_num = 1000; // constexpr is needed to tell compiler
																 // to allow compile-time evaluation
	std::cin.ignore(temp_num, '\n');
	std::cin >> menu_selection;

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
		std::cout << "That wasn't an answer choice, am I not good enough for you?"
			<< std::endl;
		break;
	}

	return 0;
}