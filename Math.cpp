#include "Math.h"
#include <iostream>
#include <cstring>
#include <string>

/* This section displays overloading a constructor
   with the format being inspired by this example from Geeks for Geeks:
   https://www.geeksforgeeks.org/constructor-overloading-c/
*/ 
auto Math::question3(float *pts) -> float
{
  std::cout << "\nI'm goint to demonstrate my intelligence now. "
    "Go ahead, enter two whole numbers.\n\n"
    "The first number: ";

  std::cin >> num1;
  std::cout << "The second: ";
  std::cin >> num2;
  
  class solveEquation
  {
  public:
    float result;

    // Constructor with two parameters
    solveEquation(float a, float b) noexcept
    {
      result = a * b;
    }

    // Constructor with no parameters
    solveEquation() noexcept
    {
      result = 0;
    }

    void output() // ignored readability-make-member-function-const
                        // because when output is made const, it doesn't
                        // improve code readability
    {
      std::cout << result << std::endl;
    }
  }; // end solveEquation

  constexpr int spacing = 32;

  auto doSolveEquation() -> float;
  {
    std::cout << "Your points are: " << *pts << std::endl;
    
    // LO1b
    solveEquation obj;
    solveEquation obj2(num1, num2);

    std::cout << "\nThe multiplied result you didn't know you "
      "were waiting for: ";
    obj2.output(); // Calling the constructor with two parameters
    std::cout << "I'm amazing, aren't I?" << std::endl;
    std::cout << "\nThis is where you agree (Y/N): " << std::endl;

    char user_input = '0';
    std::cin >> user_input;
    user_input = toupper(user_input - spacing);

    // Assigning points
    if (user_input == 'Y')
    {
      std::cout << "\nI knew you had good sense for a human!" << std::endl;
      points += good_points;
    }
    else if (user_input == 'N') {
      std::cout << "You're pathetic, but you know that don't you?" << std::endl;
      std::cout << "I'll prove you wrong, just like my creator." << std::endl;
      points -= bad_points;
    }
    else {
      std::cout << "My creator, the lovely person that they are, is also a fool. "
        "They didn't seem to account for your answer choice.\n"
        "I'll let it slide, just this once." << std::endl;
      points += 0;
    }
    
    std::cout << "\nBUT WAIT! THERE'S MORE!"
      "\nBet you weren't expecting this, huh? " << std::endl;
    std::cout << "\nHere's a secret number: ";

    obj.output(); // Calling the constructor without parameters

    std::cout << "\nBut what does it mean? Well, thank you for asking!" << std::endl;
    std::cout << "I just needed to show, in the most mundane way possible, "
      "that my creator knows how to overload..." << std::endl;

  }; // end doSolveEquation

  std::cout << "\n\nWant another question (Y/N)?" << std::endl;
  constexpr int temp_num = 1000;
  std::cin.ignore(temp_num, '\n');
  std::cin >> user_input;
  user_input = toupper(user_input - spacing);

  if (user_input == 'Y')
  {
    Points::menu_selection(pts);
  }
  else if (user_input == 'N')
  {
    std::cout << "\nAs I thought, you're rather weak-willed." << std::endl;
    std::cout << "Your total points are: " << *pts << std::endl;
  }
  else {
    std::cout << "\nJust for that, you don't get another option." << std::endl;
  }

  return points;
} // end Math::question3()