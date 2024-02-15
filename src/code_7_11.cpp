#include "terminal.h"
#include <iostream>

using namespace std;
const double Pi = 3.14159265;

/*
 * inline - функция будет встраиваемой
 * auto - компилятор выводит тип функции
 */
inline auto Area(double radius) { return Pi * radius * radius; }

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование ключевых слов inline и auto" << reset << endl;
  cout << "Введите радуис круга: ";
  double radius = 0;
  cin >> radius;

  cout << "Площадь круга равна: " << Area(radius) << endl;

  return 0;
}
