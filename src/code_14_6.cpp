#include "terminal.h"
#include <iostream>
using namespace std;

template <typename T> class TestStatic {
public:
  static int staticVal;
};
// Создаем экземпляр статического члена для шаблона класса
template <typename T> int TestStatic<T>::staticVal;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Статические переменные шаблонного класса" << endl;
  cout << "Для разных типов разные статические переменные" << reset << endl;
  TestStatic<int> intInstance;
  intInstance.staticVal = 2011;

  TestStatic<double> dbInstance;
  dbInstance.staticVal = 1011;

  cout << "staticVal для int равен " << intInstance.staticVal << endl;
  cout << "staticVal для double равен " << dbInstance.staticVal << endl;

  return 0;
}
