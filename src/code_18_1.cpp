#include "terminal.h"
#include <iostream>
#include <list>
#include <vector>

using namespace std;
template <typename T> void DisplayList(const list<T> &List) {
  cout << blue;
  cout << "Адрес списка: " << &List << endl;
  cout << "Содержание списка:" << endl;
  if (List.empty()) {
    cout << "Список пуст";
  } else {
    for (auto item : List) {
      cout << item << ' ';
    }
  }
  cout << reset << endl;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Способы создания экземпляров класса std::list (связанный список)"
       << reset << endl;
  cout << "Создаем пустой список" << endl;
  list<int> linkInts;
  DisplayList(linkInts);

  cout << "Создаем список с 10 целыми числами" << endl;
  list<int> listWith10Integers(10);
  DisplayList(listWith10Integers);

  cout << "Создаем список с 4 целыми числами, равными 99" << endl;
  list<int> listWith4IntegerEach99(10, 99);
  DisplayList(listWith4IntegerEach99);

  cout << "Создаем точную копию существующего списка" << endl;
  list<int> listCopyAnother(listWith4IntegerEach99);
  DisplayList(listCopyAnother);

  cout << "Создание списка из вектора (или другого контейнера)" << endl;
  vector<int> vecIntegers(5, 2017);
  list<int> listContainsCopyOfAnother(vecIntegers.cbegin(), vecIntegers.cend());
  DisplayList(listContainsCopyOfAnother);

  return 0;
}
