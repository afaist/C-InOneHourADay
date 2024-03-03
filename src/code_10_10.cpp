#include "terminal.h"
#include <iostream>
using namespace std;

class Mammal {
public:
  void FeedBybyMilk() {
    cout << green;
    cout << "Млекопитающее: люблю молоко!" << reset << endl;
  }
};

class Reptile {
public:
  void SpitVenom() {
    cout << red;
    cout << "Рептилия: плюну ядом!" << reset << endl;
  }
};

class Bird {
public:
  void LayEggs() {
    cout << blue;
    cout << "Птица: яйца отложены!" << reset << endl;
  }
};

class Platypus : public Mammal, public Bird, public Reptile {
public:
  void Swim() {
    cout << cyan;
    cout << "Утконос: я умею плавать и нырять!" << reset << endl;
  }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Множественное наследование" << reset << endl;
  Platypus realFreak;
  realFreak.LayEggs();
  realFreak.FeedBybyMilk();
  realFreak.SpitVenom();
  realFreak.Swim();

  return 0;
}
