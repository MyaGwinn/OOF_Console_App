#include "Math.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

/* This section displays overloading a constructor
   with the format being inspired by this example from Geeks for Geeks:
   https://www.geeksforgeeks.org/constructor-overloading-c/
*/ 
float Math::question3(float *pts)
{
  cout << "\nI'm goint to demonstrate my intelligence now. "
    "Go ahead, enter two whole numbers.\n\n"
    "The first number: ";

  cin >> num1;
  cout << "The second: ";
  cin >> num2;
  
  class solveEquation
  {

  public:
    float result;

    // Constructor with two parameters
    solveEquation(int a, int b)
    {
      result = a * b;
    }

    // Constructor with no parameters
    solveEquation()
    {
      result = 0;
    }

    void output()
    {
      cout << result << endl;
    }
  }; // end solveEquation

  float doSolveEquation();
  {
    cout << "Your points are: " << *pts << endl;
    solveEquation obj;
    solveEquation obj2(num1, num2);

    cout << "\nThe multiplied result you didn't know you "
      "were waiting for: ";
    obj2.output(); // Calling the constructor with two parameters
    cout << "I'm amazing, aren't I?" << endl;
    cout << "\nThis is where you agree (Y/N): " << endl;

    char user_input;
    cin >> user_input;
    user_input = toupper(user_input - 32);

    // Assigning points
    if (user_input == 'YES' || user_input == 'Y')
    {
      cout << "\nI knew you had good sense for a human!" << endl;
      points += 1;
    }
    else if (user_input == 'NO' || user_input == 'N') {
      cout << "You're pathetic, but you know that don't you?" << endl;
      cout << "I'll prove you wrong, just like my creator." << endl;
      points -= 2;
    }
    else {
      cout << "My creator, the lovely person that they are, is also a fool. "
        "They didn't seem to account for your answer choice.\n"
        "I'll let it slide, just this once." << endl;
      points += 0;
    }
    
    cout << "\nBUT WAIT! THERE'S MORE!"
      "\nBet you weren't expecting this, huh? " << endl;
    cout << "\nHere's a secret number: ";

    obj.output(); // Calling the constructor without parameters

    cout << "\nBut what does it mean? Well, thank you for asking!" << endl;
    cout << "I just needed to show, in the most mundane way possible, "
      "that my creator knows how to overload..." << endl;

  }; // end doSolveEquation

  cout << "\n\nWant another question?" << endl;
  cin.ignore(1000, '\n');
  cin >> user_input;
  user_input = toupper(user_input - 32);

  if (user_input == 'YES' || user_input == 'Y')
  {
    Points obj;
    obj.menu_selection(pts);
  }
  else if (user_input == 'NO' || user_input == 'N')
  {
    cout << "\nAs I thought, you're rather weak-willed." << endl;
    cout << "Your total points are: " << *pts << endl;
  }
  else {
    cout << "\nJust for that, you don't get another option." << endl;
  }

  return points;
} // end Math::question3()