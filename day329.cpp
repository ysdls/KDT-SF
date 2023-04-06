#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

struct Ratagle {
  float width = 0.0;
  float height = 0.0;
};

// int main() {

//   cout << "hello World\n";

//   float w;
//   float h;

//   Ratagle r;

//   cout << "가로, 세로 길이를 입력하세요";
//   cin >> w >> h;
//   r.width = w;
//   r.height = h;
//   cout << "넓이는 : " << r.width * r.height;
// }

/*
실습2
// ofstream file2("member.txt");
ifstream file;
string mem[2];
string str1, str2;
cout << "이름을 입력하세요." << endl;
cin >> mem[0];
cout << "비밀번호를 입력하세요" << endl;
cin >> mem[1];

file.open("member.txt");
file >> str1 >> str2;

if (str2 != mem[1]) {
  cout << "로그인실패";
} else {
  cout << "로그인성공";
}
file.close();
*/
/*
실습1


string members[3];
ifstream file;

cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요." << endl;
cout << "1번째 회원 : ";
cin >> members[0];

cout << "2번째 회원 : ";
cin >> members[1];

cout << "3번째 회원 : ";
cin >> members[2];

string words;
// string members[3] = {mem1, mem2, mem3};

ofstream file2("member.txt");

if (!file2.fail()) {
  for (int i = 0; i < 3; i++) {
    file2 << members[i] << endl;
    // cout << members[i] << endl;
  }

} else {
  cout << "fail to open file \n";
}
//   file2 << mem2;
//   file2 << mem3;
//   file2 << "dkajflkdsj";

cout << "--------회원 명부 파일 읽기--------" << endl;
file.open("member.txt");
while (getline(file, words)) {

  // file >> words;
  cout << words << endl;
}
//   if (!file2.fail()) {
//     file2 << mem1 << endl;

//     file2 << mem3 << endl;

//   } else {
//     cout << "fail to open file \n";
//   }
file.close();
file2.close();
*/

int main() {
  ifstream file;
  file.open("hello.txt");
  vector<string> v;
  vector<string> v2;

  string word;

  if (file.is_open()) {
    // file >> word;
    // cout << word;
    // getline(file, v);
    // cout << v << endl;
    while (getline(file, word)) {
      v.push_back(word);
    }
  } else {
    cout << "fail\n";
  }
  // cout << v.back();
  //  while (getline(v.size(), v)) {
  //    v2.push_back(v.back());
  //  }

  ofstream file2("output.txt");
  if (!file2.fail()) {
    for (int i = 0; v.size(); i++) {
      file2 << v.back() << endl;
      v.pop_back();
    }

  } else {
    cout << "fail to open file \n";
  }
  // cout << v2.back();

  file.close();
  file2.close();

  //   string line;
  //   getline(cin, line);
  //   cout << line;

  // 파일 출력
  //   ofstream file2("bye.txt");

  //   if (!file2.fail()) {
  //     file2 << "Halksdjflk dkalfj dskfdnfn\n";
  //   } else {
  //     cout << "fail to open file \n";
  //   }
  //   file2.close();
}
