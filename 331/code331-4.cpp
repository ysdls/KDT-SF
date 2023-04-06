#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Person { //
  int age;
  string name;

public:
  Person(int age, string name) {
    this->age = age;
    this->name = name;
  }
  void sleep() { // 부모에서 정의한 메소드를 자식에서 다시 정의하는 것
    cout << "7시에 잠자기" << endl;
  }
  int override_test(int num) {
    return num;
    // 1. Student에서 오버라이딩 하기
    // 2. num에 age를 더해서 return 하는 함수만들기
  }
  int getAge() { return age; }
};

class Student : public Person {
  string stu_id;

public:
  Student(int age, string name, string stu_id) : Person(age, name) {
    this->stu_id = stu_id;
  }
  // 메소드 오버라이딩?? x -> 그냥 student의 메소드
  void study() { cout << "공부하기" << endl; }
  // 메소드 오버라이딩이 일어남.
  void sleep() { cout << "10시에 잠자기" << endl; }
  // 함수(메소드)의 원형이 같다. 함수 이름, 매개변수 종류, 개수까지 다 같음.
  int override_test(int num) {
    // num에 age를 더해서 return 하는 함수만들기
    // return num + age;
    return num + getAge();
    // getter 만들거나
    // 접근제어자를 protected로 바꾸거나
  }
};

int main() {
  Student s = Student(99, "홍길동", "11111111111");
  s.sleep(); // 잠자기
  cout << s.override_test(10);
  return 0;
}
