#include <iostream>

using namespace std;

int main() {
  cout << "--------실습1----------\n";
  int age;
  cout << "나이를 입력하세요\n";
  cin >> age;

  if (age >= 1 && age <= 7) {
    cout << "유아\n";
  } else if (age >= 8 && age <= 13) {
    cout << "초등학생\n";
  } else if (age >= 14 && age <= 16) {
    cout << "중학생\n";
  } else if (age >= 17 && age <= 19) {
    cout << "고등학생\n";
  } else if (age >= 20 && age < 200) {
    cout << "성인\n";
  } else {
    cout << "나이가 너무 많습니다\n";
  }

  cout << "--------실습2----------\n";
  string str;

  cout << "이름을 입력하세요\n";
  cin >> str;
  if (str == "홍길동") {
    cout << "남자\n";
  } else if (str == "성춘향") {
    cout << "여자\n";
  } else {
    cout << "모르겠어요\n";
  }

  cout << "--------실습3----------\n";
  int num;
  cout << "숫자를 입력하세요\n";
  cin >> num;

  num % 5 == 0 ? cout << "입력한숫자는 5의배수 입니다.\n"
               : cout << "입력한 숫자는 5의배수가 아닙니다.\n";

  cout << "--------실습4----------\n";
  int a;
  int b;
  char c;

  cout << "숫자하나를 입력하세요\n";
  cin >> a;
  cout << "숫자하나를 더 입력하세요\n";
  cin >> b;
  cout << "사칙연산 문자를 입력하세요\n";
  cin >> c;

  if (c == '+') {
    cout << a + b;
  } else if (c == '-') {
    cout << a - b;
  } else if (c == '*') {
    cout << a * b;
  } else if (c == '-') {
    cout << a / b;
  } else {
    cout << "계산할 수 없습니다\n";
  }
}