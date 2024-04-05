#include "terminal.h"
#include <list>
using namespace std;

bool SortPredicate_Descending(const int &lhs, const int &rhs) {
  // Определение критерия сортировки
  return (lhs > rhs);
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Сортировка списка с использованием метода list::sort" << reset
       << endl;
  cout << "Создаем список" << endl;
  list<int> linkInts{0, -1, 2001, 444, -5, 22, -22};
  DisplayContainer(linkInts);
  cout << "Сортируем список" << endl;

  linkInts.sort();
  DisplayContainer(linkInts);
  cout << "Сортируем в обратном порядке" << endl;
  linkInts.sort(SortPredicate_Descending);
  DisplayContainer(linkInts);

  return 0;
}
