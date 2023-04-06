#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Cat {
  string name;
  int age;

public:
  Cat(string name, int age) {
    this->name = name;
    this->age = age;
    cout << name << "고양이가 태어났습니다\n";
  }

  void mew() { cout << "냐옹\n"; }
};

int main() {
  Cat cat1("나비", 10);
  cat1.mew();
}

// 	ifstream member("member.txt");
// 	string name, pw, name_in, pw_in;

// 	cout << "이름을 입력하세요: ";
// 	cin >> name_in;

// 	cout << "비밀번호를 입력하세요: ";
// 	cin >> pw_in;

// 	bool is_login = false;

// 	if (member.is_open()) {
// 		while (member >> name >> pw) {
// 			if (name_in == name && pw_in == pw) {
// 				is_login = true;
// 				break;
// 			}
// 		}

// 		if (is_login) {
// 			cout << "로그인 성공\n";

// 			string num_in, num;

// 			cout << "전화번호를 입력하세요 : ";
// 			cin >> num_in;

// 			ifstream member_tel_r("member_tel.txt");

// 			bool is_modify = false;
// 			string member_tel_tmp = "";

// 			if (member_tel_r.is_open()) {

// 				while (member_tel_r >> name >> num) {
// 					string line = name + " ";
// 					if (name_in == name) {
// 						is_modify = true;
// 						line += num_in;
// 					}
// 					else {
// 						line += num;
// 					}
// 					member_tel_tmp += line + "\n";
// 				}
// 			}

// 			member_tel_r.close();

// 			ofstream member_tel_w;

// 			if (is_modify) {
// 				member_tel_w.open("member_tel.txt");
// 				member_tel_w << member_tel_tmp;
// 			}
// 			else {
// 				member_tel_w.open("member_tel.txt", ios::app);
// 				if (member_tel_w.is_open()) {
// 					member_tel_w << name_in << " " << num_in
// << endl;
// 				}
// 			}

// 			member_tel_w.close();
// 		} else cout << "로그인 실패\n";
// 	}
// 	else cout << "파일을 읽지 못하였습니다.\n";

// 	member.close();

// }
