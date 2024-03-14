#include "terminal.h"
#include <iostream>
#include <string>
using namespace std;

#define ARRAY_LENGTH 25
#define PI 3.1416
#define MY_DOUBLE double
#define FAV_WHISKY "Jack Daniels"

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Определение и использование макросов" << reset << endl;
  cout << "Заданы значения ARRAY_LENGTH, PI, FAV_WHISKY: " << endl;
  cout << ARRAY_LENGTH << ", " << PI << ", " << FAV_WHISKY << endl;
  int numbers[ARRAY_LENGTH] = {0};
  cout << "Длина массива: " << sizeof(numbers) / sizeof(int) << endl;
  cout << "Введите радиус круга: ";
  MY_DOUBLE radius = 0;
  cin >> radius;
  cout << "Площадь круга: " << PI * radius * radius << endl;

  string favoriteWhisky(FAV_WHISKY);
  cout << "Некоторые пьют виски: " << favoriteWhisky << endl;
  return 0;
}
