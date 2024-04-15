#include "../terminal.h"
#include <map>
#include <string>
using namespace std;

template <typename KeyType> struct ReverseSort {
  bool operator()(const KeyType &key1, const KeyType &key2) const {
    return (key1 > key2);
  }
};

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
  }
  cout << reset << endl;
}
int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Создание map и multimap, отображающих целочисленные ключи на строки";
  cout << reset << endl;
  cout << "Создаем map и multimap для ключей int со значением string" << endl;
  map<int, string> mapIntToStr1{{1, "First"},
                                {2, "Second"},
                                {3, "Третий"},
                                {4, "Четвертый"},
                                {66, "Шестьдесят шестой"}};
  DisplayContents(mapIntToStr1);

  multimap<int, string> mmapIntToStr1{
      {1, "First"},          {2, "Second"},
      {1, "First"},          {13, "Тринадцатый"},
      {14, "Четырнадцатый"}, {166, "Сто шестьдесят шестой"}};
  DisplayContents(mmapIntToStr1);

  cout << "Создание map и multimap из части другого контейнера" << endl;
  map<int, string> mapIntToStr3(mapIntToStr1.cbegin(),
                                next(mapIntToStr1.cbegin(), 3));
  DisplayContents(mapIntToStr3);

  multimap<int, string> mmapIntToStr3(mmapIntToStr1.cbegin(),
                                      mmapIntToStr1.cend());
  DisplayContents(mmapIntToStr3);
  cout << "С сортировкой в обратном порядке" << endl;
  map<int, string, ReverseSort<int>> mapIntToStr4(mapIntToStr1.cbegin(),
                                                  mapIntToStr1.cend());
  DisplayContents(mapIntToStr4);
  multimap<int, string, ReverseSort<int>> mmapIntToStr4(mmapIntToStr1.cbegin(),
                                                        mmapIntToStr1.cend());
  DisplayContents(mmapIntToStr4);

  return 0;
}
