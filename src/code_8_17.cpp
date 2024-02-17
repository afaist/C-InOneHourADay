#include "terminal.h"
#include <ios>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Ссылки как псевдонимы переменных" << reset << endl;
  int original = 30;
  cout << "original = " << original << endl;
  cout << "Адрес original: " << hex << &original << endl;

  cout << "Объявляем ссылку ref на original" << endl;
  int &ref = original;
  cout << "Адрес ref: " << hex << &ref << endl;
  cout << "Значение ref = " << dec << ref << endl;
  cout << "Объявляем вторую ссылку ref2 на ref" << endl;
  int &ref2 = ref;
  cout << "Адрес ref2: " << hex << &ref2 << endl;
  cout << "Значение ref2 = " << dec << ref2 << endl;
  return 0;
}
