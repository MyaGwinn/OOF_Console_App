#include "Animal.h"
#include <iostream>
#include "Math.h"

auto Animal::question1(float* pts) -> float
{
	std::cout << "\nSo, here's a funny: how do you get rid of bugs?\n\n"
		"A:     You de-BUG them\n\n"
		"B:     Call the S.W.A.T team\n\n"
		"C:     Stop BUG-ing them\n\n"
		"D:     Call pest control\n" << std::endl;

	std::cin >> user_input;
	
	// For toupper and tolower to work, toupper is - 32 and tolower is +32
	// See https://www.journaldev.com/36852/string-uppercase-lowercase-c-plus-plus
	user_input = toupper(user_input-32);
	
	std::cout << "\n\n";

	// Assigning points
	if (user_input == 'A')
	{
		std::cout << "Alright, alright, you like to code, we get it." << std::endl;
		*pts -= one_point;
	}
	else if (user_input == 'B')
	{
		std::cout << "Well, that's the answer my creator stole from the website, "
			"so I guess you're right?" << std::endl;
		*pts += one_point;
	}
	else if (user_input == 'C')
	{
		std::cout << "It's alright, we know by now how annoying you can be." << std::endl;
		*pts += two_points;
	}
	else if (user_input == 'D')
	{
		std::cout << "I enjoy the realistic approach, extra points for you." << std::endl;
		*pts += good_points;
	}
	else 
	{
		std::cout << "Maybe you're intentionally trying to play outside "
			"the parameters?" << std::endl;
		*pts -= bad_points;
	}

	std::cout << "\n\nWant another question?" << std::endl;
	std::cin >> user_input;
	constexpr int spacing = 32;
	user_input = toupper(user_input - spacing);

	if (user_input == 'Y')
	{
		std::cout << "\n" << std::endl;
		Points::menu_selection(pts);
	}
	else if (user_input == 'N')
	{
		std::cout << "\nI see I'm not good enough for you." << std::endl;
		std::cout << "Your total points are: " << *pts << std::endl;
	}
	else {
		std::cout << "\nMy patience runs thin with your human arrogance." << std::endl;
	}

	return points;
} // end Animal::question1