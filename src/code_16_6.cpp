#include "terminal.h"
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  char const *const locale = setlocale(LC_ALL, "ru_RU.UTF-8");
  if (locale) {
    wcout << w_green_bold;
    wcout << L"Обращение строки UTF-8 с помощью string::reverse()" << w_reset
          << endl;
    wcout << "locale = " << locale << endl;
    wstring sampleStr{L"Добрый день, Строка! Сегодня замечательный день, а "
                      "завтра будет лучше!"};
    wcout << L"Исходная строка:" << endl;
    wcout << sampleStr << endl;
    wcout << L"Длина строки = " << sampleStr.length() << endl;
    reverse(sampleStr.begin(), sampleStr.end());
    wcout << L"После применения std::reverse: " << endl;
    wcout << sampleStr << endl;

    wcout << w_green_bold;
    wcout << L"Проверка на пaлиндроме." << w_reset << endl;
    wstring palindromeStr(L"Вот сила типа кухарки марксистов. Вот с искрами "
                          L"крах у капиталистов!");
    wcout << palindromeStr << endl;
    wcout << L"После обращения строки:" << endl;
    reverse(palindromeStr.begin(), palindromeStr.end());
    wcout << palindromeStr << endl;
  } else
    cout << red_bold << "Не удалось установить locale" << reset << endl;

  return 0;
}
