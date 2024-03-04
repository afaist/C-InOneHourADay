#include "terminal.h"
#include <iostream>
using namespace std;

class Fish {
public:
  virtual void Swim() { cout << "Рыба плавает!" << endl; }
};

class Tuna : public Fish {
public:
  void Swim() { cout << blue << "Тунец плавает!" << reset << endl; }
};

class Carp : public Fish {
public:
  void Swim() { cout << cyan << "Карп плавает!" << reset << endl; }
};

void MakeFishSwim(Fish &InputFish) { InputFish.Swim(); }

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Полиморфизм. Определение и вызов виртуального метода класса" << reset << endl;
  Tuna myDinner;
  Carp myLunch;

  MakeFishSwim(myDinner);
  MakeFishSwim(myLunch);
  return 0;
}
