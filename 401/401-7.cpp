#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Snack {
  int price;
  string name;
  string maker;

public:
  Snack(string name) { this->name = name; }
  void printName() { cout << "상품이름 : " << name << endl; }
};
class Candy : public Snack {
  string flavor;

public:
  Candy(string name) : Snack(name) {}
};

class Choco : public Snack {
  string shape;

public:
  Choco(string name) : Snack(name) {}
};

int main() {
  Snack snackBasket[4] = {Candy("츄파"), Candy("알사탕"), Choco("가나"),
                          Choco("페레로")};
  for (int i = 0; i < 4; i++) {
    snackBasket[i].printName();
  }
}
