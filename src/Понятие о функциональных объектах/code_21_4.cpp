#include "../terminal.h"
#include <algorithm>
#include <vector>
using namespace std;

// Структура, выступающая унармным оператором
// Унарный предикат, определяющий, является ли одно число кратным другому
template <typename numberType> struct IsMultiple {
  numberType Divisor;

  IsMultiple(const numberType &divisor) { Divisor = divisor; }
  bool operator()(const numberType &element) const {
    return ((element % Divisor) == 0);
  }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование унарного предиката IsMultiple" << endl;
  cout << "\t с алгоритмом std::find_if() для поиска элемента," << endl;
  cout << "\t кратного заданного пользователем делителю." << endl;
  cout << reset;
  cout << "Создаем вектор целых чисел" << endl;
  vector<int> numsInVec{25, 26, 27, 28, 29, 30, 31};
  DisplayContainer(numsInVec);

  cout << "Введите делитель (> 0): ";
  int divisor = 2;
  cin >> divisor;

  auto element =
      find_if(numsInVec.begin(), numsInVec.end(), IsMultiple<int>(divisor));

  if (element != numsInVec.end()) {
    cout << "Первый кратный " << divisor;
    cout << " элемент - " << *element << endl;
  }
  return 0;
}
