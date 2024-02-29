#include "terminal.h"
#include <iostream>
using namespace std;

class FishDummyMember {
public:
  FishDummyMember() { cout << "Конструктор FishDummyMember" << endl; }
  ~FishDummyMember() { cout << "Деструктор FishDummyMember" << endl; }
};

class Fish {
protected:
  FishDummyMember dummy;

public:
  Fish() { cout << "Конструктор Fish" << endl; }
  ~Fish() { cout << "Деструктор Fish" << endl; }
};

class Tuna : public Fish {
public:
  Tuna() { cout << "Конструктор Tuna" << endl; }
  ~Tuna() { cout << "Деструктор Tuna" << endl; }
};

int main(int argc, char *argv[]) {
  cout << green_italic;
  cout << "Порядок вызова конструкторов и деструкторов" << endl;
  cout << "Базового и производного классов" << endl;
  cout << reset;
  Tuna myDinner;
  return 0;
}
