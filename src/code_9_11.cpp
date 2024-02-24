#include "terminal.h"
#include <iostream>
using namespace std;

class MonsterDB {
private:
  // Закрытый деструктор для предотвращения создания объектов
  // класса в стеке
  ~MonsterDB() { cout << "Destructor MonsterDB" << endl; };

public:
  static void DestroyInstance(MonsterDB *pInstance) {
    delete pInstance; // Вызов закрытого деструктора
  }
  void DoSomethin() { cout << "Выполняется метод MonsterDB" << endl; }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Класс, позволяющий создавать свои объекты только" << endl;
  cout << "в динамической памяти (используя оператор new)" << reset << endl;

  cout << "Создаем объект в динамической памяти" << endl;
  MonsterDB *myDb = new MonsterDB();
  cout << "Объект создан по адресу: " << hex << myDb << endl;
  cout << "Вызываем метод объекта" << endl;
  myDb->DoSomethin();
  cout << "Удаляем объект с помощью статического метода" << endl;
  MonsterDB::DestroyInstance(myDb);
  cout << red_bold;
  cout << "Расскоментируйте следующую строку для создания объекта класса на "
          "стеке"
       << endl;
  // MonsterDB otherDb = MonsterDB();

  return 0;
}
