#include "terminal.h"
#include <iostream>
#include <vector>
using namespace std;

template <typename T> void DisplayVector(const vector<T> &inVec) {
  cout << blue;
  cout << "Элементы вектора: ";
  for (auto element = inVec.cbegin(); element != inVec.cend(); ++element)
    cout << *element << ' ';
  cout << reset << endl;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Вставка элементов в вектор" << reset << endl;
  cout << green;
  cout << "Использование push_back()" << reset << endl;
  cout << "Создаем пустой вектор" << endl;
  vector<int> integers;
  cout << "Вставляем в него элементы: 50,1,987,1001" << endl;
  integers.push_back(50);
  integers.push_back(1);
  integers.push_back(987);
  integers.push_back(1001);
  cout << "Размер вектора после вставки: ";
  cout << integers.size() << endl;
  DisplayVector(integers);

  cout << green;
  cout << "Использование vector::insert()" << reset << endl;
  cout << "Создаем вектор с 4 элементами со значением 90" << endl;
  vector<int> intVec(4, 90);
  DisplayVector(intVec);
  cout << "Вставляем 25 в начало вектора" << endl;
  intVec.insert(intVec.begin(), 25);
  DisplayVector(intVec);
  cout << "Вставляем в конец два числа со значением 45" << endl;
  intVec.insert(intVec.end(), 2, 45);
  DisplayVector(intVec);

  cout << "Создаем другой вектор с двумя элементами" << endl;
  vector<int> intAnother(2, 30);
  DisplayVector(intAnother);
  cout << "Вставляем значения из этого вектора в предущий с позиции 1" << endl;
  intVec.insert(intVec.begin() + 1, intAnother.begin(), intAnother.end());
  DisplayVector(intVec);

  return 0;
}
