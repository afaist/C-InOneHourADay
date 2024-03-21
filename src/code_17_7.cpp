#include "terminal.h"
#include <iostream>
#include <vector>
using namespace std;

template <typename T> void DisplayVector(const vector<T> &inVec) {
  cout << cyan;
  cout << "Вектор имеет следующие параметры:" << endl;
  cout << "Размер = " << inVec.size() << endl;
  cout << "Емкость (capacity) = " << inVec.capacity() << endl;
  cout << "Содержание вектора:" << endl;
  for (auto element = inVec.cbegin(); element != inVec.cend(); ++element)
    cout << *element << ' ';
  cout << reset << endl;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Методы вектора size() и capacity()" << reset << endl;
  cout << "Создаем вектор с 5 целыми числами" << endl;
  vector<int> intergers(5);
  DisplayVector(intergers);
  cout << "Вставляем элемент в конец вектора" << endl;
  intergers.push_back(666);
  DisplayVector(intergers);
  cout << "Вставляем другой элемент" << endl;
  intergers.push_back(777);
  DisplayVector(intergers);
  cout << "Удаляем последний элемент" << endl;
  intergers.pop_back();
  DisplayVector(intergers);
  return 0;
}
