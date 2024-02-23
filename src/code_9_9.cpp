#include "terminal.h"
#include <cstring>
#include <iostream>

using namespace std;

class MyString {
private:
  char *buffer;

public:
  MyString(const char *initString) {
    buffer = nullptr;
    cout << "Вызов конструктора по умолчанию" << endl;
    if (initString != nullptr) {
      buffer = new char[strlen(initString) + 1];
      strcpy(buffer, initString);
      cout << "buffer указывает на: " << hex;
      cout << (unsigned int *)buffer << endl;
    }
  }
  MyString(const MyString &copySource) {
    buffer = nullptr;
    cout << blue_bold;
    cout << "Вызов копирующего конструктора" << endl;
    if (copySource.buffer != nullptr) {
      cout << "Выделяем собственный буфер" << endl;
      buffer = new char[strlen(copySource.buffer) + 1];
      cout << "Копируем исходный буфер в наш собственный" << endl;
      strcpy(buffer, copySource.buffer);
      cout << "buffer указывает на: " << hex;
      cout << (unsigned int *)buffer << endl;
    }
    cout << reset;
  }
  ~MyString() {
    cout << "Вызов деструктора" << endl;
    delete[] buffer;
  }
  int GetLength() { return strlen(buffer); }
  const char *GetString() { return buffer; }
};

void UseMyString(MyString str) {
  cout << red_bold;
  cout << "Вошли в функцию" << endl;
  cout << "Длина buffer в MyString равна ";
  cout << str.GetLength() << " символам" << endl;

  cout << "buffer содержит: " << str.GetString() << endl;
  cout << "Выходим из функции" << reset << endl;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование копирующего конструктора с глубоким копированием";
  cout << reset << endl;
  cout << "Создаем объект класса MyString" << endl;

  MyString sayHello("Hello from String Class!");
  cout << red;
  cout << "Вызываем функцию, в которую передаем объект как параметр" << endl;
  cout << reset;
  UseMyString(sayHello);
  return 0;
}
