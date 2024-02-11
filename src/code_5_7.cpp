#include "terminal.h"
#include <bitset>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green;
  cout << "Использование побитовых операторов для работы "
          "с отдельными битами целого числа"
       << reset << endl;
  cout << "Введите число (0-255): ";
  unsigned short inputNum = 0;
  cin >> inputNum;
  if (inputNum < 0 || inputNum > 255) {
    cout << red;
    cout << "Неверный ввод!" << reset << endl;
    return -1;
  }

  bitset<8> inputBits(inputNum);
  cout << inputNum << " в бинарном виде равно " << inputBits << endl;
  bitset<8> BitwiseNOT = (~inputNum);
  cout << "Побитовое НЕ ~ " << endl;
  cout << "~" << inputBits << " = " << BitwiseNOT << endl;

  cout << "Логическое И (&) с 00001111 (0x0F)" << endl;
  bitset<8> BitwiseAND = (0x0F & inputNum);
  cout << "00001111 & " << inputBits << " = " << BitwiseAND << endl;

  cout << "Логическое ИЛИ (|) с 00001111 (0x0F)" << endl;
  bitset<8> BitwiseOR = (0x0F | inputNum);
  cout << "00001111 | " << inputBits << " = " << BitwiseOR << endl;

  cout << "Логическое XOR (^) с 00001111 (0x0F)" << endl;
  bitset<8> BitwiseXOR = (0x0F ^ inputNum);
  cout << "00001111 ^ " << inputBits << " = " << BitwiseXOR << endl;

  return 0;
}
