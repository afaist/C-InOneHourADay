#include "terminal.h"
#include <iostream>

using namespace std;

int main() {
  cout << green_bold;
  cout << "Работа с данными с помощью указателя и оператора разыменования";
  cout << reset << endl;

  int dogsAge = 30;
  cout << "Изначально dogsAge " << dogsAge << endl;
  int *pAge = &dogsAge;
  cout << "pAge указывает на dogsAge " << endl;
  cout << "Введите значение dogsAge : ";
  // Сохранение значения в области памяти по адресу pAge
  cin >> *pAge;
  cout << " Значение сохранено по адресу Ох" << hex << pAge << endl;
  cout << " Теперь dogsAge = " << dec << dogsAge << endl;
  return 0;
}
