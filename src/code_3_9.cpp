/*
 * Использование перечислений и констант
 */

#include <iostream>
#include <string>
using namespace std;

enum CardinalDirections { North = 25, South, East, West };

enum RainbowColors { Violet = 0, Indigo, Blue, Green, Yellow, Orange, Red };
constexpr double GetPi() { return 3.141593; }
constexpr double TwicePi() { return 2 * GetPi(); }
int main(int argc, char *argv[]) {
  const double pi{3.141593};
  cout << "Константа pi равна " << pi << endl;
  cout << "constexpr GetPi() return " << GetPi() << endl;
  cout << "constexpr TwicePi() return " << TwicePi() << endl;
  string stuff(80, '*');
  cout << stuff << endl;

  cout << "Направления и их значения" << endl;
  cout << "North: " << North << endl;
  cout << "South: " << South << endl;
  cout << "East: " << East << endl;
  cout << "West: " << West << endl;
  CardinalDirections windDirection = South;
  cout << "windDirection = " << windDirection << endl;

  return 0;
}
