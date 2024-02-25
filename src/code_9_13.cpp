#include "terminal.h"
#include <cstring>
#include <iostream>

using namespace std;

class MyString {
private:
  char *buffer;

public:
  // Конструктор по умолчанию
  MyString(const char *initString) {
    buffer = nullptr;
    if (initString != nullptr) {
      buffer = new char[strlen(initString) + 1];
      strcpy(buffer, initString);
    }
  }
  // Копирующий конструктор
  MyString(const MyString &copySource) {
    buffer = nullptr;
    if (copySource.buffer != nullptr) {
      buffer = new char[strlen(copySource.buffer) + 1];
      strcpy(buffer, copySource.buffer);
    }
  }
  ~MyString() { delete[] buffer; }
  int GetLength() { return strlen(buffer); }
  const char *GetString() { return buffer; }
};

class Human {
private:
  int age;
  bool gender;
  MyString name;

public:
  Human(const MyString &InputName, int InputAge, bool g)
      : name(InputName), age(InputAge), gender(g) {}
  int GetAge() { return age; }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Размер классов и их экземпляров, вычисленный с помощью оператора "
          "sizeof"
       << reset << endl;
  MyString mansName("Adam");
  MyString womansName("Eve");

  cout << "sizeof(MyString) = " << sizeof(MyString) << endl;
  cout << "sizeof(mansName) = " << sizeof(mansName) << endl;
  cout << "sizeof(womansName) = " << sizeof(womansName) << endl;

  Human firstMan(mansName, 25, true);
  Human firstWoman(womansName, 18, false);

  cout << "sizeof(Human) = " << sizeof(Human) << endl;
  cout << "sizeof(firstMan) = " << sizeof(firstMan) << endl;
  cout << "sizeof(firstWoman) = " << sizeof(firstWoman) << endl;
  return 0;
}
