#include "terminal.h"
#include <cstddef>
#include <fcntl.h>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  char const *const locale = setlocale(LC_ALL, "ru_RU.UTF-8");
  if (locale) {
    wcout << L"Поиск в строке с символами UTF-8" << endl;
    wcout << "locale = " << locale << endl;
    set<wchar_t> letters;
    wstring sampleStr{L"Добрый день, Строка! Сегодня замечательный день, а "
                      "завтра будет лучше!"};
    wcout << L"Исходная строка:" << endl;
    wcout << sampleStr << "\n\n";
    size_t charPos = sampleStr.find(L"день", 0);

    if (charPos != wstring::npos) {
      wcout << L"\"день\" найдено в позиции " << charPos << endl;
    } else
      wcout << L"Подстрока не найдена!" << endl;

    wcout << L"Поиск всех подстрок \"день\"" << endl;
    size_t subStrPos = sampleStr.find(L"день", 0);
    while (subStrPos != wstring::npos) {
      wcout << L"Найден \"день\" в позиции " << subStrPos << endl;
      size_t searchOffset = subStrPos + 1;
      subStrPos = sampleStr.find(L"день", searchOffset);
    }
  } else
    cout << red_bold << "Не удалось установить locale" << reset << endl;

  return 0;
}
