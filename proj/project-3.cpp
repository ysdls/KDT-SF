#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  // 랜덤숫자 생성
  int num[6];
  srand((unsigned)time(NULL));
  for (int i = 0; i < 6; i++) {
    num[i] = (rand() % 25) + 1;
    for (int j = 0; j < i; j++) {
      if (num[i] == num[j]) {
        i--;
      }
    }
  }

  // 게임 시작
  vector<int> v;
  cout << "숫자는 1 ~ 25까지의 숫자만 입력할 수 있습니다." << endl;

  while (v.size() < 6) {
    int input;
    cout << v.size() + 1 << " 번째 번호를 입력하세요 :";
    cin >> input;

    v.push_back(input);
    for (int i = 0; i < v.size(); i++) {
      for (int j = 0; j < i; j++) {
        if (v[i] == v[j]) {
          cout << "이미 입력한 숫자 입니다." << endl;
          v.pop_back();
        }
      }
    }
    if (v.size() == 6) {
      cout << "--------------------------------" << endl;
    }
  }

  cout << "당첨번호 공개!" << endl;
  for (int a : num) {
    cout << a << " ";
  }
  cout << "\n1~7등까지 결과가 나올 수 있습니다" << endl;

  int count = 0;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      if (num[i] == v[j]) {
        count++;
      }
    }
  }

  cout << "결과 : " << 7 - count << "등입니다" << endl;
}
