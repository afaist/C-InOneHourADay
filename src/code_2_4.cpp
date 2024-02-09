#include <iostream>
#include <ostream>
using namespace std;

int DemoConsoleOutput();

int main(int argc, char *argv[]) {
  DemoConsoleOutput();

  return 0;
}

// Реализация объявленной ранее функции
int DemoConsoleOutput() {
  cout << "Простой строковый литерал" << endl;
  cout << "Запись числа пять: " << 5 << endl;
  cout << "Выполнение деления 10/5 = " << 10 / 5 << endl;
  cout << "Пи примерно равно 22/7 = " << 22 / 7 << endl;
  cout << "Более точно Пи равно 22.0/7 = " << 22.0 / 7 << endl;
  cout << "Вычитание чисел 234 - 300 = " << 234 - 300 << endl;
  cout << "Умножение чисел 756 * 45 = " << 765 * 45 << endl;
  return 0;
}
