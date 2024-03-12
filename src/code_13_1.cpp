#include "terminal.h"
#include <iostream>
using namespace std;

class Fish {
public:
  virtual void Swim() { cout << "Рыба плавает в воде" << endl; }
  // Базовый класс должен иметь виртуальный деструктор
  virtual ~Fish() {}
};

class Tuna : public Fish {
public:
  void Swim() { cout << "Тунец быстро плавает в море" << endl; }
  void BecomeDinner() { cout << "Из тунца готовят суши" << endl; }
};

class Carp : public Fish {
public:
  void Swim() { cout << "Карп медленно плавает в озере" << endl; }
  void Talk() { cout << "Карп разговаривает с карпом!" << endl; }
};

void DetectFishType(Fish *objFish) {
  Tuna *objTuna = dynamic_cast<Tuna *>(objFish);
  if (objTuna) {
    cout << "Обнаружен тунец: " << endl;
    objTuna->BecomeDinner();
  }

  Carp *objCarp = dynamic_cast<Carp *>(objFish);
  if (objCarp) {
    cout << "Обнаружен карп: " << endl;
    objCarp->Talk();
  }
  cout << "Проверка вызовом Fish::Swim: " << endl;
  objFish->Swim();
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование динамического приведения типов" << endl;
  cout << "для выяснения типа объекта класса Tuna или Carp" << reset << endl;
  Carp myLunch;
  Tuna myDinner;
  cout << blue_bold;
  DetectFishType(&myDinner);
  cout << reset << endl;
  cout << magenta_bold;
  DetectFishType(&myLunch);
  cout << reset;
  return 0;
}
