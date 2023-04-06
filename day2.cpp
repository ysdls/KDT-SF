#include <iostream>
using namespace std;

int add(int, int);
int minuss(int, int);
int multiple(int, int);
double divide(int, int);
void check(int);
int max(int, int, int);

int main() {
  /*
    cout << "5단출력" << endl;
    // for (int i = 0; i < 9; i++) {
    //   cout << "5 * " << i + 1 << " = " << 5 * (i + 1) << endl;
    // }

    int k = 0;
    while (k < 9) {
      cout << "5 * " << k + 1 << " = " << 5 * (k + 1) << endl;
      k++;
    }

    cout << "구구단 출력" << endl;
    // for (int i = 0; i < 9; i++) {
    //   cout << "-----" << i + 1 << "단-----" << endl;
    //   for (int j = 0; j < 9; j++) {
    //     cout << i + 1 << " * " << j + 1 << " = " << (i + 1) * (j + 1) <<
    endl;
    //   }
    // }
    int i = 0;
    while (i < 9) {
      cout << "-----" << i + 1 << "단-----" << endl;
      int j = 0;
      while (j < 9) {
        cout << i + 1 << " * " << j + 1 << " = " << (i + 1) * (j + 1) << endl;
        j++;
      }
      i++;
    }



  int num;
  int i;
  int total = 0;
  cout << "1부터 n까지의 합 구하기";
  cout << "숫자(양의정수)를 입력하세요";
  cin >> num;

  //   for (i = 1; i <= num; i++) {
  //     total += i;
  //   }

  while (i <= num) {
    total += i;
    i++;
  }

  cout << "1부터 " << num << "까지의 합은 :" << total << endl;



  int total = 0;
  while (true) {
    int inp;
    cout << "숫자를 입력하세요 (0: exit) :";
    cin >> inp;

    if (inp == 0)
      break;
    total = total + inp;
  }
  cout << "사용자가 입력한 수의 합은: " << total << endl;

  int inp;

  cout << "INPUT : ";
  cin >> inp;

  cout << "OUTPUT :" << endl;
  for (int i = 0; i < inp; i++) {
    for (int j = 0; j <= i; j++) {
      cout << '*';
    }
    cout << "\n";
  }

  int num = test(2, 6);
  cout << num;

  */
  int a;
  int b;
  int c;
  cout << "정수 하나를 입력하세요";
  cin >> a;
  cout << "또 하나 정수를 입력하세요";
  cin >> b;
  cout << "또 하나 정수를 입력하세요";
  cin >> c;

  //   cout << a << " + " << b << " = " << add(a, b) << endl;
  //   cout << a << " - " << b << " = " << minuss(a, b) << endl;
  //   cout << a << " * " << b << " = " << multiple(a, b) << endl;
  //   cout << a << " / " << b << " = " << divide(a, b) << endl;

  // check(a);
  cout << max(a, b, c);
}

int add(int a, int b) { return a + b; }
int minuss(int a, int b) { return a > b ? a - b : b - a; }
int multiple(int a, int b) { return a * b; }
double divide(int a, int b) {
  double a1 = a;
  double a2 = b;
  return double(a1 / a2);
}

void check(int a) { a % 2 == 0 ? cout << "짹수" : cout << "홀수"; }

int max(int a, int b, int c) {
  int temp = a > b ? a : b;
  int temp2 = temp > c ? temp : c;
  return temp2;
}