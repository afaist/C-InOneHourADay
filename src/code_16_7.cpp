#include "terminal.h"
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  char const *const locale = setlocale(LC_ALL, "ru_RU.UTF-8");
  if (locale) {
    wcout << w_green_bold;
    wcout << L"Преобразование строки в верхний и нижний регистр" << w_reset
          << endl;
    wcout << L"Введите строку для преобразования:" << endl;
    wcout << L"> ";
    wstring inStr;
    getline(wcin, inStr);
    wcout << endl;

    transform(inStr.begin(), inStr.end(), inStr.begin(), ::towupper);
    wcout << L"Преобразованная в верхний регистр строка:" << endl;
    wcout << inStr << endl << endl;

    transform(inStr.begin(), inStr.end(), inStr.begin(), ::towlower);
    wcout << L"Преобразованная в нижний регистр строка:" << endl;
    wcout << inStr << endl;
  } else
    cout << red_bold << "Не удалось установить locale" << reset << endl;
  return 0;
}
