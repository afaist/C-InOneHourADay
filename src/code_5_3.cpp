#include "terminal.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cout << red;
  cout << "Операторы равенства и сравнения" << reset << endl;
  cout << green;
  cout << "Введите два целых числа через пробел:" << reset << endl;
  int num1 = 0, num2 = 0;
  cin >> num1;
  cin >> num2;

  bool Equality = (num1 == num2);
  cout << "Проверка равенства: " << Equality << endl;

  bool Inequality = (num1 != num2);
  cout << "Проверка неравенства: " << Inequality << endl;

  bool GreaterThan = (num1 > num2);
  cout << "Результат сравнения " << num1 << " > " << num2;
  cout << ": " << GreaterThan << endl;
  bool LessThan = (num1 < num2);
  cout << "Результат сравнения " << num1 << " < " << num2;
  cout << ": " << LessThan << endl;
  bool GreaterThanEquals = (num1 >= num2);
  cout << "Результат сравнения " << num1 << " >= " << num2;
  cout << ": " << GreaterThanEquals << endl;
  bool LessThanEquals = (num1 <= num2);
  cout << "Результат сравнения " << num1 << " <= " << num2;
  cout << ": " << LessThanEquals << endl;

  return 0;
}
