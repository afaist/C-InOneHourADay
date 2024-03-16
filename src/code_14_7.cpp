#include "terminal.h"
#include <iostream>
using namespace std;

template <typename Res, typename ValType> void Sum(Res &result, ValType &val) {
  cout << cyan_bold;
  cout << "Sum с двумя параметрами" << endl;
  cout << cyan;
  cout << "Параметры: " << result << " и " << val << endl;
  result = result + val;
  cout << "Сложили, получили результат: " << result << reset << endl;
}

template <typename Res, typename First, typename... Rest>
void Sum(Res &result, First val1, Rest... valN) {
  cout << blue_bold;
  cout << "Sum с переменным числом параметров." << endl;
  cout << blue;
  cout << "Параметры \"" << result << "\" и \"" << val1 << "\"" << endl;
  result = result + val1;
  cout << "Сложили, получили результат = " << result << endl;
  cout << "Осталось параметров: " << sizeof...(Rest) << reset << endl;
  return Sum(result, valN...);
}

int main(int argc, char *argv[]) {
  double dResult = 0;
  Sum(dResult, 3.14, 4.56, 1.1111, 2.854, 45.01);
  cout << "dResult = " << dResult << endl;

  string strResult;
  Sum(strResult, "Hello ", "World ", "C++!");
  cout << "strResult = " << strResult.c_str() << endl;
  return 0;
}
