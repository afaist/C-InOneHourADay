#include "terminal.h"
#include <iostream>
using namespace std;

union SimpleUnion {
  int num;
  char alphabet;
};

struct ComplexType {
  enum DataType { Int, Char } Type;
  union Value {
    int num;
    char alphabet;
    Value() {}
    ~Value() {}
  } value;
};

void DisplayComplexType(const ComplexType &obj) {
  switch (obj.Type) {
  case ComplexType::Int:
    cout << "union содержит число: " << obj.value.num << endl;
    break;
  case ComplexType::Char:
    cout << "union содержит символ: " << obj.value.alphabet << endl;
  default:
    break;
  }
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Union в С++: объявление, инстанцирование и применение sizeof"
       << reset << endl;
  SimpleUnion u1, u2;
  u1.num = 2100;
  u2.alphabet = 'C';
  cout << blue;
  cout
      << "Размер union, возвращаемый sizeof зависит от самого большого элемента"
      << reset << endl;
  cout << "sizeof(u1) с числом: " << sizeof(u1) << endl;
  cout << "sizeof(u2) с символом: " << sizeof(u2) << endl;

  ComplexType myData1, myData2;
  myData1.Type = ComplexType::Int;
  myData1.value.num = 2017;

  myData2.Type = ComplexType::Char;
  myData2.value.alphabet = 'X';

  DisplayComplexType(myData1);
  DisplayComplexType(myData2);

  return 0;
}
