#include "terminal.h"
#include <iostream>
#include <string>

using namespace std;

class Human {
private:
  string name;
  int age;

public:
  Human() {
    // Конструктор по умолчанию
    age = 0;
    cout << green << "Конструктор по умолчанию" << reset << endl;
    cout << "Создан с пустым именем и возрастом " << age << endl;
  }
  Human(string humansName, int humansAge) {
    name = humansName;
    age = humansAge;
    cout << blue << "Перегруженный конструктор создал: ";
    cout << name << " с возрастом " << age << reset << endl;
  }
};

int main(int argc, char *argv[]) {
  Human firstMan;
  Human firstWoman("Ева", 20);
  return 0;
}
