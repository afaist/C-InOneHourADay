#include "terminal.h"
#include <iostream>
#include <string>
using namespace std;

class Human {
private:
  friend class Utility;
  friend void DisplayAge(const Human &person);
  string name;
  int age;

public:
  Human(string humanName, int humanAge) {
    name = humanName;
    age = humanAge;
  }
};

class Utility {
public:
  static void DisplayAge(const Human &person) {
    cout << blue;
    cout << "Вывод значения закрытого члена класса" << reset << endl;
    cout << "Значение Human::age - " << person.age << endl;
  }
};

void DisplayAge(const Human &person) {
  cout << green;
  cout << "Вывод значения закрытого класса из дружественной функции" << reset
       << endl;
  cout << "Значение Human::age - " << person.age << endl;
}

int main(int argc, char *argv[]) {
  Human firstMan("Adam", 25);
  Utility::DisplayAge(firstMan);
  DisplayAge(firstMan);

  return 0;
}
