#include "terminal.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void DisplayNums(vector<int> &dynArray) {
  for_each(dynArray.begin(), dynArray.end(), [](int e) { cout << e << " "; });
  cout << endl;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование лямбда-функции для сортировки и "
       << "отображения элементов массива" << reset << endl;
  cout << blue << "Синтаксис лямбда-функции:" << endl;
  cout << "[необязательные параметры](список параметров){инструкции;}" << reset
       << endl;

  vector<int> myNums;
  myNums.push_back(501);
  myNums.push_back(-1);
  myNums.push_back(25);
  myNums.push_back(-35);
  myNums.push_back(234);
  myNums.push_back(20);

  DisplayNums(myNums);
  cout << "Сортировка в порядке убывания" << endl;
  sort(myNums.begin(), myNums.end(),
       [](int num1, int num2) { return (num2 < num1); });
  DisplayNums(myNums);
  return 0;
}
