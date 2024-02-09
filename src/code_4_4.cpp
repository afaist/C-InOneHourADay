/*
 * Создание динамического массива целых чисел и его заполнение
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  vector<int> dynArrNums(3); // Динамический массив целых чисел

  dynArrNums[0] = 365;
  dynArrNums[1] = -421;
  dynArrNums[2] = 789;

  cout << "Чисел в массиве: " << dynArrNums.size() << endl;

  cout << "Введите новое число для вставки в массив: ";
  int anotherNum = 0;
  cin >> anotherNum;
  dynArrNums.push_back(anotherNum);

  cout << "Чисел в массиве: " << dynArrNums.size() << endl;
  cout << "Последний элемент массива: ";
  cout << dynArrNums[dynArrNums.size() - 1] << endl;

  return 0;
}
