#include "terminal.h"
#include <iostream>
#include <new>
using namespace std;

int main(int argc, char *argv[]) {
  try {
    // Запрос большого количества памяти
    int *pointsToManyNums = new int[0x1fffffffff];

    delete[] pointsToManyNums;
  } catch (bad_alloc) {
    cout << "Ошибка выделения памяти" << endl;
  }
  return 0;
}
