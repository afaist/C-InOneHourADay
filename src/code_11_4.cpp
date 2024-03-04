#include "terminal.h"
#include <iostream>
using namespace std;

class Fish {
public:
  Fish() { cout << cyan << "Создаем Fish" << reset << endl; }
  // Виртуальный деструктор!!!
  virtual ~Fish() { cout << cyan << "Уничтожаем Fish" << reset << endl; }
};

class Tuna : public Fish {
public:
  Tuna() { cout << blue << "Создаем Tuna" << reset << endl; }
  ~Tuna() { cout << blue << "Уничтожаем Tuna" << reset << endl; }
};

void DeleteFishMemory(Fish *pFish) { delete pFish; }

int main(int argc, char *argv[]) {
  cout << green_italic;
  cout << "Использование виртуального деструктора базового класса" << endl;
  cout << "для гарантии вызова деструкторов производных классов" << endl;
  cout << "при удалении указателя базового типа" << reset << endl;

  cout << red;
  cout << "Выделение динамической памяти для Tuna..." << endl;
  Tuna *pTuna = new Tuna;
  cout << red
       << "Удаление Tuna в функции, принимающей указатель на базовый класс..."
       << endl;
  DeleteFishMemory(pTuna);

  cout << "Создание Tuna в стеке..." << endl;
  Tuna myDinner;
  cout << "Выход из области видимости объекта Tuna..." << endl;

  return 0;
}
