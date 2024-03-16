#include "terminal.h"
#include <iostream>
#include <string>
#include <tuple>
using namespace std;

template <typename tupleType> void DisplayTupleInfo(tupleType &tup) {
  const int numMembers = tuple_size<tupleType>::value;
  cout << cyan;
  cout << "Кортеж (tuple):" << endl;
  cout << "Элементов в кортеже: " << numMembers << endl;
  cout << "Первый элемент: " << get<0>(tup) << endl;
  cout << "Последний элемент: " << get<numMembers - 1>(tup) << endl;
  cout << reset;
}

int main(int argc, char *argv[]) {
  cout << green_bold;
  cout << "Использование кортежей (std::tuple)" << endl;
  cout << reset;
  tuple<int, char, string> tup1(make_tuple(100, 's', "Hello Tuple!"));
  DisplayTupleInfo(tup1);

  auto tup2(make_tuple(3.14, false));
  DisplayTupleInfo(tup2);

  auto concatTup(tuple_cat(tup2, tup1));
  DisplayTupleInfo(concatTup);

  double pi;
  string sentence;
  tie(pi, ignore, ignore, ignore, sentence) = concatTup;
  cout << "Pi: " << pi << " и \"" << sentence << "\"" << endl;

  return 0;
}
