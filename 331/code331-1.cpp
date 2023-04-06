#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Person { // Student의 부모 클래스, 슈퍼 클래스, 상위 클래스
  string name;
  int age;
  // 필드, 메소드, 생성자
public: // private, protected
  // Person() { return ???; } // 기본 생성자
  Person(string name) { this->name = name; }
  // Person p = Person("김소연");
  Person() {}
  // Person p = Person();
  void sleep() { cout << "잠자기 zzzz"; }
};

class Student : public Person { // Person의 자식 클래스, 서브 클래스, 하위
                                // 클래스
  //    string name;
  //    int age;
  // public:  // private, protected
  //    void sleep() { cout << "잠자기 zzzz"; }
  // 본인(Student) 생성자에서 부모의 생성자를 호출함.
  // Student 생성자를 작성하지 않았다는 건.
  // Student 기본생성자를 호출하고 부모의 기본생성자를 호출하게 됨.
public:
  // Student 생성자를 작성하지 않은 경우
  // Student(){ Person(); }
  void study() {
    sleep();
    cout << "공부하기";
  }
};

int main() {
  Person p = Person("김소연"); // 객체를 생성하는 순간.

  Person p = Person();

  // Person p = Person(1,3);

  // Student s = Student();

  return 0;
}