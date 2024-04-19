#include "../terminal.h"
#include <algorithm>
#include <cctype>
#include <map>
#include <string>
using namespace std;

template <typename T> void DisplayContents(const T &cont) {
  cout << blue;
  cout << "Отображение типа:" << endl;
  cout << typeid(cont).name() << endl;
  if (cont.empty())
    cout << "Отображение пусто";
  else {
    cout << "Отображение содержит " << cont.size() << " элемента(ов):" << endl;
    for (auto element = cont.cbegin(); element != cont.cend(); ++element)
      cout << element->first << " -> " << element->second << endl;
    cout << reset << endl;
  }
}

struct PredIgnoreCase {
  bool operator()(const string &str1, const string &str2) const {
    string str1NoCase(str1), str2NoCase(str2);
    transform(str1.begin(), str1.end(), str1NoCase.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2NoCase.begin(), ::tolower);
    return (str1NoCase < str2NoCase);
  }
};

typedef map<string, string> DIR_WITH_CASE;
typedef map<string, string, PredIgnoreCase> DIR_NOCASE;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Предоставление предиката сортировки без учета регистра символов"
       << reset << endl;
  cout << "Создаем чувствительное к регистру отображение" << endl;
  DIR_WITH_CASE dirWithCase;
  dirWithCase.insert({"John", "2345674"});
  dirWithCase.insert({"JOHN", "2345674"});
  dirWithCase.insert({"Sara", "42367236"});
  dirWithCase.insert({"Jack", "32455348"});
  DisplayContents(dirWithCase);

  cout << "Создаем нечувствительное к регистру отображение" << endl;
  DIR_NOCASE dirNoCase(dirWithCase.begin(), dirWithCase.end());
  DisplayContents(dirNoCase);

  cout << "Поиск имени в двух отображениях" << endl;
  cout << "Введите имя для поиска:" << endl << "> ";
  string name;
  cin >> name;
  cout << string(60, '-') << endl;
  cout << "Ищем с учетом регистра символов" << endl;
  auto pairWithCase = dirWithCase.find(name);
  if (pairWithCase != dirWithCase.end())
    cout << "Номер при чувствительности к регистру: " << pairWithCase->second
         << endl;
  else
    cout << "Имя не найдено" << endl;
  cout << string(60, '-') << endl;
  cout << "Ищем без учета регистра символов" << endl;
  auto pairNoCase = dirNoCase.find(name);
  if (pairNoCase != dirNoCase.end())
    cout << "Номер при нечувствительности к регистру: " << pairNoCase->second
         << endl;
  else {
    cout << "Имя не найдено" << endl;
  }
  return 0;
}
