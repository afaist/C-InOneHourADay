#include "terminal.h"
#include <ios>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование оператора * для доступа к памяти, "
       << "выделенной с помощью оператора new" << reset << endl;
  cout << blue;
  cout << "Выделение памяти с помощью оператора new" << reset << endl;
  int *pointToAnAge = new int;
  cout << "Адрес выделенной памяти: " << hex << pointToAnAge << endl;
  cout << "Размер выделенной памяти: " << sizeof(*pointToAnAge) << endl;
  cout << "Первоначальное значение выделенной памяти: "<<*pointToAnAge<<endl;

  cout << "Использование выделенной памяти" << endl;
  cout << "Введите возраст собаки: ";
  cin >> *pointToAnAge;
  cout << "Возраст " <<dec<< *pointToAnAge << " хранится по "
       << "адресу " << hex << pointToAnAge << endl;
  cout << "Освобождение памяти с помощью оператора delete" << endl;
  delete pointToAnAge;

  return 0;
}
