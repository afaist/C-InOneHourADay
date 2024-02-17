#include "terminal.h"
#include <iostream>
using namespace std;

void GetSquare(int &number) {
  // аргумент является ссылкай, следовательно
  // значение его изменится после умножения
  number *= number;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Возврат результата через параметр, передаваемый по ссылке" << reset
       << endl;
  cout << "Введите число: ";
  int number = 0;
  cin >> number;

  GetSquare(number);

  cout << "Квадрат равен: " << number << endl;
  return 0;
}
