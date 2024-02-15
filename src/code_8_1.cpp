#include "terminal.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Определение адресов переменных типа int и double" << reset << endl;
  int age = 30;
  const double Pi = 3.1416;

  cout << "Адрес age: 0x" << hex << &age << endl;
  cout << "Адрес Pi: 0x" << hex << &Pi << endl;
  return 0;
}
