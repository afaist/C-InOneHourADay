#include "terminal.h"
#include <iostream>

using namespace std;
int main() {
  cout << green;
  cout << "Использование логических операторов" << reset << endl;
  cout << red;
  cout << "Покупка автомобиля" << reset << endl;
  cout << "Введите 0 или 1 для ответа на вопрос" << endl;
  cout << "Есть ли скидка на автомобиль? ";
  bool onDiscount = false;
  cin >> onDiscount;
  cout << "Вы получили премию? ";
  bool fantasticBonus = false;
  cin >> fantasticBonus;
  if (onDiscount || fantasticBonus)
    cout << "Вы можете купить автомобиль!" << endl;
  else
    cout << "Покупку придется отложить..." << endl;
  if (!onDiscount)
    cout << "Скидки на автомобиль нет" << endl;

  cout << red;
  cout << "Пора на работу" << reset << endl;
  cout << "Введите 0 или 1 для ответа на вопрос" << endl;
  cout << "Идет дождь? ";
  bool isRaining = false;
  cin >> isRaining;
  cout << "На улице есть автобус? ";
  bool busesPly = false;
  cin >> busesPly;
  // Условный оператор использует операторы && и !
  if (isRaining && !busesPly)
    cout << "Вы не попадете на работу" << endl;
  else
    cout << "Вы попадете на работу" << endl;
  if (isRaining && busesPly)
    return 0;
}
