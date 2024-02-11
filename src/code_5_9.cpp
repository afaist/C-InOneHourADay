#include "terminal.h"
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
  cout << blue_bold;
  cout << "Использование составных операторов присваивания" << reset << endl;
  cout << "Введите число: ";
  int value = 0;
  cin >> value;

  value += 8;
  cout << "После += 8, value = " << value << endl;
  value -= 2;
  cout << "После -= 2, value = " << value << endl;
  value /= 4;
  cout << "После /= 4, value = " << value << endl;
  value *= 4;
  cout << "После *= 4, value = " << value << endl;
  value %= 1000;
  cout << "После %= 1000, value = " << value << endl;
  // Примечание: далее присваивание происходит в пределах cout
  cout << "После <<= 1, value = " << (value <<= 1) << endl;
  cout << "После >>= 2, value = " << (value >>= 2) << endl;
  cout << "После |= 0x55, value = " << (value |= 0x55) << endl;
  cout << "После ^= 0x55, value = " << (value ^= 0x55) << endl;
  cout << "После &= 0x0F, value = " << (value &= 0x0F) << endl;
  return 0;
}
