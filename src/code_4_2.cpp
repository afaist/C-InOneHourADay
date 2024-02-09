#include <iostream>
using namespace std;

constexpr int Square(int number) { return number * number; }

int main(int argc, char *argv[]) {
  const int ARRAY_LENGTH = 5;
  // Инициализированный массив из 5 целых чисел
  int myNumbers[ARRAY_LENGTH] = {5, 10, 0, -101, 20};
  // Создание массива из 25 целых чисел с помощью
  // объявленной выше constexpr
  int moreNumbers[Square(ARRAY_LENGTH)];

  cout << "Введите индекс изменяемого элемента (от 0 до 4): ";
  int elementIndex = 0;
  cin >> elementIndex;
  if (elementIndex < 0 || elementIndex > 4) {
    cout << "Неверный ввод." << endl;
    return -1;
  }

  cout << "Введите новое значение элемента: ";
  int newValue = 0;
  cin >> newValue;

  myNumbers[elementIndex] = newValue;
  moreNumbers[elementIndex] = newValue;

  cout << "Элемент " << elementIndex << " myNumbers равен: ";
  cout << myNumbers[elementIndex] << endl;

  cout << "Элемент " << elementIndex << " moreNumbers равен: ";
  cout << moreNumbers[elementIndex] << endl;

  return 0;
}
