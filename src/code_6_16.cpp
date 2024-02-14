#include "terminal.h"
#include <climits>
#include <iostream>
#include <ostream>
using namespace std;

int main(int argc, char *argv[]) {
  const int numsToCalculate = 5;
  cout << blue_bold << "Вычисление по " << numsToCalculate << " чисел Фибоначчи"
       << reset << endl;
  unsigned long long int num1 = 0, num2 = 1;
  unsigned long long int max_num = ULLONG_MAX / 2;
  char wantMore = '\0';
  cout << num1 << " " << num2 << " ";
  do {
    for (size_t i = 0; i < numsToCalculate; i++) {
      cout << num1 + num2 << " ";

      unsigned long long int num2Temp = num2;

      num2 = num1 + num2;
      if (num2 > max_num) {
        cout << red << "А числа закончились..." << reset << endl;
        return 0;
      }
      num1 = num2Temp;
    }
    cout << endl;
    cout << green << "Продолжать (y/n)? ";
    cin >> wantMore;
    cout << reset;
  } while (wantMore == 'y');

  cout << blue << "До свидания!" << endl;
  return 0;
}
