#include "terminal.h"
#include <iostream>

#include <list>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Вставка элементов в список" << reset << endl;
  cout << blue;
  cout << "Методы push_front() и push_back()" << reset << endl;
  cout << "Создаем список с двумя элементами" << endl;
  list<int> linkInst{-101, 42};
  DisplayContainer(linkInst);
  cout << "Добавляем в начало два числа" << endl;
  linkInst.push_front(10);
  linkInst.push_front(2011);
  DisplayContainer(linkInst);

  cout << "Добавляем в конец два числа" << endl;

  linkInst.push_back(-1);
  linkInst.push_back(9999);
  DisplayContainer(linkInst);

  cout << "Вставляем с помощью insert" << endl;
  cout << "Сначала в начало списка" << endl;
  linkInst.insert(linkInst.begin(), 1111);
  linkInst.insert(linkInst.begin(), 2222);
  DisplayContainer(linkInst);
  cout << "Вставляем в конец списка" << endl;
  linkInst.insert(linkInst.end(), 3333);
  linkInst.insert(linkInst.end(), 4444);
  DisplayContainer(linkInst);
  cout << "Вставка 4 элементов с одинаковым значением 0..." << endl;
  linkInst.insert(linkInst.begin(), 4, 0);
  DisplayContainer(linkInst);
  cout << "Создадим еще один список из семерок" << endl;
  list<int> linkSeven(5, 7);
  DisplayContainer(linkSeven);

  cout << "Вставка элементов из этого списка в предыдущий с позиции 3" << endl;
  linkInst.insert(next(linkInst.begin(), 3), linkSeven.begin(),
                  linkSeven.end());
  DisplayContainer(linkInst);
  return 0;
}
