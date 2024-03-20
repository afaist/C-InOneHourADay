#include "terminal.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void ShowVector(const vector<int> &Vector) {
  cout << blue;
  for_each(Vector.cbegin(), Vector.cend(),
           [](const int n) { cout << n << " "; });
  cout << reset << endl;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Различные формы создания векторов std::vector" << reset << endl;
  cout << "Пустой вектор int" << endl;
  vector<int> integers;

  cout << "Вектор целых чисел с инициализацией" << endl;
  vector<int> initVector{202, 2017, -1};
  ShowVector(initVector);
  cout << "Пустой вектор с 10 элементами (может расти)" << endl;
  vector<int> tenElements(10);
  cout << "tenElements size = " << tenElements.size() << endl;
  cout << "Вектор с 10 элементами, каждый равен 42" << endl;
  vector<int> tenElemInit(10, 42);
  ShowVector(tenElemInit);
  cout << "Инициализация вектора содержимым другого вектора" << endl;
  vector<int> copyVector(tenElemInit);
  ShowVector(copyVector);
  cout << "Инициализация вектора 5 элементами другого вектора" << endl;
  vector<int> partialCopy(tenElements.cbegin(), tenElements.cbegin() + 5);
  ShowVector(partialCopy);

  return 0;
}
