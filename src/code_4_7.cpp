/*
 * Строки в C++
 */
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  string greetString("Hello std::string!");
  cout << greetString << endl;

  cout << "Введите текстовую строку: " << endl;
  string firstLine;
  getline(cin, firstLine);

  cout << "Введите другую строку: " << endl;
  string secondLine;
  getline(cin, secondLine);

  cout << "Результат конкатенации двух строк:" << endl;
  string concatString = firstLine + " " + secondLine;
  cout << concatString << endl;
  cout << "Адрес строки: " << &concatString << endl;

  cout << "Копия строки:" << endl;
  string aCopy;
  aCopy = concatString;
  cout << aCopy << endl;

  cout << "Длина строки: " << aCopy.length() << endl;
  cout << "Адрес копии строки: " << &aCopy << endl;
  return 0;
}
