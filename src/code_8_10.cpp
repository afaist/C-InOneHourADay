#include "terminal.h"
#include <iostream>

using namespace std;

void CalcArea(
    const double *const pPi, // Константный указатель на константу
    const double *const pRadius, // Константный указатель на константу
    double *const pArea // Константный указатель на изменяемое значение
) {
  // Проверка корректности указателей перед использованием
  if (pPi && pRadius && pArea)
    *pArea = (*pPi) * (*pRadius) * (*pRadius);
}

int main(int argc, char *argv[]) {
  const double Pi = 3.1416;
  cout << green_bold;
  cout << "Использование константных указателей на константы" << reset << endl;

  cout << "Введите радиус круга: ";
  double radius = 0;
  cin >> radius;
  double area = 0;
  CalcArea(&Pi, &radius, &area);
  cout << "Площадь круга равна " << area << endl;
  return 0;
}
