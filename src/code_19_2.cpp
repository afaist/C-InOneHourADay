#include "terminal.h"
#include <set>
using namespace std;

// Параметр сортировки
template <typename T> struct SortDescending {
  bool operator()(const T &lhs, const T &rhs) const { return (lhs > rhs); }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Вставка элементов во множество и мультимножества" << reset << endl;
  set<int> setInts1{3, 8, 1, 9, 1, 1, 1, -1, 5, -1};
  cout << "Создано множество" << endl;
  DisplayContainer(setInts1);
  cout << "Добавляем новый элемент" << endl;
  setInts1.insert(202);
  DisplayContainer(setInts1);
  cout << "Добавляем существующий элемент" << endl;
  setInts1.insert(1);
  DisplayContainer(setInts1);
  cout << "Создаем мультимножество" << endl;
  multiset<int> msetInts1{1, 1, 1, 32, 45, 77, 1, 86};
  DisplayContainer(msetInts1);
  cout << "Добавляем элемент" << endl;
  msetInts1.insert(45);
  DisplayContainer(msetInts1);

  return 0;
}
