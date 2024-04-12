#include "terminal.h"
#include <set>
#include <string>
using namespace std;

struct ContactItem {
  string name;
  string phoneNum;
  string displayAs;

  ContactItem(const string &nameInit, const string &phone) {
    name = nameInit;
    phoneNum = phone;
    displayAs = (name + ": " + phoneNum);
  }
  // Используется в set::find() для поиска
  bool operator==(const ContactItem &itemToCompare) const {
    return (itemToCompare.name == this->name);
  }
  // Используется для сортировки
  bool operator<(const ContactItem &itemToCompare) const {
    return (this->name < itemToCompare.name);
  }
  operator const char *() const { return displayAs.c_str(); }
};

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование set для телефонного справочника" << reset << endl;
  set<ContactItem> setCs;
  setCs.insert(ContactItem("Jack Welsch", "+1 7889 879 879"));
  setCs.insert(ContactItem("Александр Невский", "+7 1234 567 890"));
  setCs.insert(ContactItem("Леонид Слуцкий", "+7 3552 123 321"));
  setCs.insert(ContactItem("Иванов Иван", "+7 2312 892 213"));
  setCs.insert(ContactItem("Дмитрий Медведев", "+7 903 399 001"));
  setCs.insert(ContactItem("Bill Gates", "+1 97 7897 9799 8"));
  setCs.insert(ContactItem("John Travolta", "+9 1234 4564 789"));
  setCs.insert(ContactItem("John Unknown", "+1 1111 1111 111"));
  DisplayContainer(setCs);

  cout << "Введите имя для удаления: ";
  string inputName;
  getline(cin, inputName);
  auto contactFound = setCs.find(ContactItem(inputName, ""));
  if (contactFound != setCs.end()) {
    setCs.erase(contactFound);
    cout << inputName << " удален" << endl;
    DisplayContainer(setCs);
  } else
    cout << "Контакт не найден" << endl;
  return 0;
}
