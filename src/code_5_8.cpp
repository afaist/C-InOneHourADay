#include "terminal.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cout << green;
  cout << "Побитовые операторы сдвига" << reset << endl;
  cout << "Введите число: ";
  int inputNum = 0;
  cin >> inputNum;

  int halfNum = inputNum >> 1;
  int quarterNum = inputNum >> 2;
  int doubleNum = inputNum << 1;
  int quadrupleNum = inputNum << 2;

  cout << "Четверть: " << quarterNum << endl;
  cout << "Половина: " << halfNum << endl;
  cout << "Удвоенное: " << doubleNum << endl;
  cout << "Учетверенное: " << quadrupleNum << endl;
  return 0;
}
