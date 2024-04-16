#include "../terminal.h"
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

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование для поиска функции-члена find()" << reset << endl;
  cout << "Создаем map с ключами - целыми числами, значениями - строками"
       << endl;
  map<int, string> mapIntToStr;
  cout << "Вставляем значения" << endl;
  mapIntToStr.insert({3, "Three"});
  mapIntToStr.insert({45, "Forty Five"});
  mapIntToStr.insert({-1, "Minus One"});
  mapIntToStr.insert({1000, "Thousand"});
  DisplayContents(mapIntToStr);
  cout << "Введите ключ для поиска: ";
  int Key = 0;
  cin >> Key;
  auto pairFound = mapIntToStr.find(Key);
  if (pairFound != mapIntToStr.end()) {
    cout << "Ключ " << pairFound->first << " указывает на ";
    cout << "значение  " << pairFound->second << endl;
  } else {
    cout << "Ключ " << Key << " не найден!" << endl;
  }
  return 0;
}
