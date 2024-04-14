#include "terminal.h"
#include <set>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Поиск во множестве find()" << reset << endl;
  cout << "Создаем множество" << endl;
  set<int> setInts{43, 78, -1, 124};
  DisplayContainer(setInts);
  cout << "Ищем элемент -1" << endl;
  auto elementFound = setInts.find(-1);

  if (elementFound != setInts.end())
    cout << "Элемент " << *elementFound << " найден!" << endl;
  else
    cout << "Элемент не найден!" << endl;
  const int value = 12345;
  cout << "Поиск другого  элемента " << value << endl;
  auto anotherFind = setInts.find(value);

  if (anotherFind != setInts.end())
    cout << "Элемент " << *anotherFind << " найден!" << endl;
  else
    cout << "Элемент " << value << " не найден!" << endl;
  return 0;
}
