#include "terminal.h"
#include <iostream>
using namespace std;

class Date {
private:
  int day, month, year;

public:
  Date(int inMonth, int inDay, int inYear)
      : month(inMonth), day(inDay), year(inYear){};

  bool operator==(const Date &compareTo) {
    // Оператор равенства
    return ((day == compareTo.day) && (month == compareTo.month) &&
            (year == compareTo.year));
  }
  bool operator!=(const Date &compareTo) {
    // Оператор неравенства
    return !(this->operator==(compareTo));
  }
  bool operator<(const Date &compareTo) {
    if (year < compareTo.year)
      return true;
    else if (year > compareTo.year)
      return false;
    else if (month < compareTo.month)
      return true;
    else if (month > compareTo.month)
      return false;
    else if (day < compareTo.day)
      return true;
    else
      return false;
  }
  bool operator<=(const Date &compareTo) {
    if (this->operator==(compareTo))
      return true;
    else
      return this->operator<(compareTo);
  }
  bool operator>(const Date &compareTo) {
    return !(this->operator<=(compareTo));
  }
  bool operator>=(const Date &compareTo) {
    if (this->operator==(compareTo))
      return true;
    else
      return this->operator>(compareTo);
  }

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
  cout << "Упрощенный класс с примерами операторов сравнения" << reset << endl;
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

  Date holiday1(12, 25, 2016);
  Date holiday2(12, 31, 2016);
  cout << cyan;
  cout << "Сравнение дат:" << reset << endl;
  cout << "Дата 1: ";
  holiday1.DisplayDate();
  cout << "Дата 2: ";
  holiday2.DisplayDate();

  if (holiday1 == holiday2)
    cout << "Равенство: даты совпадают" << endl;
  else
    cout << "Равенство: даты НЕ совпадают" << endl;

  if (holiday1 != holiday2) {
    cout << "Неравенство: даты не совпадают" << endl;
  }
  else
    cout << "Неравенство: даты совпадают" << endl;
  
  if (holiday1 < holiday2)
    cout << "<: дата 1 раньше" << endl;
  if (holiday2 > holiday1)
    cout << ">: дата 2 позже" << endl;
  if (holiday1 <= holiday2)
    cout << "<=: дата 1 не позже даты 2" << endl;
  if (holiday2 >= holiday1)
    cout << ">=: дата 1 не позже даты 2" << endl;
  return 0;
}
