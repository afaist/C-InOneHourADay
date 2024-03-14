#include "terminal.h"
#include <iostream>
using namespace std;

#define SQUARE(x) ((x) * (x))
#define PI 3.1416
#define AREA_CIRCLE(r) (PI * (r) * (r))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
// Макросы для вывода макросов
#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование макрофункций" << endl;
  cout << green;
  cout << "Заданы следующие макрофункции:" << endl;
  cout << "SQUARE(x)) " << STR(SQUARE(x)) << endl;
  cout << "PI " << STR(PI) << endl;
  cout << "AREA_CIRCLE(r) " << STR(AREA_CIRCLE(r)) << endl;
  cout << "MAX(a, b) " << STR(MAX(a, b)) << endl;
  cout << "MIN(a, b) " << STR(MIN(a, b)) << endl;
  cout << reset << endl;

  cout << "Введите целое число: ";
  int num = 0;
  cin >> num;

  cout << "SQUARE(" << num << ") = " << SQUARE(num) << endl;
  cout << "Площадь круга с радиусом " << num << " равна: ";
  cout << "AREA_CIRCLE(" << num << ") = " << AREA_CIRCLE(num) << endl;

  cout << "Введите другое целое число: ";
  int num2 = 0;
  cin >> num2;

  cout << "MIN(" << num << ", " << num2 << ") = ";
  cout << MIN(num, num2) << endl;

  cout << "MAX(" << num << ", " << num2 << ") = ";
  cout << MAX(num, num2) << endl;
  return 0;
}
