/*
 * Доступ к элементам многомерного массива
 */
#include <iomanip>
#include <iostream>
using namespace std;

constexpr int Three() { return 3; }
constexpr int Size() { return Three() * Three(); }

int main(int argc, char *argv[]) {
  int threeRowsThreeColumns[Three()][Three()] = {
      {-501, 206, 2016}, {989, 101, 206}, {303, 456, 596}};

  cout << "Row 0: " << threeRowsThreeColumns[0][0] << " "
       << threeRowsThreeColumns[0][1] << " " << threeRowsThreeColumns[0][2]
       << endl;
  cout << "Row 1: " << threeRowsThreeColumns[1][0] << " "
       << threeRowsThreeColumns[1][1] << " " << threeRowsThreeColumns[1][2]
       << endl;
  cout << "Row 2: " << threeRowsThreeColumns[2][0] << " "
       << threeRowsThreeColumns[2][1] << " " << threeRowsThreeColumns[2][2]
       << endl;

  cout << "Весь массив полностью в линию:";
  // Указатель на массив
  const int *ptr = (int *)threeRowsThreeColumns;
  for (int i = 0; i < Size(); i++) {
    cout << setw(5) << ptr[i];
  }

  return 0;
}
