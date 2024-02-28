#include "terminal.h"
#include <iostream>
using namespace std;

class Human {
  int age;

public:
  constexpr Human(int humanAge) : age(humanAge) {}
  constexpr int GetAge() const { return age; }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование constexpr с классом" << reset << endl;
  cout << "Константное выражение - используем с константными объектами" << endl;
  constexpr Human somePerson(15);
  const int hisAge = somePerson.GetAge();
  cout << "Неконстантное выражение - нет слова const" << endl;
  Human anotherPerson(45);

  return 0;
}
