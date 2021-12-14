// OOF_Console_App.cpp : This file contains the 'main' function. 

/**
	Formatting Guidelines:
		Keep line length to 80 characters (not automatic)
		Indent of 2 spaces (made automatic)
		Use double quotes
		Keep names to lower_snake_case
		Use song_name1 instead of song_name_1

	Refer to: https://developers.google.com/protocol-buffers/docs/style
*/

#include <iostream>
#include <string>
#include "Points.h"
#include "Animal.h"
#include "Math.h"

/** MILESTONES
			LO4:
			Compare and contrast procedural/functional appraoch and OOP:
					Procedural programming uses the top-down approach, relying on 
					routines to tell the computer what to do, step-by-step. While OOP
					is more about encapusulating data and behavior into objects.

			LO2a:
			Visiblity Inheritance Model: Within this model are three types of 
					visiblity: public, protected, and private.
							- Public visibility means it's open to all and any class 
									can access it.
							- Protected visibility means it's open only to the derived class.
							- Private visibility means that it's not to be opened by 
									any other class, even derived.

			Aggregates and initilizer lists: see Trivia.cpp

			Relationship between object-oriented inheritance & subtyping: Inheritance
					is usually seen as a feature that is commonly used with subtyping.
					Subtyping regers to the compatibility of interfaces, while
					inheritance refers to the reuse of implementaions.
*/

auto main() -> int
{
	// Intro to the program
	std::cout << "Hello there, I am O.O.F, an "
		"Originial Ostentatious Fault-finder.\n\n"

		"I'm aware my name is unique, my creator ripped it off "
		"a random acronym generator.\n\n"

		"Enough about me, what's your name?\n" << std::endl;

	std::string user_name;
	std::cin >> user_name;

	std::cout << "\n";
	std::cout << "What a stup-I mean, lovely, name. Yes, very "
		"lovely, " << user_name << ".\n" << std::endl;
	
	// Sends to Points.cpp for menu selection
	float random = 0;
	
	Points obj;
	obj.menu_selection(&random);

	return 0;
}