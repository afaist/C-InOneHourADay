#include "../terminal.h"
#include <algorithm>
#include <list>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Вывод элементов контейнера с помощью алгоритма for_each()" << endl;
  cout << "\tс лямбда-выражением" << reset << endl;
  cout << "Создаем вектор целых чисел" << endl;
  vector<int> numsInVec{101, -4, 500, 21, 42, -1};
  DisplayContainer(numsInVec);
  cout << "Создаем список символов" << endl;
  list<char> charsInList{'a', 'h', 'z', 'k', 'l'};
  DisplayContainer(charsInList);
  cout << blue_bold;
  cout << "Вывод вектора с использованием лямбды:" << endl;
  for_each(numsInVec.cbegin(), numsInVec.cend(),
           [](const int &element) { cout << element << ' '; });
  cout << endl;
  cout << cyan_bold;
  cout << "Вывод списка с использованием лямбды:" << endl;
  for_each(charsInList.cbegin(), charsInList.cend(),
           [](auto &element) { cout << element << ' '; });
  cout << endl;
  return 0;
}
