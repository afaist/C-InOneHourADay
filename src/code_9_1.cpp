#include "terminal.h"
#include <iostream>
#include <string>

using namespace std;

class Human {
public:
  string name;
  int age;

  void IntroduceSelf() {
    cout << " Я " + name << " и мне ";
    cout << age << " лет" << endl;
  }
};

int main(int argc, char *argv[]) {
  Human firstMan;
  firstMan.name = "Adam";
  firstMan.age = 30;

  Human firstWoman;
  firstWoman.name = "Eve";
  firstWoman.age = 28;

  firstMan.IntroduceSelf();
  firstWoman.IntroduceSelf();

  return 0;
}
