#include "terminal.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  cout << blue_bold;
  cout << "Применение цикла for для диапазона к массивам и std::string" << reset
       << endl;

  cout << green << "Вывод массива целых чисел" << reset << endl;
  int someNums[] = {1, 101, -1, 40, 2040};
  for (const int &aNum : someNums) {
    cout << aNum << ' ';
  }
  cout << endl;

  for (auto anElement : {5, 222, 110, -45, 2017})
    cout << anElement << ' ';
  cout << endl;

  cout << green << "Вывод массива символов" << reset << endl;
  char charArray[] = {'h', 'e', 'l', 'l', 'o'};
  for (auto aChar : charArray)
    cout << aChar << ' ';
  cout << endl;

  cout << green << "Вывод массива double" << reset << endl;
  double moreNums[] = {3.14, -1.3, 22, 10101};
  for (auto anElement : moreNums)
    cout << anElement << ' ';
  cout << endl;

  cout << green << "Вывод элементов string" << reset << endl;
  string sayHello{"Hello World!"};
  for (auto anElement : sayHello) {
    cout << anElement << ' ';
  }
  cout << endl;
  return 0;
}
