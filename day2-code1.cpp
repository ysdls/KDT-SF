#include <iostream>

// 1. 매개변수 X return X
// 2. 매개변수 0 return x
// 3. 매개변수 0 return 0
// 4. 매개변수 x return 0

// 매개변수 여부, 반환값의 여부

// 1. 매개변수 X return X
void test_1() { std::cout << "test_1 : 매개변수 X return X"; }

// 2. 매개변수 0 return x
void test_2(int num, std::string str) {
  std::cout << "test_2 : 매개변수 0 return x";
}

// 3. 매개변수 0 return 0
std::string test_3(int num, std::string str) {
  // 함수의 본문
  return "test";
}

// 4. 매개변수 x return 0
int test_4() {
  // 함수의 본문
  std::cout << "test_4 : 매개변수 x return 0";
  std::cout << "안녕";

  return 5;
}

int sum(int num1, int num2) {
  int result = num1 + num2;
  return result;
}

void sum2(int num1, int num2) {
  int result = num1 + num2;
  std::cout << result;
}

// 1. 매개변수 X return X
// 2. 매개변수 0 return x
// 3. 매개변수 0 return 0
// 4. 매개변수 x return 0

// 매개변수는 함수의 외부에서 사용되는 값을 함수에 내부에서 사용하고 싶을 때
// return(반환값) 함수의 내부에서 얻은 값을 함수의 외부에서 필요할 때

int main() {
  int result = sum(1, 2);
  std::cout << result;

  sum2(1, 2);

  test_1();
  // std::cout << "test_1 : 매개변수 X return X";

  // 인자 5, "str"
  test_2(5, "str");

  int num = 5;
  std::string str = "str";

  std::cout << test_3(num, str);

  int num2 = test_4();
  /*std::cout << "test_4 : 매개변수 x return 0";
  std::cout << "안녕";  return 5;*/
}