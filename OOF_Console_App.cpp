#include <iostream>
#include <string>
#include "Points.h"
#include "Animal.h"
#include "Math.h"

/**@file OOF_Console_App.cpp
 * @brief Introduces the program and takes user's name. Then it sends to
 * Points.cpp for menu selection.
 * 
 * MILESTONES
 *		LO4:
 *			Procedural programming uses the top-down approach, relying on routines
 *			to tell the computer what to do, step-by-step. OOP is more about
 *			encapsulating data and behavior into objects.
 *		
 *		LO2a:
 *			Within the Visibility Inheritance Model are three types of visibility:
 *				Public - meaning it's open to all and any class can access it.
 *				Protected - it's open only to derived classes.
 *				Private - it's not available to any other classes, even derived.
 * 
 *		LO5:
 *			Object-oriented inheritance is usually seen as a feature that is
 *			commonly used with subtyping. Subtyping refers to the compatibility of
 *			interfaces, while inheritance refers to the reuse of implementations.
 * 
 * @return 0
 * 
 * @author Mya Gwinn
 * @bugs No known bugs
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

	float random = 0;

	Points::menu_selection(&random);

	return 0;
}