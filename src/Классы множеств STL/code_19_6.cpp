#include "terminal.h"
#include <iterator>
#include <sys/types.h>
#include <unordered_set>
using namespace std;

template <typename T> void DisplayContents(const T &cont) {
  cout << "Неупорядоченное множество содержит:" << endl;
  unsigned n = 0;
  for (auto element = cont.cbegin(); element != cont.cend(); ++element)
    cout << n++ << " - " << *element << endl;

  cout << "Число элементов = " << cont.size() << endl;
  cout << "Число ячеек = " << cont.bucket_count() << endl;
  cout << "Max коэффициент загрузки = " << cont.max_load_factor() << endl;
  cout << "Коэффициент загрузки: " << cont.load_factor() << endl << endl;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Применение методов класса std::unordered_set" << reset << endl;
  unordered_set<int> usetInt{1, -3, 2017, 300, -1, 989, -300, 9};
  DisplayContents(usetInt);
  usetInt.insert(999);
  DisplayContents(usetInt);
  cout << "Введите элемент для добавления (целое число): ";
  int input = 0;
  cin >> input;
  auto value = usetInt.insert(input);
  if (value.second)
    cout << "Вставка успешна" << endl;
  else
    cout << "Не удалось вставить (возможно элемент уже существует)" << endl;
  DisplayContents(usetInt);
  cout << "Введите искомый элемент: ";
  cin >> input;
  auto elementFound = usetInt.find(input);

  if (elementFound != usetInt.end()) {
    auto dist = distance(usetInt.begin(), elementFound);
    cout << "Число " << *elementFound << " найдено в позиции " << dist << endl;
  } else
    cout << input << " отсутствует" << endl;

  return 0;
}
