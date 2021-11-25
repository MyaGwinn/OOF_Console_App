#include "Animal.h"
#include <iostream>
#include <cstring>
#include <string>
#include "Math.h"
using namespace std;

float Animal::question1(float* pts)
{
	cout << "\nSo, here's a funny: how do you get rid of bugs?\n\n"
		"A:     You de-BUG them\n\n"
		"B:     Call the S.W.A.T team\n\n"
		"C:     Stop BUG-ing them\n\n"
		"D:     Call pest control\n" << endl;

	cin >> user_input;
	
	// For toupper and tolower to work, toupper is - 32 and tolower is +32
	// See https://www.journaldev.com/36852/string-uppercase-lowercase-c-plus-plus
	user_input = toupper(user_input-32);
	
	cout << "\n\n";

	// Assigning points
	if (user_input == 'A')
	{
		cout << "Alright, alright, you like to code, we get it." << endl;
		*pts -= 1;
	}
	else if (user_input == 'B')
	{
		cout << "Well, that's the answer my creator stole from the website, "
			"so I guess you're right?" << endl;
		*pts += 0.5;
	}
	else if (user_input == 'C')
	{
		cout << "It's alright, we know by now how annoying you can be." << endl;
		*pts += 1;
	}
	else if (user_input == 'D')
	{
		cout << "I enjoy the realistic approach, extra points for you." << endl;
		*pts += 2;
	}
	else 
	{
		cout << "Maybe you're intentionally trying to play outside "
			"the parameters?" << endl;
		*pts -= 2;
	}

	cout << "\n\nWant another question?" << endl;
	cin >> user_input;
	user_input = toupper(user_input - 32);

	if (user_input == 'YES' || user_input == 'Y')
	{
		cout << "\n" << endl;
		Points obj;
		obj.menu_selection(pts);
	}
	else if (user_input == 'NO' || user_input == 'N')
	{
		cout << "\nI see I'm not good enough for you." << endl;
		cout << "Your total points are: " << *pts << endl;
	}
	else {
		cout << "\nMy patience runs thin with your human arrogance." << endl;
	}

	return points;
} // end Animal::question1