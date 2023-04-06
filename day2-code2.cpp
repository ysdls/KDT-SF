#include <iostream>

// 매개변수의 여부, return(반환값)의 여부

// 두 개의 정수를 매개 변수로 받아
// 그 곱을 리턴하는 multiple함수를 만드세요
// 리턴타입 함수이름(매개변수) {}

// int multiple(int num1, int num2) {
//	int result = num1 * num2;
//	return result;
// }
// int multiple(int num1, int num2) {
//	return num1 * num2;
// }

// 두 개의 정수를 매개 변수로 받아
// 그 곱을 출력하는 함수를 만드세요.
void multiple(int num1, int num2) { std::cout << num1 * num2; }

int main() {
  // multiple을 활용해서 정수 두개의 곱을 출력하는 코드
  multiple(3, 5);
}