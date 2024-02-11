/*
 * Операторы
 */
#include <iostream>
using namespace std;
const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string cyan("\033[0;36m");
const std::string magenta("\033[0;35m");
const std::string reset("\033[0m");

int main(int argc, char *argv[]) {
  cout << green;
  cout << "Различия между постфиксным и префиксным операторами" << endl;
  cout << reset;
  int startValue = 100;
  cout << "Начальное значение переменной startValue: " << startValue << endl;

  int postfixIncrement = startValue++;
  cout << "Присвоено значение другой переменной при постфиксном ++ = "
       << postfixIncrement << endl;
  cout << "Значение переменной startValue после инкремента: " << startValue
       << endl;

  cout << "Сбрасываем значение startValue" << endl;
  startValue = 100;
  int prefixIncrement = ++startValue;
  cout << "Присвоено значение другой переменной при префиксном ++ = "
       << prefixIncrement << endl;
  cout << "Значение переменной startValue после инкремента: " << startValue
       << endl;
  cout << "Сбрасываем значение startValue" << endl;
  startValue = 100;
  int postfixDecrement = startValue--;
  cout << "Присвоено значение другой переменной при постфиксном -- = "
       << postfixDecrement << endl;
  cout << "Значение переменной после декремента: " << startValue << endl;
  cout << "Сбрасываем значение startValue" << endl;
  startValue = 100;

  int prefixDecrement = --startValue;
  cout << "Присвоено значение другой переменной при префиксном -- = "
       << prefixDecrement << endl;
  cout << "Значение переменной после декремента: " << startValue << endl;

  cout << red << "Арифметические операции с целыми числами:" << reset << endl;
  cout << "Введите два целых числа через пробел: ";
  int num1 = 0, num2 = 0;
  cin >> num1;
  cin >> num2;
  cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
  cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
  cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
  cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
  return 0;
}
