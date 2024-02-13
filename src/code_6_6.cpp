#include "terminal.h"
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
  cout << blue_bold;
  cout << "Тернарный условный оперотор (?:)" << reset << endl;
  cout << "Введите два числа: " << endl;
  int num1 = 0, num2 = 0;
  cin >> num1;
  cin >> num2;
  int max = (num1 > num2) ? num1 : num2;
  cout << "Большее из введенных чисел " << num1 << " и " << num2
       << " равно: " << max << endl;
  return 0;
}
