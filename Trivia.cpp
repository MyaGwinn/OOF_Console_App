#include "Trivia.h"
#include <iostream>
#include <cstring>
#include <string>

/* This section displays aggregates and initilization lists
   with the format being inspired by this example from the textbook:
   https://www.learncpp.com/cpp-tutorial/aggregation/
*/
class Answer // "Belongs to" relationship
{
private:
  std::string u_ans{};

public:
  // LO1c
  explicit Answer(const std::string& answer)
    : u_ans{ answer }
  {
  }

  auto getAnswer() noexcept -> std::string& { return u_ans; }
};

class Question // "Has a" relationship
{
private:
  // This section violates the clang-diagnostic-unused-private-field warning
  // However, this section's purpose is to display 
  // initilization lists and aggregates
  const Answer& u_question;  
 
public:
  explicit Question(const Answer& question) noexcept
    : u_question{ question }
  {
  }
  
};

auto Trivia::question2(float* pts) -> float 
{
  std::cout << "\nWhich of the following sentences have every letter "
    "in the alphabet?" << std::endl;
  
  std::cout << "\nA: Sphinx of black quartz, judge my vow" << std::endl;
  std::cout << "B: Cwm ford bank glyphs vext quiz" << std::endl;
  std::cout << "C: Pack my box with five dozen beer jugs" << std::endl;
  std::cout << "D: Razorback-jumping frogs can level six piqued gymnasts\n" << std::endl;

  std::cin >> user_input;
  constexpr int spacing = 32;
  user_input = toupper(user_input - spacing);

  std::cout << "\n";

  // Assigning points
  switch (user_input)
  {
  case 'A':
    std::cout << "Wow, you can read?" << std::endl;
    std::cout << "I suppose congratulations are in order as..." << std::endl;
    *pts += two_points;
    break;
  case 'B':
    std::cout << "I bet you counted each letter, hehehe." << std::endl;
    std::cout << "Sorry to say, but... " << std::endl;
    *pts += one_point;
    break;
  case 'C':
    std::cout << "I should have known you had a drinking problem." << std::endl;
    std::cout << "Sorry to say, but... " << std::endl;
    *pts += good_points;
    break;
  case 'D':
    std::cout << "I should lower my expectations a tad more, shouldn't I?" << std::endl;
    std::cout << "Sorry to say, but... " << std::endl;
    *pts += two_points;
    break;
  default:
    std::cout << "Now, now, silly, that's not an answer, and you know that, "
      "don't you?" << std::endl;
    std::cout << "Sorry to say, but... " << std::endl;
    *pts -= bad_points;
    break;
  }

  // Creates an Answer outside the scope of the Questions
  Answer ans{ "A" };

  {
    // Creates a Question and uses the constructor parameter
    // to pass the answer to it
    const Question question{ ans };

  } // Question is now out of scope

  std::cout << ans.getAnswer() << " is the answer!\n";

  std::cout << "\n\nWant another question?" << std::endl;
  std::cin >> user_input;
  user_input = toupper(user_input - spacing);

  if (user_input == 'Y')
  {
    Points::menu_selection(pts);
  }
  else if (user_input == 'N')
  {
    std::cout << "\nThat's a shame. SIKE!" << std::endl;
    std::cout << "Your total points are: " << *pts << std::endl;
  }
  else {
    std::cout << "\nThe disrespect... is blatant." << std::endl;
  }
  
  return points;
} // end Trivia::question2