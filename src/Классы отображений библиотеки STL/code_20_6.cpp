#include "../terminal.h"
#include <string>
#include <unordered_map>
#include <utility>
using namespace std;

template <typename T1, typename T2>
void DisplayUnorderedMap(unordered_map<T1, T2> &cont) {
  cout << blue;
  cout << "unordered_map содержит:" << endl;

  for (auto element = cont.cbegin(); element != cont.cend(); ++element) {
    cout << element->first << " -> " << element->second << endl;
  }
  cout << string(60, '-') << endl;
  cout << "size()            =" << cont.size() << endl;
  cout << "bucket_count()    = " << cont.bucket_count() << endl;
  cout << "load_factor()     = " << cont.load_factor() << endl;
  cout << "max_load_factor() = " << cont.max_load_factor() << endl;
  cout << reset << endl;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Работа с хеш-таблицей unordered_map" << reset << endl;
  unordered_map<int, string> umapIntToStr;
  umapIntToStr.insert({1, "One"});
  umapIntToStr.insert({45, "Forty Five"});
  umapIntToStr.insert({1001, "Thousand One"});
  umapIntToStr.insert({-2, "Minus Two"});
  umapIntToStr.insert({-1000, "Minus One Thousand"});
  umapIntToStr.insert({100, "One Hundred"});
  umapIntToStr.insert({12, "Twelve"});
  umapIntToStr.insert({-100, "Minus One Hundred"});

  DisplayUnorderedMap<int, string>(umapIntToStr);

  cout << "Вставка еще одного элемента" << endl;
  umapIntToStr.insert(make_pair(300, "Three Hundred"));
  DisplayUnorderedMap<int, string>(umapIntToStr);

  cout << "Введите ключ для поиска: ";
  int Key = 0;
  cin >> Key;
  auto element = umapIntToStr.find(Key);
  if (element != umapIntToStr.end())
    cout << "Найден! Значение = " << element->second << endl;
  else
    cout << "Ключ не найден!" << endl;

  return 0;
}
