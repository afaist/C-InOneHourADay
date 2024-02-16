#include "terminal.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование смещений и операторов для инкремента и "
       << "декремента указателей в массиве" << reset << endl;

  cout << "Количество вводимых чисел (целое число)? ";
  uint numEntries = 0;
  cin >> numEntries;
  int *pointsToInts = new int[numEntries];
  cout << "Память выделена" << endl;
  for (size_t i = 0; i < numEntries; i++) {
    cout << "Введите число " << i + 1 << ": ";
    cin >> *(pointsToInts + i);
  }
  cout << "Введены числа: " << endl;
  for (size_t i = 0; i < numEntries; i++) {
    cout << "По адресу: " << hex << pointsToInts << " = ";
    cout << dec << *(pointsToInts++) << endl;
  }
  cout << endl;
  cout << "Возврат указателя в начальную позицию" << endl;
  pointsToInts -= numEntries;
  cout << "Освобождение памяти" << endl;
  delete[] pointsToInts;

  return 0;
}
