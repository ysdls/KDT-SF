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

  string getName() { return name; }
};
class Candy : public Snack {
  string flavor;

public:
  Candy(string name) : Snack(name) { this->flavor = "포도"; }

  void printName() { cout << flavor << "맛 " << getName() << endl; }
};

class Choco : public Snack {
  string shape;

public:
  Choco(string name) : Snack(name) {}
};

int main() {
  Snack *snackBasket[4] = {new Candy("츄파"), new Candy("알사탕"),
                           new Choco("가나"), new Choco("페레로")};
  for (int i = 0; i < 4; i++) {
    snackBasket[i]->printName();
  }

  Candy *candy = (Candy *)snackBasket[0];
  candy->printName();
}