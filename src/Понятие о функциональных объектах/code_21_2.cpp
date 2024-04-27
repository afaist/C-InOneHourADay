#include "../terminal.h"
#include <algorithm>
#include <list>
#include <vector>
using namespace std;

// Структура, ведушая себя как унарная функция
template <typename elementType> struct DisplayElementKeepCount {
  int count;
  DisplayElementKeepCount() : count(0) {}
  void operator()(const elementType &element) {
    ++count;
    cout << element << ' ';
  }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Вывод содержимого коллекции с помощью унарной функции" << reset
       << endl;
  vector<int> numsInVec{0, 1, 2, 3, -1, -9, 0, -999};
  cout << "Вектор содержит:" << endl;
  DisplayElementKeepCount<int> result;
  result = for_each(numsInVec.begin(), numsInVec.end(),
                    DisplayElementKeepCount<int>());
  cout << endl;
  cout << "Функтор вызван " << result.count << " раз." << endl;
  cout << cyan;
  cout << "Вывод с помощью лямбда-выражения" << reset << endl;
  for_each(numsInVec.begin(), numsInVec.end(),
           [](int &element) { cout << element << ' '; });
  cout << endl;
  cout << blue;
  cout << "Вывод списка символов" << reset << endl;
  list<char> charInList{'a', 'z', 'k', 'd'};
  cout << "Список содержит:" << endl;
  DisplayElementKeepCount<char> resultChar;
  resultChar = for_each(charInList.begin(), charInList.end(),
                        DisplayElementKeepCount<char>());
  cout << endl;
  cout << "Функтор вызван " << resultChar.count << " раза." << endl;
  return 0;
}
