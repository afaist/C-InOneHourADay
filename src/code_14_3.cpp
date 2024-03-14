#include "terminal.h"
#include <iostream>
using namespace std;

template <typename Type>
const Type &GetMax(const Type &value1, const Type &value2) {
  if (value1 > value2)
    return value1;
  else
    return value2;
}

template <typename Type>
void DisplayComparison(const Type &value1, const Type &value2) {
  cout << "GetMax(" << value1 << ", " << value2 << ") = ";
  cout << GetMax(value1, value2) << endl;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Шаблон (template) функции GetMax для вычисления большего из двух "
          "значений"
       << reset << endl;

  int num1 = -101, num2 = 2011;
  DisplayComparison(num1, num2);

  double d1 = 3.14, d2 = 3.1416;
  DisplayComparison(d1, d2);

  string name1("Jack"), name2("John");
  DisplayComparison(name1, name2);

  return 0;
}
