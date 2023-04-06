#include <iostream>

using namespace std;

class Snack {
  string price;
  string name;
  string origin;

public:
  Snack(string price, string name, string origin) {
    this->price = price;
    this->name = name;
    this->origin = origin;
  }
  Snack(string name) { this->name = name; }

  string getName() { return name; }
  virtual void printInfo() {
    // cout << "가격은 " << price << end;
    cout << "상품이름은 " << name << endl;

    // cout << "제조회사는 " << origin << end;
  }
};

class Candy : public Snack {
  string taste;

public:
  Candy(string name, string taste) : Snack(name) { this->taste = taste; }
  void printInfo() { cout << getName() << " 사탕 맛은 " << taste << endl; }
};

class Chocolate : public Snack {
  string shape;

public:
  Chocolate(string name, string shape) : Snack(name) { this->shape = shape; }
  void printInfo() { cout << getName() << " 초콜렛 모양은 " << shape << endl; }
};

int main() {
  // Snack can1 = Candy("캔디1", "빨간맛");
  // Snack can2 = Candy("캔디2", "보라색맛");
  // Snack cho1 = Chocolate("초콜렛1", "세모");
  // Snack cho2 = Chocolate("초콜렛2", "네모");
  Snack *can1 = new Candy("캔디1", "빨간맛");
  Snack *can2 = new Candy("캔디2", "보라색맛");
  Snack *cho1 = new Chocolate("초콜렛1", "세모");
  Snack *cho2 = new Chocolate("초콜렛2", "네모");

  // Snack sankBasket[4] = {*can1, *can2, *cho1, *cho2};
  // for (int i = 0; i < 4; i++) {
  //   sankBasket[i].printInfo();
  // }
  Snack *sankBasket[4] = {can1, can2, cho1, cho2};
  for (int i = 0; i < 4; i++) {
    sankBasket[i]->printInfo();
  }
  // can1->printInfo();
  // can2->printInfo();
  // cho1->printInfo();
  // cho2->printInfo();

  // Candy *can11 = (Candy *)can1;
  // Candy *can21 = (Candy *)can2;
  // Chocolate *cho11 = (Chocolate *)cho1;
  // Chocolate *cho21 = (Chocolate *)cho2;

  // can11->printInfo();
  // can21->printInfo();
  // cho11->printInfo();
  // cho21->printInfo();

  delete can1;
  delete can2;
  delete cho1;
  delete cho2;
  // delete can11;
  // delete can21;
  // delete cho11;
  // delete cho21;
}

/*
class Shape {
protected:
  virtual void draw() = 0;
};

class Circle : public Shape {
public:
  void draw() { cout << "원형 출력" << endl; }
};

class Rect : public Shape {
public:
  void draw() { cout << "사각형 출력" << endl; }
};
class Tria : public Shape {
public:
  void draw() { cout << "삼각형 출력" << endl; }
};

int main() {
  Circle cir;
  Rect rec;
  Tria tria;
  cir.draw();
  rec.draw();
  tria.draw();
}
*/