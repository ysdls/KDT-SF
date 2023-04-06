// 오버라이딩 실습

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Student {
protected:
  string name;
  string school;
  int age;
  string stu_id;

public:
  void lunch() { cout << "점심은 학식" << endl; }
};

class Kim : public Student {
public:
  Kim(string name, string school, int age, string stu_id) {
    this->name = name;
    this->school = school;
    this->age = age;
    this->stu_id = stu_id;
  }
  void lunch() { cout << "점심은 김가네 김밥" << endl; }
};

class Baek : public Student {
public:
  Baek(string name, string school, int age, string stu_id) {
    this->name = name;
    this->school = school;
    this->age = age;
    this->stu_id = stu_id;
  }
  void lunch() { cout << "점심은 백종원 피자" << endl; }
};

int main() {
  Kim k = Kim("김", "서울대", 20, "23111111111");
  Baek b = Baek("백", "연세대", 21, "22111111111");
  k.lunch();
  b.lunch();

  return 0;
}
