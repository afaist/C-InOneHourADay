#include "terminal.h"
#include <iostream>
using namespace std;

class Animal {
public:
  Animal() {
    cout << cyan;
    cout << "Конструктор Animal" << reset << endl;
  }
  int age;
  ~Animal() {
    cout << cyan_italic;
    cout << "Деструктор Animal" << reset << endl;
  }
};

class Mammal : public virtual Animal {
public:
  Mammal() {
    cout << red;
    cout << "Конструктор Mammal - потомка Animal" << reset << endl;
  }
  ~Mammal() {
    cout << red_italic;
    cout << "Деструктор Mammal - потомка Animal" << reset << endl;
  }
};
class Bird : public virtual Animal {
public:
  Bird() {
    cout << blue;
    cout << "Конструктор Bird - потомка Animal" << reset << endl;
  }
  ~Bird() {
    cout << blue_italic;
    cout << "Деструктор Bird - потомка Animal" << reset << endl;
  }
};
class Reptile : public virtual Animal {
public:
  Reptile() {
    cout << green;
    cout << "Конструктор Reptile - потомка Animal" << reset << endl;
  }
  ~Reptile() {
    cout << green_italic;
    cout << "Деструктор Reptile - потомка Animal" << reset << endl;
  }
};
class Platypus final : public Mammal, public Bird, public Reptile {
public:
  Platypus() {
    cout << blue_bold;
    cout << "Конструктор Platypus - потомка Mammal, Bird, Reptile" << reset
         << endl;
  }
  ~Platypus() {
    cout << blue_bold;
    cout << "Деструктор Platypus - потомка Mammal, Bird, Reptile" << reset
         << endl;
  }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Ключевое слово virtual в иерархии наследования ограничивает" << endl;
  cout << "базовый класс одним экземпляром:" << endl;
  cout << "Конструктор базового класса вызывается один раз и член базового"
       << endl;
  cout << "существует в одном экземпляре, не смотря на множественное" << endl;
  cout << "наследование от одного базового класса." << endl;
  cout << "================================================" << reset << endl;
  Platypus duckBilledP;
  duckBilledP.age = 25; // Есть только один Animal::age

  return 0;
}
