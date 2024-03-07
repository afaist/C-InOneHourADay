#include "terminal.h"
#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Date {
private:
  int day, month, year;
  string dateInString;

public:
  Date(int inMonth, int inDay, int inYear)
      : month(inMonth), day(inDay), year(inYear){};

  void DisplayDate() { cout << day << "." << month << "." << year << endl; }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование интеллектуального указателя unique_ptr" << reset
       << endl;
  unique_ptr<int> smartIntPtr(new int);
  *smartIntPtr = 42;

  cout << "Целое число равно: " << *smartIntPtr << endl;

  unique_ptr<Date> smartHoliday(new Date(1, 1, 2017));
  cout << "Новый экземпляр даты: ";
  smartHoliday->DisplayDate();

  return 0;
}
