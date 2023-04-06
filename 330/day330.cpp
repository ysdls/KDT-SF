#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Character {
  string name;
  int level;
  int item;
  int click;
  int health;
  int attack;

public:
  Character(string name, int level, int item, int health) {
    this->name = name;
    this->level = level;
    this->item = item;
    this->health = health;
  }

  void greeting(string name) {
    cout << name << " 캐릭터가 생성 되었습니다." << endl;
  }
  void setName(string name) { this->name = name; }
  string getName() { return name; }
  int getLevel() { return level; }
  int setLevel() { return level += 1; }
  int getItem() { return item; }
  int setItem() { return item += 1; }
  int useItem() { return item -= 1; }
  int getHealth() {
    if (health < 0) {
      return 0;
    }
    return health;
  }
  int setHealth(int attack) { return health -= attack; }
};

int main() {

  string name;
  string name2;
  cout << "캐릭터 2개의 이름을 입력헤주세요 : ";
  cin >> name >> name2;

  Character cha(name, 0, 0, 10);
  Character cha2(name2, 0, 0, 10);
  cha.greeting(name);
  cha.greeting(name2);

  while (true) {
    int click;
    int sel;
    string name;
    int attack;
    cout << "어떤 동작을 실행하겠습니까? (0: 종료)";
    cin >> click;
    if (click == 1) {
      cout << "이름을 변경할 케릭터를 선텍해주세요 (1,2): ";
      cin >> sel;
      if (sel == 1) {
        cout << cha.getName() << " 의 케릭이 선택되었습니다" << endl;
        cout << "새 이름을 입력해 주세요 : ";
        cin >> name;
        cha.setName(name);
        cout << "이름이 변경되었습니다" << endl;
        cout << "new name : " << cha.getName() << endl;
      } else if (sel == 2) {
        cout << cha2.getName() << " 의 케릭이 선택되었습니다" << endl;
        cout << "새 이름을 입력해 주세요 : ";
        cin >> name;
        cha2.setName(name);
        cout << "이름이 변경되었습니다" << endl;
        cout << "new name : " << cha2.getName() << endl;
      }
    } else if (click == 2) {
      cout << "레업할 케릭터를 선텍해주세요 (1,2): ";
      cin >> sel;
      if (sel == 1) {
        cha.setLevel();
        cout << cha.getName() << " 의 케릭이 레업되었습니다" << endl;
        cout << "level up!" << endl;
        cout << "현재레벨" << cha.getLevel() << endl;
      } else if (sel == 2) {
        cha2.setLevel();
        cout << cha2.getName() << " 의 케릭이 레업되었습니다" << endl;
        cout << "level up!" << endl;
        cout << "현재레벨" << cha2.getLevel() << endl;
      }

    } else if (click == 3) {
      cout << "아이템을 획득 할 케릭터를 선텍해주세요 (1,2): ";
      cin >> sel;
      if (sel == 1) {
        cha.setItem();
        cout << cha.getName() << " 의 케릭이 아이템을 획득 하였습니다" << endl;
        cout << "현재 아이템 개수 : " << cha.getItem() << endl;
      } else if (sel == 2) {
        cha2.setItem();
        cout << cha2.getName() << " 의 케릭이 아이템을 획득 하였습니다" << endl;
        cout << "현재 아이템 개수 : " << cha2.getItem() << endl;
      }

    } else if (click == 4) {
      cout << "아이템을 사용 할 케릭터를 선텍해주세요 (1,2): ";
      cin >> sel;
      if (sel == 1) {
        if (cha.getItem() == 0) {
          cout << "아이템이 없어 사용할 수 없습니다" << endl;
        } else {
          cha.useItem();
          cout << cha.getName() << " 의 케릭이 아이템을 사용 하였습니다"
               << endl;
          cout << "현재 아이템 개수 : " << cha.getItem() << endl;
        }
      } else if (sel == 2) {
        if (cha2.getItem() == 0) {
          cout << "아이템이 없어 사용할 수 없습니다" << endl;
        } else {
          cha2.useItem();
          cout << cha2.getName() << " 의 케릭이 아이템을 사용 하였습니다"
               << endl;
          cout << "현재 아이템 개수 : " << cha2.getItem() << endl;
        }
      }

    } else if (click == 5) {
      cout << "케릭터 정보" << endl;
      cout << "이름 : " << cha.getName() << endl;
      cout << "레벨 : " << cha.getLevel() << endl;
      cout << "현재 아이템 개수 : " << cha.getItem() << endl;
      cout << "현재 체력 : " << cha.getHealth() << endl;
      cout << "이름 : " << cha2.getName() << endl;
      cout << "레벨 : " << cha2.getLevel() << endl;
      cout << "현재 아이템 개수 : " << cha2.getItem() << endl;
      cout << "현재 체력 : " << cha2.getHealth() << endl;

    } else if (click == 6) {
      cout << "공격 할 케릭터를 선텍해주세요(1,2): ";
      cin >> sel;
      cout << "공격범위를 입력해 주세요(1~10)";
      cin >> attack;
      if (sel == 1) {
        if (cha2.getHealth() <= 0) {
          cout << cha2.getName() << " 케릭터가 죽었습니다" << endl;
        } else {
          cha2.setHealth(attack);
          cout << cha.getName() << " 이(가) " << cha2.getName()
               << " 을(를) 공격 하였습니다." << endl;
          cout << cha2.getName() << " 의 남은 체력 :" << cha2.getHealth()
               << endl;
        }
      } else if (sel == 2) {
        if (cha.getHealth() <= 0) {
          cout << cha.getName() << " 케릭터가 죽었습니다" << endl;
        } else {

          cha.setHealth(attack);
          cout << cha2.getName() << " 이(가) " << cha.getName()
               << " 을(를) 공격 하였습니다." << endl;
          cout << cha.getName() << " 의 남은 체력 :" << cha.getHealth() << endl;
        }
      }
    }

    if (click == 0) {
      break;
    }
  }
}

/*
class Retangle {
  int width;
  int height;

public:
  Retangle() {}

  int getWidth() {
    // 1
    return width;
  }
  int getHeight() {
    //
    return height;
  }

  void setValue(int width, int height) {
    this->width = width;
    this->height = height;
  }

  int area() {
    // d
    return width * height;
  };
};

int main() {
  //
  int a;
  int b;
  cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분)";
  cin >> a >> b;
  Retangle box;
  box.setValue(a, b);
  cout << "넓이는 :" << box.area();
}
*/

/*
class Retangle {
  int width;
  int height;

public:
  Retangle(int width, int height) {
    this->width = width;
    this->height = height;
  }

  int area() {
    // d
    return width * height;
  };
};

int main() {
  //
  int a;
  int b;
  cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분)";
  cin >> a >> b;
  Retangle box(a, b);
  cout << "넓이는 :" << box.area();
}
*/
