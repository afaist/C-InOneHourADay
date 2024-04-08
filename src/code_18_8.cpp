#include "terminal.h"
#include <forward_list>
using namespace std;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Операции вставки и извлечения из односвязного списка" << reset
       << endl;
  cout << "Создаем односвязный список" << endl;
  forward_list<int> firstIntegers{3, 4, 2, 2, 0};
  DisplayContainer(firstIntegers);
  cout << "Добавляем элемент" << endl;
  firstIntegers.push_front(1);
  DisplayContainer(firstIntegers);
  cout << "Удаляем все двойки и сортируем" << endl;
  firstIntegers.remove(2);
  firstIntegers.sort();
  DisplayContainer(firstIntegers);
  return 0;
}
