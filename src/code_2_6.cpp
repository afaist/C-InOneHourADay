#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
  int inputNumber;
  cout << "Не инициализораванное число: " << inputNumber << endl;
  cout << "Input integer number: ";
  cin >> inputNumber;

  cout << "Input your name: ";
  string inputName;
  cin >> inputName;

  cout << inputName << " ввел " << inputNumber << endl;
  return 0;
}
