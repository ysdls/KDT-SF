#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// 클래스는 필드, 메소드, 생성자, 소멸자로 구성됨.
// 생성자 : 객체가 생성될 때 자동으로 실행되는 메소드
// 소멸자 : 객체가 소멸될 때 자동으로 실행되는 메소드

class Person {
public:
  Person() { cout << "Person 생성자 입니다" << endl; }
  // 가상함수 : 부모클래스에서 정의될 예정.
  // 자식클래스가 재정의(오버라이딩)할 것이라고 기대하는 함수
  // 순수 가상함수 : 구현이 안되어 있는 함수 ( = 0)
  // virtual void sleep() = 0;
  virtual void sleep() { // 가상 함수 : 동적 바인딩을 하기 위해
    cout << "잠자기" << endl;
  }
};

class Student : public Person {
public:
  Student() : Person() { cout << "Student 생성자 입니다" << endl; }
  void sleep() { // 가상 함수를 재정의(오버라이딩)한 것
    cout << "10시에 잠자기" << endl;
  }
};

int main() {
  Student s = Student();
  // Person 생성자 입니다
  // Student 생성자 입니다
  s.sleep(); // 정적 바인딩

  Person *s2 = new Student(); // 업캐스팅
  s2->sleep();                // 동적 바인딩

  delete s2;

  return 0;
}
