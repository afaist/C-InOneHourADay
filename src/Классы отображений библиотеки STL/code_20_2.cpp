#include "../terminal.h"
#include <map>
#include <string>
#include <utility>
using namespace std;

// Определение синонимов map и multimap
typedef map<int, string> MAP_INT_STRING;
typedef multimap<int, string> MMAP_INT_STRING;

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
  cout << "Вставка элементов в map и multimap" << reset << endl;
  cout << "Создаем map для ключей int со значениями string" << endl;
  MAP_INT_STRING mapIntToStr;
  cout << "Вставка пары с использованием ключевого слова value_type" << endl;
  mapIntToStr.insert(MAP_INT_STRING::value_type(3, "Three"));
  cout << "Вставка пары с использованием функции make_pair()" << endl;
  mapIntToStr.insert(make_pair(-1, "Minus One"));
  cout << "Вставка объекта пары непосредственно" << endl;
  mapIntToStr.insert(pair<int, string>(1000, "One Thousand"));
  cout << "Вставка пары с использованием синтаксиса массива" << endl;
  mapIntToStr[1000000] = "One Million";
  DisplayContents(mapIntToStr);
  cout << "Вставка пары с использованием фигурных скобок" << endl;
  mapIntToStr.insert({777, "Большое число 777"});
  DisplayContents(mapIntToStr);
  cout << "Создание мультиотображения из отображения" << endl;
  MMAP_INT_STRING mmapIntToStr(mapIntToStr.cbegin(), mapIntToStr.cend());
  cout << "Вставляем дублирующее значение" << endl;
  mmapIntToStr.insert(make_pair(1000, "Thousand"));
  DisplayContents(mmapIntToStr);
  cout << "Пар в multimap с ключом 1000: " << mmapIntToStr.count(1000) << endl;

  return 0;
}
