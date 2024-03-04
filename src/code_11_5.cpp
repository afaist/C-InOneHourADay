#include "terminal.h"
#include <iostream>
using namespace std;

class SimpleClass {
  int a, b;

public:
  void FuncDoSomething() {}
};

class Base {
  int a, b;

public:
  virtual void FuncDoSomething() {}
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Демонстрация наличия скрытого указателя VFT (таблицу виртуальных "
          "функци)";
  cout << reset << endl;

  cout << "sizeof(SimpleClass) = " << sizeof(SimpleClass) << endl;
  cout << "sizeof(Base) with VFT = " << sizeof(Base) << endl;
  return 0;
}
