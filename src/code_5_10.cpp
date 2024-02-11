#include "terminal.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  cout << red_bold;
  cout << "Использование sizeof для массива" << reset << endl;
  int myNumbers[100] = {0};
  cout << "Байтов для типа int: " << sizeof(int) << endl;
  cout << "Байтов для массива из 100 элементов myNumbers: " << sizeof(myNumbers) << endl;
  cout << "Байтов для элемента массива: " << sizeof(myNumbers[0]) << endl;
  return 0;
}
