#include "terminal.h"
#include <cstring>
#include <iostream>

using namespace std;

class MyString {
public:
  MyString(const char *initString) {
    cout << "Вызов конструктора" << endl;
    if (initString != nullptr) {
      buffer = new char[strlen(initString) + 1];
      strcpy(buffer, initString);
    } else
      buffer = nullptr;
  }
  ~MyString() {
    cout << "Вызов деструктора" << endl;
    if (buffer != nullptr) {
      delete[] buffer;
    }
  }
  int GetLength() { return strlen(buffer); }
  const char *GetString() { return buffer; }

private:
  char *buffer;
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Пример класса, инкапсулирующего буфер в стиле C" << endl;
  cout << red_bold;
  cout << "Никогда так не делайте, используйте std::string!" << reset << endl;
  MyString sayHello("Hello from String Class");
  cout << "Содержание буфера длиной ";
  cout << sayHello.GetLength() << " символа." << endl;
  cout << "Буфер содержит: " << sayHello.GetString() << endl;
  return 0;
}
