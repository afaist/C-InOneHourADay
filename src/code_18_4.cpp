#include "terminal.h"
#include <iostream>
#include <list>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Удаление элементов из списка" << reset << endl;
  cout << "Создаем список из 4 элементов" << endl;
  list<int> linkInts{4, 3, 5, -1, 2017};
  DisplayContainer(linkInts);

  cout << "Вставляем число в начало списка";
  cout << "И сохраняем итератор" << endl;
  auto val1 = linkInts.insert(linkInts.begin(), 2222);
  DisplayContainer(linkInts);
  cout << "Удаляем элемент " << *val1 << ", связанный с итератором" << endl;
  linkInts.erase(val1);
  DisplayContainer(linkInts);
  cout << "Удаляем диапазон элементов" << endl;
  cout << "Аналогично очистке списка командой  clear()"<<endl;
  linkInts.erase(linkInts.begin(), linkInts.end());
  cout << "Количество элементов после удаления диапазона" << endl;
  cout << linkInts.size() << endl;

  return 0;
}
