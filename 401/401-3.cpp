// 추상클래스 실습

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Shape {
protected:
  virtual void draw() = 0;
};

class Circle : public Shape {
public:
  void draw() { cout << "원" << endl; }
};

class Rect : public Shape {
public:
  void draw() { cout << "사각형" << endl; }
};

class Tria : public Shape {
public:
  void draw() { cout << "삼각형" << endl; }
};

int main() {
  Tria t;
  t.draw();

  Rect r;
  r.draw();

  return 0;
}