#include "terminal.h"
#include <iostream>
using namespace std;

void DisplayArray(int numbers[], int length) {
  for (size_t i = 0; i < length; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;
}

void DisplayArray(char characters[], int length) {
  for (size_t i = 0; i < length; i++) {
    cout << characters[i] << " ";
  }
  cout << endl;
}

const int size_number_array = 6;
const int size_char_array = 7;

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Передача массива в функцию" << reset << endl;
  int myNums[size_number_array] = {24, 58, -12, 32};
  DisplayArray(myNums, size_number_array);

  char myStatement[size_char_array] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
  DisplayArray(myStatement, size_char_array);

  return 0;
}
