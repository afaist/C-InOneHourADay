#include "../terminal.h"
#include <cstddef>
#include <map>
#include <string>
#include <utility>
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
  cout << "Поиски и удаление элементов из multimap" << reset << endl;
  cout << "Создаем multimap" << endl;
  multimap<int, string> mmapIntToStr;
  cout << "Вставляем пары \"ключ-значение\" в multimap" << endl;
  mmapIntToStr.insert({3, "Three"});
  mmapIntToStr.insert(make_pair(45, "Forty Five"));
  mmapIntToStr.insert({-1, "Minus One"});
  mmapIntToStr.insert(make_pair(1000, "Thousand"));
  DisplayContents(mmapIntToStr);
  cout << "Вставляем дубликаты" << endl;
  mmapIntToStr.insert({-1, "Minus One"});
  mmapIntToStr.insert({-1, "Minus One"});
  mmapIntToStr.insert({-1, "Minus One"});
  mmapIntToStr.insert({1000, "One Thousand"});
  mmapIntToStr.insert({1000, "One Thousand"});
  mmapIntToStr.insert(make_pair(45, "Forty Five"));
  mmapIntToStr.insert(make_pair(45, "Forty Five"));
  mmapIntToStr.insert(make_pair(45, "Forty Five"));

  DisplayContents(mmapIntToStr);
  cout << "Введите значение для поиска: ";
  int Key = 0;
  cin >> Key;
  auto pairFound = mmapIntToStr.find(Key);
  if (pairFound != mmapIntToStr.end()) {
    size_t numPairsInMap = mmapIntToStr.count(Key);
    for (size_t counter = 0; counter < numPairsInMap; ++counter) {
      cout << "Ключ: " << pairFound->first;
      cout << ", Значение[" << counter << "] = ";
      cout << pairFound->second << endl;
      ++pairFound;
    }
  } else
    cout << "Элемент " << Key << " не найден!" << endl;

  cout << "Удаление элемента с ключом -1 из multimap" << endl;
  auto nPrErsd = mmapIntToStr.erase(-1);
  cout << "Удалено " << nPrErsd << " пары с ключом -1." << endl;
  DisplayContents(mmapIntToStr);
  cout << "Удаление элемента, указанного итератором" << endl;
  auto iPair = mmapIntToStr.find(45);
  if (iPair != mmapIntToStr.end()) {
    mmapIntToStr.erase(iPair);
    cout << "Удалена пара с ключом 45." << endl;
  }
  DisplayContents(mmapIntToStr);
  cout << "Удаление пар с ключом 1000." << endl;
  mmapIntToStr.erase(mmapIntToStr.lower_bound(1000),
                     mmapIntToStr.upper_bound(1000));
  DisplayContents(mmapIntToStr);

  return 0;
}
