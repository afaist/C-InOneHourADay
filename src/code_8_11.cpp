#include "terminal.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Переменная массива - это указатель на первый его элемент" << reset
       << endl;

  int myNumbers[5];
  int *pointToNums = myNumbers;

  cout << "Вывод адреса, содержащегося в указателе" << endl;
  cout << "pointToNums = " << hex << pointToNums << endl;
  cout << "Адрес первого элемента массива" << endl;
  cout << "&myNumbers[0] = " << hex << &myNumbers[0] << endl;
  return 0;
}
