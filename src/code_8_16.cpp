#include "terminal.h"
#include <iostream>
#include <new>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование оператора new(nothrow)" << reset << endl;
  // Запрос большого количества памяти с помощью new(nothrow)
  int *pointsToNums = new (nothrow) int[0x1ffffffffff];
  if (pointsToNums) // != nullptr
  {
    delete[] pointsToNums;
  } else
    cout << "Ошибка выделения памяти" << endl;

  return 0;
}
