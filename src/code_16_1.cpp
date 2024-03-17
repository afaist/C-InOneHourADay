#include "terminal.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Создание экземпляров строк STL и их копирование" << reset << endl;
  const char *constCStyleString = "Hello constant String!";
  cout << "Константная строка: " << constCStyleString << endl;

  string strFromConst(constCStyleString);
  cout << "Создание строки STL вызовом конструктора с константной строкой"
       << endl;
  cout << "strFromConst: " << strFromConst << endl;

  string str2("Hello String!");
  string str2Copy(str2);
  cout << "Копия строки str2Copy: " << str2Copy << endl;

  string strPartialCopys(constCStyleString, 5);
  cout << "Создание строки из первых пяти символов другой строки" << endl;
  cout << "strPartialCopys: " << strPartialCopys << endl;

  string strRepeatChars(60, '=');
  cout << "Создание строки повторением символа 60 раз" << endl;
  cout << "strRepeatChars: " << strRepeatChars << endl;
  return 0;
}
