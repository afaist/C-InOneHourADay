#include "terminal.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Два способа обращения к символу строки STL" << reset << endl;
  string stlString("Hello STL String!");
  cout << cyan;
  cout << "Синтаксис обращения к массиву:" << endl;
  for (size_t i = 0; i < stlString.length(); ++i) {
    cout << "Символ[" << i << "] = ";
    cout << stlString[i] << endl;
  }
  cout << reset << endl;
  cout << green << "Вывод с использованием итератора:" << endl;
  int charOffset = 0;
  string::const_iterator charLocator;
  for (auto charLocator = stlString.cbegin(); charLocator != stlString.cend();
       ++charLocator) {
    cout << "Символ[" << charOffset++ << "] = ";
    cout << *charLocator << endl;
  }
  cout << reset << endl;

  cout << "Представление строки как char* = ";
  cout << stlString.c_str() << endl;
  return 0;
}
