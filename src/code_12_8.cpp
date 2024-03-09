#include "terminal.h"
#include <cstring>
#include <iostream>
using namespace std;

class MyString {
private:
  char *buffer;

public:
  MyString(const char *initialInput) {
    if (initialInput != nullptr) {
      buffer = new char[strlen(initialInput) + 1];
      strcpy(buffer, initialInput);
    } else
      buffer = nullptr;
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
  // Оператор копирующего присваивания
  MyString &operator=(const MyString &copySource) {
    cout << blue_bold;
    cout << "Вызов копирующего присванивания" << reset << endl;
    if ((this != &copySource) && (copySource.buffer != nullptr)) {
      if (buffer != nullptr)
        delete[] buffer;
      buffer = new char[strlen(copySource.buffer) + 1];
      strcpy(buffer, copySource.buffer);
    }
    return *this;
  }

  operator const char *() { return buffer; }
  ~MyString() { delete[] buffer; }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Оператор копирующего присваивания" << reset << endl;
  MyString string1("Hello ");
  MyString string2(" World");

  cout << "До присваивания, string1 и string2: " << endl;
  cout << string1 << string2 << endl;
  string2 = string1;
  cout << "После присваивания string2 = string1: " << endl;
  cout << string1 << string2 << endl;
  return 0;
}
