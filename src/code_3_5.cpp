#include <iostream>
int main(int argc, char *argv[]) {
  using namespace std;
  cout << "Размеры некоторых встроенных типов C++" << endl;

  cout << "bool               : " << sizeof(bool) << endl;
  cout << "char               : " << sizeof(char) << endl;
  cout << "unsigned short int : " << sizeof(unsigned short) << endl;
  cout << "short int          : " << sizeof(short) << endl;
  cout << "unsigned long int  : " << sizeof(unsigned long) << endl;
  cout << "long               : " << sizeof(long) << endl;
  cout << "int                : " << sizeof(int) << endl;
  cout << "unsigned long long : " << sizeof(unsigned long long) << endl;
  cout << "long long          : " << sizeof(long long) << endl;
  cout << "unsigned int       : " << sizeof(unsigned int) << endl;
  cout << "float              : " << sizeof(float) << endl;
  cout << "double             : " << sizeof(double) << endl;

  cout << "Вывод зависит от компилятора, компьютера и ОС" << endl;

  return 0;
}
