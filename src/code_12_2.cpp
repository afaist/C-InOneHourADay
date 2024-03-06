#include "terminal.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Date {
private:
  int day, month, year;
  string dateInString;

public:
  Date(int inMonth, int inDay, int inYear)
      : month(inMonth), day(inDay), year(inYear){};
  operator const char *() {
    ostringstream formattedDate;
    formattedDate << day << "." << month << "." << year;
    dateInString = formattedDate.str();
    return dateInString.c_str();
  }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Реализация оператора преобразования в const char* для класса Date"
       << reset << endl;
  Date Holiday(1, 7, 2017);
  cout << "Рождество: " << Holiday << endl;
  return 0;
}
