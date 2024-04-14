#include "../terminal.h"
#include <set>
using namespace std;

typedef multiset<int> MSETINT;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование функции-члена erase() мультимножества" << reset
       << endl;

  cout << "Создаем мультимножество" << endl;
  MSETINT msetInts{43, 78, 78, -1, 124, -1, 22, 43, 5};
  DisplayContainer(msetInts);
  cout << "Введите удаляемое число: ";
  int input = 0;
  cin >> input;
  cout << "Удаляем " << msetInts.count(input);
  cout << " экземпляра значения " << input << endl;
  msetInts.erase(input);
  DisplayContainer(msetInts);
  return 0;
}
