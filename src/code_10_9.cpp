#include "terminal.h"
#include <iostream>
using namespace std;

class Motor {
public:
  Motor() { cout << "Мотор готов к работе" << endl; }
  void SwitchIgnition() { cout << "Зажигание включено" << endl; }
  void PumpFuel() { cout << "Топливо в цилиндрах" << endl; }
  void FireCylinders() { cout << "Р-р-р-р-р-р-р-р..." << endl; }
  ~Motor() { cout << "Мотор заглушен" << endl; }
};

class Car : protected Motor {
public:
  Car() {
    cout << blue_italic;
    cout << "Машина начинает движение" << reset << endl;
  }
  void Move() {
    cout << red;
    SwitchIgnition();
    PumpFuel();
    FireCylinders();
    cout << "Машина едет" << endl;
    cout << reset;
  }
  ~Car() { cout << "Машина остановлена" << endl; }
};

class RaceCar : protected Car {
public:
  void Move() {
    cout << cyan;
    SwitchIgnition();
    PumpFuel();
    FireCylinders();
    FireCylinders();
    FireCylinders();
    cout << reset;
  }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Защищенное наследование (использование модификатора protected)";
  cout << reset << endl;
  RaceCar myDreamCar;
  myDreamCar.Move();

  return 0;
}
