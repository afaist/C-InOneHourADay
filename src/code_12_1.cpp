#include "terminal.h"
#include <iostream>
using namespace std;

class Date {
private:
  int day, month, year;

public:
  Date(int inMonth, int inDay, int inYear)
      : month(inMonth), day(inDay), year(inYear){};

  Date &operator++() {
    // Префиксный инкремент
    ++day;
    return *this;
  }
  Date operator++(int) {
    // Постфиксный оператор инкремента
    Date copy(*this);
    day++;
    return copy;
  }
  Date &operator--() {
    // Префиксный декремент
    --day;
    return *this;
  }
  Date operator--(int) {
    // Постфиксный оператор декремента
    Date copy(*this);
    day--;
    return copy;
  }
  void DisplayDate() { cout << day << "." << month << "." << year << endl; }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Упрощенный класс с примерами операторов инкремента и декремента" << reset
       << endl;
  Date holiday(1, 7, 2017);
  cout << "Дата инициализирована значением: ";
  holiday.DisplayDate();

  ++holiday;
  cout << "Дата после префиксного инкремента: ";
  holiday.DisplayDate();

  cout << "Применяем постфиксный инкремент: ";
  holiday++.DisplayDate();
  cout << "Дата после постфиксного инкремента: ";
  holiday.DisplayDate();

  --holiday;
  cout << "Дата после префиксного декремента: ";
  holiday.DisplayDate();
  cout << "Применяем постфиксный декремент: ";
  holiday--.DisplayDate();
  cout << "Дата после постфиксного декремента: ";
  holiday.DisplayDate();

  return 0;
}
