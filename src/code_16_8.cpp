#include "terminal.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование оператора \"\"s в C++14" << reset << endl;
  string str1("Традиционная \0 строка");
  cout << "Обычная строка без s обрезается на символе 0" << endl;
  cout << "Str1: " << str1 << " Длина строки: " << str1.length() << endl;

  string str2("Инициализация \0 в С++14"s);
  cout << "Строка с использованием оператора \"\"s" << endl;
  cout << "Str2: " << str2 << " Длина: " << str2.length() << endl;
  return 0;
}
