#include "terminal.h"
#include <bits/fs_fwd.h>
#include <cstring>
#include <iostream>
#include <strings.h>
using namespace std;

class MyString {
private:
  char *buffer;
  // Закрытый конструктор
  MyString() : buffer(nullptr) {
    cout << blue_italic;
    cout << "Закрытый конструктор по умолчанию" << reset << endl;
  }
  const char badIndex = '0';

public:
  // Конструктор с инициализацией
  MyString(const char *initialInput) {
    cout << blue_bold;
    cout << "Вызов конструктора с параметром: " << initialInput << reset
         << endl;
    cout << reset;
    if (initialInput != nullptr) {
      buffer = new char[strlen(initialInput) + 1];
      strcpy(buffer, initialInput);
    } else
      buffer = nullptr;
  }
  // Перемещающий конструктор
  MyString(MyString &&moveSrc) {
    cout << cyan_bold;
    cout << "Вызов перемещающего конструктора: " << moveSrc.buffer << endl;
    cout << reset;
    if (moveSrc.buffer != nullptr) {
      buffer = moveSrc.buffer; // Получили буфер во владение
      moveSrc.buffer = nullptr; // Освободили перемещенный ресурс
    }
  }

  // Копирующий конструктор
  MyString(const MyString &copySource) {
    buffer = nullptr;
    cout << blue_bold;
    cout << "Вызов копирующего конструктора" << copySource.buffer << endl;
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
  // Перемещающее присваивание
  MyString &operator=(MyString &&moveSrc) {
    cout << blue_italic;
    cout << "Вызов перемещающего присваивания: " << moveSrc.buffer << endl;
    cout << reset;
    if ((moveSrc.buffer != nullptr) && (this != &moveSrc)) {
      delete[] buffer;         // Удаляем свой буфер
      buffer = moveSrc.buffer; // Забираем чужой буфер
      moveSrc.buffer = nullptr; // Освободили забранный ресурс
    }
    return *this;
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

  // Оператор сложения строк
  MyString operator+(const MyString &addThis) {
    cout << blue_italic;
    cout << "operator+: " << reset << endl;
    MyString newStr;
    if (addThis.buffer != nullptr) {
      newStr.buffer = new char[GetLength() + addThis.GetLength()];
      strcpy(newStr.buffer, buffer);
      strcat(newStr.buffer, addThis.buffer);
    } else
      cout << red << "Передана пустая строка!!!" << reset << endl;
    return newStr;
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
  ~MyString() {
    cout << green_italic;
    cout << "Деструктор с буфером = ";
    if (buffer == nullptr)
      cout << "nullptr";
    else {
      cout << buffer;
    }
    delete[] buffer;
    cout << reset << endl;
  }
};

MyString createString(const char *buffer) {
  MyString tmpString(buffer);
  return tmpString;
}

int main(int argc, char *argv[]) {
  cout << green;
  cout << "Использование перемещающих конструктора и оператора присваивания"
       << reset << endl;
  MyString CPP("of C++!!!");
  MyString World("World ");

  MyString sayHelloAgain = std::move(createString("Hello "));
  sayHelloAgain = sayHelloAgain + World + CPP;
  return 0;
}
