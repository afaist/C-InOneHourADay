#include "terminal.h"
#include <cstring>
#include <iostream>
#include <string>
#include <strings.h>
using namespace std;

class MyString {
private:
  char *buffer;
  MyString() {}
  const char badIndex = '0';

public:
  MyString(const char *initialInput) {
    cout << blue_bold;
    cout << "Вызов конструктора с параметром" << reset << endl;
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

  const char &operator[](int index) const {
    if (index < GetLength())
      return buffer[index];
    cout << red_bold;
    cout << "Неверный индекс!!!" << reset << endl;
    return badIndex;
  }

  int GetLength() const { return strlen(buffer); }
  operator const char *() { return buffer; }
  ~MyString() { delete[] buffer; }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Оператор индексации ([])" << reset << endl;
  cout << "Введите предложение: ";
  string strInput;
  getline(cin, strInput);
  MyString youSaid(strInput.c_str());
  cout << "Ваш ввод с использованием operator[]: " << endl;
  for (size_t i = 0; i < youSaid.GetLength(); i++) {
    cout << youSaid[i] << " ";
  }
  cout << endl;

  cout << "Введите индекс 0 - " << youSaid.GetLength() - 1 << ": ";
  int InIndex = 0;
  cin >> InIndex;
  cout << "Искомый символ в позиции " << InIndex;
  cout << " - " << youSaid[InIndex] << endl;
  return 0;
}
