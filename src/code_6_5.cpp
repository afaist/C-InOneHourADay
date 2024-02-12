#include "terminal.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  enum DaysOfWeek {
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
  };
  cout << blue_bold;
  cout << "Использование конструкции switch-case" << green_bold << endl;
  cout << "Узнайте, в честь чего назван день недели!" << reset << endl;
  cout << "Введите номер дня недели (воскресенье = 0): ";
  int dayInput = Sunday;
  cin >> dayInput;

  switch (dayInput) {
  case Sunday:
    cout << "Воскресенье названо в честь Солнца (Sun)" << endl;
    break;
  case Monday:
    cout << "Понедельник назван в честь Луны (Moon)" << endl;
    break;
  case Tuesday:
    cout << "Вторник названа в честь сына Одина, бога войны Тиу (Tui)" << endl;
    break;

  case Wednesday:
    cout << "Среда названа в честь верховного бога викингов Одина (Woden)"
         << endl;
    break;
  case Thursday:
    cout << "Четверг назван в честь другого сына Одина, бога грома Тора (Thor)"
         << endl;
    break;
  case Friday:
    cout << "Пятница названа в честь богини плодородия Фреи (Freya)" << endl;
    break;
  case Saturday:
    cout << "Суббота названа в честь Сатурна (Saturn)" << endl;
    break;
  default:
    cout << "Неверный ввод" << endl;
    break;
  }
  return 0;
}
