#include "terminal.h"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "STL поиск элемента по его позиции в векторе" << reset << endl;

  cout << "Создаем вектор целых чисел" << endl;
  vector<int> intArray;
  cout << "Помещаем в него четыре значения" << endl;
  intArray.push_back(50);
  intArray.push_back(2991);
  intArray.push_back(23);
  intArray.push_back(9999);
  cout << "Содержимое вектора: " << endl;
  vector<int>::iterator arrIterator = intArray.begin();
  while (arrIterator != intArray.end()) {
    cout << *arrIterator << endl;
    ++arrIterator;
  }
  cout << "Создаем итератор для поиска" << endl;
  vector<int>::iterator elFound = find(intArray.begin(), intArray.end(), 2991);
  if (elFound != intArray.end()) {
    int elPos = distance(intArray.begin(), elFound);
    cout << "Значение " << *elFound;
    cout << " находится в позиции " << elPos << endl;
  }
  return 0;
}
