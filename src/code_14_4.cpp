#include "terminal.h"
#include <iostream>
using namespace std;

template <typename T1 = int, typename T2 = double> class HoldsPair {
  // Щаблон с параметрами по умолчанию: int и double
private:
  T1 value1;
  T2 value2;

public:
  HoldsPair(const T1 &val1, const T2 &val2) : value1(val1), value2(val2) {
    cout << blue;
    cout << "Конструктор с типами и значениями:" << endl;
    cout << typeid(val1).name() << " - " << val1 << endl;
    cout << typeid(val2).name() << " - " << val2 << endl;
    cout << reset;
  }

  const T1 &GetFirstValue() const { return value1; }
  const T2 &GetSecondValue() const { return value2; }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Шаблон класса с двумя атрибутами с параметрами по умолчанию" << reset
       << endl;
  cout << "Создаем объект класса с типом параметров по умолчанию" << endl;
  HoldsPair<> pairIntDbl(300, 10.09);
  cout << "Создаем объект класса с другими типами параметров" << endl;
  HoldsPair<short, const char *> pairShortStr(25, "Шаблон");
  cout << "Первый объект содержит: " << endl;
  cout << "value1: " << pairIntDbl.GetFirstValue() << endl;
  cout << "value2: " << pairIntDbl.GetSecondValue() << endl;

  cout << "Второй объект содержит: " << endl;
  cout << "value1: " << pairShortStr.GetFirstValue() << endl;
  cout << "value2: " << pairShortStr.GetSecondValue() << endl;

  return 0;
}
