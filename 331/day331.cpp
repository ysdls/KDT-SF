#include <iostream>

using namespace std;

/*
class Student {

protected:
  string name;
  string school;
  int nums;

public:
  Student(string name, string school, int nums) {
    this->name = name;
    this->school = school;
    this->nums = nums;
  }

  void lunch() { cout << "점심은 학식" << endl; }
};

class Kim : public Student {
public:
  Kim(string name, string school, int nums) : Student(name, school, nums) {}

  void lunch() {
    cout << school << "학교 학생정보 : " << name << " 학번: " << nums << endl;
    cout << "점심은 김가네 김밥" << endl;
  }
};

class Baek : public Student {
public:
  Baek(string name, string school, int nums) : Student(name, school, nums) {}

  void lunch() {
    cout << school << "학교 학생정보 : " << name << " 학번: " << nums << endl;
    cout << "점심은 백종원 피자" << endl;
  }
};

int main() {
  Kim k = Kim("흥부", "가나", 123);
  k.lunch();

  Baek b = Baek("놀부", "다라", 456);
  b.lunch();
}
*/

/*
class Person {
  string name;

protected:
  int age;

public:
  Person(int age) { this->age = age; }
  void sleep() { cout << "잠자기" << endl; }
  int override_test(int num) {
    return num;
    // stu
  }
};

class Student : public Person {
  // int num;

public:
  Student(int age) : Person(age) {
    //
    // this->num = num;
  }
  int override_test(int num) {
    return num + age;
    // stu
  }
};

int main() {

  Student stu = Student(10);
  cout << stu.override_test(3);
}
*/

/*
class Shape {
protected:
  int count, leng;

public:
  Shape(int count, int leng) {
    this->count = count;
    this->leng = leng;
  }
  void printInfo() {
    cout << "변의 개수는 : " << count << " 개 입니다" << endl;
    cout << "밑변의 길이는 : " << leng << " 입니다" << endl;
  }
};

class Rectangle : public Shape {
  int width;

public:
  Rectangle(int count, int leng, int width) : Shape(count, leng) {
    //
    this->width = width;
  }

public:
  void area() {
    printInfo();
    cout << "길이 " << width << "의 사각형의 넓이는 " << width * leng
         << " 입니다" << endl;
  }
};

class Triangle : public Shape {
  int height;

public:
  Triangle(int count, int leng, int height) : Shape(count, leng) {
    //
    this->height = height;
  }

  void area() {
    printInfo();
    cout << "길이 " << height << "의 삼각형의 넓이는 " << (height * leng) / 2
         << " 입니다" << endl;
  }
};

int main() {
  Triangle tri = Triangle(3, 5, 4);
  Rectangle rect = Rectangle(4, 7, 8);
  tri.area();
  rect.area();
}
*/