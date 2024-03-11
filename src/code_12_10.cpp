#include "terminal.h"
#include <iostream>
#include <string>
using namespace std;

class Display {
public:
  void operator()(string input) const { cout << input << endl; }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Оператор () и функциональный объект, созданный с его помощью"
       << endl;
  cout << "Объект класса вызывается как функция (functor)" << reset << endl;

  Display displayFuncObject;
  displayFuncObject("Моя строка!");
  return 0;
}
