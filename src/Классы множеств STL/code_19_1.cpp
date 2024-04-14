#include "terminal.h"
#include <set>
using namespace std;

// Параметр сортировки
template <typename T> struct SortDescending {
  bool operator()(const T &lhs, const T &rhs) const { return (lhs > rhs); }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Способы создания множества и мультимножества" << reset << endl;
  set<int> setInts1{3, 8, 1, 9, 5};
  multiset<int> msetInts1{1, 1, 1, 32, 45, 77, 1, 86};
  DisplayContainer(setInts1);
  DisplayContainer(msetInts1);

  return 0;
}
