#include "terminal.h"
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  char const *const locale = setlocale(LC_ALL, "ru_RU.UTF-8");
  if (locale) {
    wcout << w_green_bold;
    wcout << L"Усечение строки UTF-8 с помощью string::erase()" << w_reset
          << endl;
    wcout << "locale = " << locale << endl;
    wstring sampleStr{L"Добрый день, Строка! Сегодня замечательный день, а "
                      "завтра будет лучше!"};
    wcout << L"Исходная строка:" << endl;
    wcout << sampleStr << endl;
    wcout << L"Длина строки = " << sampleStr.length() << endl;
    wcout << L"Удаление второго предложения: ";
    sampleStr.erase(20, 70);
    wcout << sampleStr << endl << endl;

    wcout << w_green_bold;
    wcout << L"Поиск символа \"С\" в строке и его удаление." << w_reset << endl;
    wstring::iterator iCharC = find(sampleStr.begin(), sampleStr.end(), L'С');
    if (iCharC != sampleStr.end())
      sampleStr.erase(iCharC);
    wcout << sampleStr << endl << endl;
    wcout << w_blue;
    wcout << L"Удаление символово от begin() до end(): " << endl;
    sampleStr.erase(sampleStr.begin(), sampleStr.end());
    if (sampleStr.length() == 0)
      wcout << L"Строка пуста" << w_reset << endl;
  } else
    cout << red_bold << "Не удалось установить locale" << reset << endl;

  return 0;
}
