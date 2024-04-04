#include "terminal.h"
#include <list>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Обращение элементов списка" << reset << endl;
  cout << "Создаем список из 6 элементов" << endl;
  list<int> linkInts{0, 1, 2, 3, 4, 5};
  DisplayContainer(linkInts);
  cout << "Обращаем список" << endl;
  linkInts.reverse();
  DisplayContainer(linkInts);
  return 0;
}
