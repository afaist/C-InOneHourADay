#include "terminal.h"
#include <cstddef>
#include <deque>
#include <iostream>
#include <iterator>
using namespace std;

template <typename T> void DisplayDeque(const deque<T> &inArray) {
  cout << blue;
  if (inArray.empty()) {
    cout << "Массив пуст";
  } else {
    cout << "Массив содержит следующие элементы:" << endl;
    for (auto element = inArray.begin(); element != inArray.end(); ++element) {
      size_t offset = distance(inArray.begin(), element);
      cout << "Элемент [" << offset << "] = " << *element << endl;
    }
  }
  cout << reset << endl;
}
int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Создание и использование двухсторонней очереди (deque) STL" << reset
       << endl;
  cout << green;
  cout << "Создаем пустую деку" << endl;
  deque<int> intDeque;
  cout << "Вставляем целые числа в конец массива" << endl;
  for (size_t i = 1; i < 6; i++) {
    intDeque.push_back(i);
  }
  DisplayDeque(intDeque);
  cout << "Вставка чисел в начало массива" << endl;
  for (size_t i = 1; i < 5; ++i) {
    intDeque.push_front(i);
  }
  DisplayDeque(intDeque);

  cout << "Извлечение элемента из начала" << endl;
  intDeque.pop_front();
  DisplayDeque(intDeque);
  cout << "Извлечение элемента из конца" << endl;
  intDeque.pop_back();
  DisplayDeque(intDeque);

  cout << "Очистка массива" << endl;
  intDeque.clear();
  DisplayDeque(intDeque);

  return 0;
}
