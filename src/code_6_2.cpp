#include "terminal.h"
#include <climits>
#include <cstring>
#include <iostream>
#include <string>
#include <sys/types.h>

using namespace std;

int main(int argc, char *argv[]) {
  cout << blue_bold;
  cout << "Использование условных выражений (составные инструкции)" << endl;
  cout << green_bold;
  cout << "Проверка емкости массива перед копированием строки" << reset << endl;
  cout << "Введите размер массива для строки (с учетом завершающего нуля): ";
  uint sizeArray = 0;
  cin >> sizeArray;
  cin.ignore(INT_MAX, '\n');
  cout << "Введите строку текста: " << endl;
  string userInput;
  getline(cin, userInput);

  char copyInput[sizeArray];
  if (userInput.length() < sizeArray - 1) {
    strcpy(copyInput, userInput.c_str());
    cout << "copyInput содержит: " << copyInput << endl;
  } else {
    cout << red_bold << "Длина строки превышает размер массива!" << reset
         << endl;
    cout << "Вы задали размер массива: " << sizeArray
         << ", а ввели строку длиной: " << userInput.length() << endl;
  }
  return 0;
}
