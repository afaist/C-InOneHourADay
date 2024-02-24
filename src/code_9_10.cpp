#include "terminal.h"
#include <iostream>
#include <string>

using namespace std;

class President {
private:
  // Закрытые:
  // конструктор по умолчанию
  // копирующий конструктор
  // конструктор присваивания
  President(){};
  President(const President &);
  const President &operator=(const President &);

  string name;

public:
  static President &GetInstance() {
    // Статические объекты конструируются только один раз
    static President onlyInstance;
    return onlyInstance;
  }
  string GetName() { return name; }
  void SetName(string InputName) { name = InputName; }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Синглтон President, запрещающий копирование, "
       << "присваивание и создание нескольких экземпляров" << reset << endl;
  cout << "Создаем объект President" << endl;
  President &onlyPresident = President::GetInstance();
  onlyPresident.SetName("Владимир Владимирович Путин");
  cout << "Адрес объекта President: " << hex << &onlyPresident << endl;
  cout << red;
  cout << "Пытаемся создать еще объекты President" << endl;
  cout << "Если расскоментировать код создания - будет ошибка компиляции"
       << endl;
  // President second;
  // President* third = new President();
  // President fourth = onlyPresident;
  // onlyPresident = President::GetInstance();

  cout <<reset;
  cout << "Президента зовут ";
  cout << President::GetInstance().GetName() << endl;

  return 0;
}
