#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  cout << "Программа для умножения двух чисел" << endl;
  cout << "Введите первое число: ";
  int firstNumber = 0;
  cin >> firstNumber;

  cout << "Введите второе число: ";
  int secondNumber = 0;
  cin >> secondNumber;

  cout << "Результат: ";
  int multiplicationResult = firstNumber * secondNumber;
  cout << " = " << multiplicationResult << endl;
  return 0;
}
