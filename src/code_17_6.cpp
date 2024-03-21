#include "terminal.h"
#include <iostream>
#include <vector>
using namespace std;

template <typename T> void DisplayVector(const vector<T> &inVec) {
  cout << cyan;
  cout << "Вектор содержит " << inVec.size() << " элементов:" << endl;
  for (auto element = inVec.cbegin(); element != inVec.cend(); ++element)
    cout << *element << ' ';
  cout << reset << endl;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Удаление элементов вектора" << reset << endl;
  cout << "Создаем пустой char вектор" << endl;
  vector<char> charVec;
  cout << "Вставляем в него символы из слова Vector" << endl;
  string s{"Vector"};
  for (auto c : s)
    charVec.push_back(c);
  DisplayVector(charVec);
  cout << "Удаляем один элемент в конце" << endl;
  charVec.pop_back();
  DisplayVector(charVec);
  cout << "Удаление элементов с индексами 1 и 2" << endl;
  charVec.erase(charVec.begin() + 1, charVec.begin() + 3);
  DisplayVector(charVec);

  return 0;
}
