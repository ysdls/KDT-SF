#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  // srand((unsigned)time(NULL));
  vector<string> v;
  int attack = 0;
  cout << "게임시작" << endl;
  time_t start = time(NULL);
  // cout << "start: " << start;

  while (1) {
    string str;
    bool check;
    time_t end = time(NULL);
    // cout << "whddasd:" << end << endl;

    cout << "다음 단어를 입력하세요. : ";
    cin >> str;

    v.push_back(str);
    for (int i = 0; i < v.size(); i++) {
      for (int j = 0; j < i; j++) {
        if (v[i] == v[j]) {
          v.pop_back();
          cout << "중복입력입니다" << endl;
        }
      }
    }
    for (int i = 0; i < v.size(); i++) {
      if (i == v.size() - 1) {
        cout << v[i] << endl;
      } else {
        cout << v[i] << "->";
      }
    }
    int leng = str.size();
    // cout << str[leng - 1];

    // cout << end;
    attack = end - start;
    // cout << "end: " << attack << "|||||" << end - start;

    if (attack >= 30 || str == "r") {
      cout << "게임종료" << endl;
      cout << "총 입력한 단어 개수 : " << v.size() << endl;
      break;
    }
  }
}
