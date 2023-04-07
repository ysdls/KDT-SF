#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  // 랜덤숫자 생성
  int num[3];
  srand((unsigned)time(NULL));
  for (int i = 0; i < 6; i++) {
    num[i] = (rand() % 9) + 1;
    for (int j = 0; j < i; j++) {
      if (num[i] == num[j]) {
        i--;
      }
    }
  }

  // 게임 시작
  vector<int> v;
  cout << "야구게임" << endl;

  int ball = 0;
  int strike = 0;
  int count = 0;

  cout << num[0] << ":" << num[1] << ":" << num[2] << endl;

  while (1) {
    v.clear();
    int ball = 0;
    int strike = 0;
    int a, b, c;

    cout << "1 ~ 9 사이의 숫자 3개를 입력하시오 (이외의 숫자: 종료)" << endl;
    cin >> a >> b >> c;

    if (a < 1 || a > 9) {
      break;
    } else if (b < 1 || b > 9) {
      break;
    } else if (c < 1 || c > 9) {
      break;
    }

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    // 중복제거
    if (v.at(0) == v.at(1)) {
      cout << "중복 입력으로 게임을 종료합니다." << endl;
      break;
    } else if (v.at(1) == v.at(2)) {
      cout << "중복 입력으로 게임을 종료합니다." << endl;
      break;
    } else if (v.at(0) == v.at(2)) {
      cout << "중복 입력으로 게임을 종료합니다." << endl;
      break;
    }

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (v.at(i) == num[j]) {
          if (i == j) {
            strike += 1;
          } else {
            ball += 1;
          }
        }
      }
    }

    cout << "Strike : " << strike << "      Ball : " << ball << endl;
    count++;
    if (strike == 3) {
      cout << "게임을 종료합니다" << endl;
      cout << count << "번 만에 맞췄습니다" << endl;
      break;
    }
  }
}