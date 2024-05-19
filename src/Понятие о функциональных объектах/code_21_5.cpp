#include "../terminal.h"
#include <algorithm>
#include <vector>
using namespace std;

template <typename elementType> class Multiply {
public:
  elementType operator()(const elementType &elem1, const elementType &elem2) {
    return (elem1 * elem2);
  }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование бинарного функтора для умножения двух векторов";
  cout << reset << endl;
  vector<int> mulitpicands{0, 1, 2, 3, 4};
  vector<int> multipliers{100, 101, 102, 103, 104};

  // Вектор для результата умножения
  vector<int> vecResult;

  vecResult.resize(multipliers.size());
  transform(mulitpicands.begin(), // Диапазон множимых
            mulitpicands.end(),   // Конец диапазона
            multipliers.begin(),  // Диапазон множителей
            vecResult.begin(),    // Результаты
            Multiply<int>());     // Операция
  cout << "Первый вектор:" << endl;
  DisplayContainer(mulitpicands);
  cout << "Второй вектор:" << endl;
  DisplayContainer(multipliers);
  cout << "Результат:" << endl;
  DisplayContainer(vecResult);
  return 0;
}
