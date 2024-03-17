#include "terminal.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Конкатенация строк различными методами" << reset << endl;
  string sampleStr1("Hello");
  string sampleStr2{" String!"};

  sampleStr1 += sampleStr2;
  cout << sampleStr1 << endl << endl;

  string sampeStr3{" Указатели можно не использовать!"};
  sampleStr1.append(sampeStr3);
  cout << sampleStr1 << endl << endl;

  const char *constCStyleString = " Но можно и использовать!";
  sampleStr1.append(constCStyleString);
  cout << sampleStr1 << endl;
  return 0;
}
