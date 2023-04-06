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

  ~Person() { cout << "Person 소멸자 입니다" << endl; }
};

class Student : public Person {
public:
  Student() : Person() { cout << "Student 생성자 입니다" << endl; }
  ~Student() { cout << "Student 소멸자 입니다" << endl; }
};

int main() {
  Student s = Student();
  // Person 생성자 입니다
  // Student 생성자 입니다

  Student *s2 = new Student();
  // Person 생성자 입니다
  // Student 생성자 입니다

  delete s2;
  // Student 소멸자 입니다
  // Person 소멸자 입니다
  cout << "안녕?" << endl;

  // Student 소멸자 입니다
  // Person 소멸자 입니다

  // Person p; // 생성자입니다.
  //// 정적 메모리
  //// 스택영역에 저장됨. 해제를 명시적으로 할 필요 X
  //// 자동으로 해제되는데, main함수가 닫힐 때
  // Person* p2 = new Person(); // 생성자입니다.
  //// 동적 메모리
  //// 힙영역에 저장됨. 해제를 명시적으로 할 필요 O
  //// 언제 ? 필요없을 때 delete
  // delete p2; // 소멸자입니다.

  // cout << "안녕하세요" << endl;
  // cout << "안녕하세요" << endl;
  // cout << "안녕하세요" << endl;
  // cout << "안녕하세요" << endl;

  //// 소멸자입니다. ( p에 대한 소멸자 )
  return 0;
}