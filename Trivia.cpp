#include "Trivia.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

/* This section displays aggregates and initilization lists
   with the format being inspired by this example from the textbook:
   https://www.learncpp.com/cpp-tutorial/aggregation/
*/
class Answer // "Belongs to" relationship
{
private:
  string u_ans{};

public:
  Answer(const string& answer)
    : u_ans{ answer }
  {
  }

  const string& getAnswer() const { return u_ans; }
};

class Question // "Has a" relationship
{
private:
  // This question only holds one answer, but it could hold multiple
  const Answer& u_question;  
 
public:
  Question(const Answer& question)
    : u_question{ question }
  {
  }
  
};

float Trivia::question2(float* pts)
{
  cout << "\nWhich of the following sentences have every letter "
    "in the alphabet?" << endl;
  
  cout << "\nA: Sphinx of black quartz, judge my vow" << endl;
  cout << "B: Cwm ford bank glyphs vext quiz" << endl;
  cout << "C: Pack my box with five dozen beer jugs" << endl;
  cout << "D: Razorback-jumping frogs can level six piqued gymnasts\n" << endl;

  cin >> user_input;
  user_input = toupper(user_input - 32);

  cout << "\n";

  // Assigning points
  switch (user_input)
  {
  case 'A':
    cout << "Wow, you can read?" << endl;
    cout << "I suppose congratulations are in order as..." << endl;
    *pts += 0.5;
    break;
  case 'B':
    cout << "I bet you counted each letter, hehehe." << endl;
    cout << "Sorry to say, but... " << endl;
    *pts += 1;
    break;
  case 'C':
    cout << "I should have known you had a drinking problem." << endl;
    cout << "Sorry to say, but... " << endl;
    *pts += 2;
    break;
  case 'D':
    cout << "I should lower my expectations a tad more, shouldn't I?" << endl;
    cout << "Sorry to say, but... " << endl;
    *pts += 0.5;
    break;
  default:
    cout << "Now, now, silly, that's not an answer, and you know that, "
      "don't you?" << endl;
    cout << "Sorry to say, but... " << endl;
    *pts -= 5;
    break;
  }

  // Creates an Answer outside the scope of the Questions
  Answer ans{ "A" };

  {
    // Creates a Question and uses the constructor parameter
    // to pass the answer to it
    Question question{ ans };

  } // Question is now out of scope

  cout << ans.getAnswer() << " is the answer!\n";

  cout << "\n\nWant another question?" << endl;
  cin >> user_input;
  user_input = toupper(user_input - 32);

  if (user_input == 'YES' || user_input == 'Y')
  {
    Points obj;
    obj.menu_selection(pts);
  }
  else if (user_input == 'NO' || user_input == 'N')
  {
    cout << "\nThat's a shame. SIKE!" << endl;
    cout << "Your total points are: " << *pts << endl;
  }
  else {
    cout << "\nThe disrespect... is blatant." << endl;
  }
  
  return 0;
} // end Trivia::question2