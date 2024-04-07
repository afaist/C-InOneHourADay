#include "terminal.h"
#include <list>
#include <string>
using namespace std;

struct ContactItem {
  string name;
  string phone;
  string displayAs;

  ContactItem(const string &conName, const string &conNum) {
    name = conName;
    phone = conNum;
    displayAs = (name + ": " + phone);
  }
  // Используется в list::remove()
  bool operator==(const ContactItem &itemToCompare) const {
    return (itemToCompare.name == this->name);
  }
  // Используется в list::sort() без параметров
  bool operator<(const ContactItem &itemToCompare) const {
    return (this->name < itemToCompare.name);
  }
  // Используется для вывода в cout
  operator const char *() const { return displayAs.c_str(); }
};

bool SortOnPhoneNumber(const ContactItem &item1, const ContactItem &item2) {
  return (item1.phone < item2.phone);
}

int main() {
  cout << green_bold;
  cout << "Список объектов: создание списка контактов" << reset << endl;
  list<ContactItem> contacts;
  contacts.push_back(ContactItem("Jack Welsch", "+17889879879"));
  contacts.push_back(ContactItem("Bill Gates", "+197789787998"));
  contacts.push_back(ContactItem("Angi Merkel", "+49234565466"));
  contacts.push_back(ContactItem("Dim Medvedev", "+766454564797"));
  contacts.push_back(ContactItem("Ben Affleck", "+1745641314"));
  contacts.push_back(ContactItem("Dan Craig", "+44123641976"));
  cout << "Список в исходном порядке:" << endl;
  DisplayContainer(contacts);
  contacts.sort();
  cout << "Сортировка с помощью оператора <:" << endl;
  DisplayContainer(contacts);
  contacts.sort(SortOnPhoneNumber);
  cout << "Сортировка с помощью предиката:" << endl;
  DisplayContainer(contacts);
  cout << "Убираем лишних из списка:" << endl;
  contacts.remove(ContactItem("Bill Gates", ""));
  DisplayContainer(contacts);
  cout << "Добавляем новый контакт" << endl;
  contacts.push_front(ContactItem("Donald Trump", "+1745641367"));
  DisplayContainer(contacts);
  return 0;
}
