#include "terminal.h"
#include <iostream>
using namespace std;

class Fish {
private:
  // Доступно только производным классам
  bool isFreshWaterFish;

public:
  Fish(bool IsFreshWater) : isFreshWaterFish(IsFreshWater) {}

  void Swim() {
    if (isFreshWaterFish) {
      cout << "Он пресноводный" << endl;
    } else
      cout << "Он морской" << endl;
  }
};

class Tuna : public Fish {
public:
  Tuna() : Fish(false) { cout << "Это тунец!" << endl; }
  void Swim() {
    Fish::Swim();
    cout << "Тунец плавает быстро" << endl;
  }
};

class Carp : public Fish {
public:
  Carp() : Fish(true) { cout << "Это Карп!" << endl; }
  void Swim() {
    Fish::Swim();
    cout << "Карп плавает медленно" << endl;
  }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Улучшенный пример наследования рыб от класса Fish" << endl;
  cout << blue << "Использование конструктора для настройки" << endl;
  cout << "А также переопределение и вызов функции базового класса" << endl;
  cout << reset;
  cout << "Моя еда:" << endl;
  cout << "Обед:" << endl;
  Carp myLunch;
  myLunch.Swim();
  cout << "Ужин:" << endl;
  Tuna myDinner;
  myDinner.Swim();
  return 0;
}
