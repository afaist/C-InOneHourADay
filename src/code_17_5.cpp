#include "terminal.h"
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Доступ к элементам вектора" << endl;
  cout << green;
  cout << "С использованием семантики массива" << reset << endl;
  cout << "Создаем вектор и выводим его содержимое" << endl;
  vector<int> integers{50, 1, 987, 1001};
  for (size_t index = 0; index < integers.size(); index++) {
    cout << "Элемент[" << index << "] = ";
    cout << integers[index] << endl;
  }
  cout << "Меняем третий элемент вектора" << endl;
  integers[2] = 2011;
  cout << "После замены" << endl;
  for (size_t index = 0; index < integers.size(); index++) {
    cout << "Элемент[" << index << "] = ";
    cout << integers[index] << endl;
  }
  cout << green;
  cout << "С помощью итераторов" << reset << endl;
  vector<int>::const_iterator element = integers.cbegin();
  while (element != integers.end()) {
    size_t index = distance(integers.cbegin(), element);
    cout << "Элемент в позиции ";
    cout << index << " равен " << *element << endl;
    ++element;
  }
  cout << green;
  cout << "С помощью at(index), front(), back()" << reset << endl;
  cout << "Функция at(index) генерирует исключение, если index недопустим"
       << endl;
  cout << "Элемент в позиции 2 = ";
  cout << integers.at(2) << endl;
  cout << "Первый элемент = ";
  cout << integers.front()<<endl;
  cout << "Последний элемент = ";
  cout << integers.back() << endl;

  return 0;
}
