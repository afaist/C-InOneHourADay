#include "terminal.h"
#include <iostream>
using namespace std;

const double Pi = 3.14159265;
double Area(double radius);                // для круга
double Area(double radius, double height); // для цилиндра

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование перегруженных функций" << reset << endl;
  cout << blue;
  cout << "Вычисляем площадь поверхности цилиндра или площадь круга" << reset
       << endl;

  cout << "Введите 'z' для цилиндра или 'c' для круга: ";
  char userSelection = 'z';
  cin >> userSelection;

  cout << "Введите радиус: ";
  double radius = 0;
  cin >> radius;

  if (userSelection == 'z') {
    cout << "Введите высоту цилиндра: ";
    double height = 0;
    cin >> height;
    cout << "Площадь поверхности цилиндра: " << Area(radius, height);
  } else
    cout << "Площадь круга: " << Area(radius);
  cout << endl;
  return 0;
}

// для круга
double Area(double radius) { return Pi * radius * radius; }
// для цилиндра
double Area(double radius, double height) {
  return 2 * Area(radius) + 2 * Pi * radius * height;
}
