#include "terminal.h"
#include <iostream>
using namespace std;

class Human {
  int age;

public:
  // explicit конструктор блокирует неявные преобразования
  explicit Human(int humansAge) : age(humansAge) {}
};
void DoSomething(Human person) {
  cout << "Работа с Human" << endl;
  return;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Конструктор класса Human объявлен с использованием explicit" << endl;
  cout << "Это блокирует неявное преобразование типов при создании объекта "
          "класса"
       << endl;
  cout << blue;
  cout << "Вызываем конструктор при создании класса - явное преобразование"
       << endl;
  Human kid(10);
  DoSomething(kid);
  Human anotherKid = Human(11);
  DoSomething(anotherKid);
  cout << red;
  cout << "Расскоментируйте следующие строки с неявным преобразованием"
       << " и получите ошибку!" << endl;
  // Human anotherKid2 = 11;
  // DoSomething(10);
  return 0;
}
