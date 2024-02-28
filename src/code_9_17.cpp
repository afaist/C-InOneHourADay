#include "terminal.h"
#include <iostream>
#include <string>
using namespace std;

class Aggregate1 {
public:
  int num;
  double pi;
  void Show() {
    cout << blue;
    cout << "Элементы класса Aggregate1:" << endl;
    cout << "num = " << num << endl;
    cout << "pi = " << pi << endl;
    cout << reset;
  }
};

struct Aggregate2 {
  char hello[6];
  int impYears[3];
  string world;
  void Show() {
    cout << red;
    cout << "Элементы структуры Aggregate2:" << endl;
    cout << "hello = " << hello << endl;
    cout << "world = " << world << endl;
    cout << "impYears[3]:" << endl;
    for (int n : impYears) {
      cout << n << endl;
    }
    cout << reset;
  }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Агрегатная инициализация класса" << reset << endl;
  int myNums[] = {9, 5, -1};
  Aggregate1 a1{2017, 3.14};
  a1.Show();

  Aggregate2 a2{{'h', 'e', 'l', 'l', 'o'}, {2011, 2014, 2017}, "world"};
  a2.Show();

  cout << "Альтернативный вариант инициализации" << endl;
  Aggregate2 a2_2{'h', 'e', 'l', 'l', 'o', '\0', 2020, 2021, 2022, "world"};
  a2_2.Show();

  return 0;
}
