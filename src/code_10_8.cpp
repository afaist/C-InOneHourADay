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

class Car : private Motor {
public:
  Car() { cout << "Машина начинает движение" << endl; }
  void Move() {
    SwitchIgnition();
    PumpFuel();
    FireCylinders();
    cout << "Машина едет" << endl;
  }
  ~Car() { cout << "Машина остановлена" << endl; }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Закрытое наследование (использование модификатора private)";
  cout << reset << endl;
  Car myDreamCar;
  myDreamCar.Move();

  return 0;
}
