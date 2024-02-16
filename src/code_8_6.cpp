#include "terminal.h"
#include <iostream>
#include <sys/types.h>

using namespace std;
int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Одинаковый размер указателей на различные типы данных" << reset
       << endl;

  cout << "sizeof для типов:" << endl;
  cout << "sizeof(char)                   = " << sizeof(char) << endl;
  cout << "sizeof(int)                    = " << sizeof(int) << endl;
  cout << "sizeof(double)                 = " << sizeof(double) << endl;
  cout << "sizeof(unsigned long long int) = "<<sizeof(unsigned long long int)<<endl;

  cout << "sizeof для указателей на типы:" << endl;
  cout << "sizeof(char*)                   = " << sizeof(char *) << endl;
  cout << "sizeof(int*)                    = " << sizeof(int *) << endl;
  cout << "sizeof(double*)                 = " << sizeof(double *) << endl;
  cout << "sizeof(unsigned long long int*) = "<<sizeof(unsigned long long int)<<endl;

  return 0;
}
