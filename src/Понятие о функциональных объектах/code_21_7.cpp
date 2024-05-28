#include "../terminal.h"
#include <algorithm>
#include <cctype>
#include <clocale>
#include <cwctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CompareStringNoCase {
public:
  bool operator()(const wstring &str1, const wstring &str2) const {
    wstring str1LowerCase;
    str1LowerCase.resize(str1.size());
    transform(str1.begin(), str1.end(), str1LowerCase.begin(), ::towlower);
    wstring str2LowerCase;
    str2LowerCase.resize(str2.size());
    transform(str2.begin(), str2.end(), str2LowerCase.begin(), ::towlower);

    return (str1LowerCase < str2LowerCase);
  }
};

template <typename T> void DisplayContents(const T &container) {
  wcout << w_blue_italic << L"Содержимое вектора:" << endl;
  for (auto element = container.cbegin(); element != container.cend();
       ++element) {
    wcout << *element << endl;
  }
  wcout << w_reset;
}
int main(int argc, char *argv[]) {
  char const *const locale = setlocale(LC_ALL, "ru_RU.UTF-8");
  wcout << w_green_bold;
  wcout << L"Использование функционального объекта класса CompareStringNoCase"
        << endl;
  wcout << L"для не зависящей от регистра сортировки вектора строк";
  wcout << w_reset << endl;
  wcout << L"Создаем вектор строк с именами" << endl;
  vector<wstring> vecNames;
  vecNames.push_back(L"jim");
  vecNames.push_back(L"Jack");
  vecNames.push_back(L"Sam");
  vecNames.push_back(L"anna");
  vecNames.push_back(L"Иван");
  vecNames.push_back(L"семен");
  vecNames.push_back(L"Вася");
  vecNames.push_back(L"гриша");
  vecNames.push_back(L"Петр");
  vecNames.push_back(L"андрей");
  DisplayContents(vecNames);
  wcout << L"Введите какое-нибудь имя: ";
  wstring inName;
  wcin >> inName;
  vecNames.push_back(inName);
  DisplayContents(vecNames);
  wcout << L"Имена после сортировки по умолчанию:" << endl;
  sort(vecNames.begin(), vecNames.end());
  DisplayContents(vecNames);
  wcout << L"Имена после сортировки с предикатом:" << endl;
  sort(vecNames.begin(), vecNames.end(), CompareStringNoCase());
  DisplayContents(vecNames);

  return 0;
}
