#include "terminal.h"
#include <iostream>
#include <string>
using namespace std;

// Шаблон класса для int, double
template <typename T1 = int, typename T2 = double> class HoldPair {
private:
  T1 value1;
  T2 value2;

public:
  HoldPair(const T1 &val1, const T2 &val2) : value1(val1), value2(val2) {}
  const T1 &GetFirstValue() const;
  const T2 &GetSecondValue() const;
};

// Специализация для двух int
template <> class HoldPair<int, int> {
private:
  int value1;
  int value2;
  string strFun;

public:
  HoldPair(const int &val1, const int &val2) : value1(val1), value2(val2) {}

  const int &GetFirstValue() const {
    cout << "Возвращает " << value1 << endl;
    return value1;
  }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Специализация шаблона" << endl;
  cout << green_italic;
  cout << "Описан шаблонный класс с параметрами по умолчанию" << endl;
  cout << "int и double, и специализированный класс на основе шаблона" << endl;
  cout << "с параметрами int, int и дополнительным членом strFun" << endl;
  cout
      << "При этом шаблон даже не описан до конца (нет реализации двух функций)"
      << endl;
  cout << "Но шаблон игнорируется, поскольку не используется" << reset << endl;
  HoldPair<int, int> pairIntInt(222, 333);
  pairIntInt.GetFirstValue();
  return 0;
}
