#include "terminal.h"
#include <iostream>
using namespace std;

struct Temperature {
  double Kelvin;
  Temperature(long double kelvin) : Kelvin(kelvin) {}
};

Temperature operator"" _C(long double celcius) {
  cout << blue_italic;
  cout << "Вызывается оператор преобразовани из Цельсия в Кельвины" << reset
       << endl;
  return Temperature(celcius + 273);
}
Temperature operator"" _F(long double fahrenheit) {
  cout << cyan_italic;
  cout << "Вызывается оператор преобразования из Фаренгейта в Кельвины" << reset
       << endl;
  return Temperature((fahrenheit + 459.67) * 5 / 9);
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Пользовательские литералы" << reset << endl;
  Temperature k1 = 31.73_F;
  Temperature k2 = 23.5_C;

  cout << "k1 = " << k1.Kelvin << " K" << endl;
  cout << "k2 = " << k2.Kelvin << " K" << endl;
  return 0;
}
