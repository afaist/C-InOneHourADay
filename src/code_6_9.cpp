#include "terminal.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cout << blue_bold;
  cout << "Цикл while для повторения вычислений" << reset << endl;
  char userSelection = 'm';
  while (userSelection != 'x') {
    cout << "Введите два целых числа: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    cout << num1 << "x" << num2 << " = " << num1 * num2 << endl;
    cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
    cout << "'x' для выхода, иное для повтора" << endl;
    cin >> userSelection;
  }
  cout << "Цикл while закончен." << endl;

  cout << green_bold;
  cout << "Использование цикла do...while для повторного выполнения блока кода"
       << reset << endl;
  userSelection = 'x';
  do {
    cout << "Введите два целых числа: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    cout << num1 << "/" << num2 << " = " << num1 / num2 << endl;
    cout << num1 << "*" << num2 << " = " << num1 * num2 << endl;
    cout << "'x' для выхода, иное для повтора" << endl;
    cin >> userSelection;
  } while (userSelection != 'x');
  cout << "Цикл закончен. До свидания!" << endl;
  return 0;
}
