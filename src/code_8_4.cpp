#include "terminal.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование оператора разыменования * для доступа "
       << "к целочисленному значению" << reset << endl;

  int age = 30;
  int dogsAge = 9;
  cout << "age     = " << age << endl;
  cout << "dogsAge = " << dogsAge << endl;

  int *pointToInt = &age;
  cout << "pointToInt указывает на age" << endl;
  cout << "Значение указателя pointToInt = 0x" << hex << pointToInt << endl;
  cout << "Значение, хранящееся в указанном месте памяти:" << endl;
  cout << "*pointToInt = " << dec << *pointToInt << endl;

  pointToInt = &dogsAge;
  cout << "pointToInt указывает на dogsAge" << endl;
  cout << "pointToInt = 0x" << hex << pointToInt << endl;
  cout << "*pointToInt = " << dec << *pointToInt << endl;

  return 0;
}
