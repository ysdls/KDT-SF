#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> v;
  for (int i = 1; i <= 31; i++) {
    v.push_back(i);
  }

  int game = 0;
  while (1) {
    int num; // 개수
    cout << "개수를 입력하세요 :";
    cin >> num;
    if (game % 2 == 0) {
      cout << "사용자가 부른 숫자" << num << endl;
    } else {
      cout << "컴퓨터가 부른 숫자" << num << endl;
    }
    game += 1;
    // cout << game;
    //  int count[num];
    if (num < 0 || num > 3) {
      break;
    }

    for (int i = 0; i < num; i++) {
      cout << v.at(i) << endl;
      if (v.at(i) >= 31) {
        game % 2 == 0 ? cout << "게임종료 사용자의 승리입니다." << endl
                      : cout << "게임종료 컴퓨터의 승리입니다." << endl;

        break;
      }
    }
    v.erase(v.begin(), v.begin() + num);
  }
}
