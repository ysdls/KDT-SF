#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

class Character {
  int hp, level, weapon;
  string name, target;

public:
  Character(string name) {
    this->name = name;
    this->hp = 30;
    this->level = 1;
    this->weapon = 0;
  }
  void printHp() { cout << hp << endl; }
  void printUser() { cout << "[" << name << " turn]" << endl; }

  int useHp() { return hp; }
  void attack(string name, string target) {
    cout << name << "이(가) " << target << "을(를) 공격했습니다 " << endl;
  }
  int setPick(int num) {
    cout << "무기를 줍습니다." << endl;
    return weapon = num;
  }
  int getPick() { return weapon; }
};

class Weapon {
  int power, count;

public:
  Weapon(int power, int count) {
    this->power = power;
    this->count = count;
  }
  virtual void attack() { cout << "공격"; }
};
class Sword : public Weapon {
public:
  Sword(int power, int count) : Weapon(power, count) {
    power = -5;
    count = 3;
  }
  void attack() { cout << "찌르기 !! 쓕쓕" << endl; }
};
class Gun : public Weapon {
public:
  Gun(int power, int count) : Weapon(power, count) {
    power = -10;
    count = 1;
  }
  void attack() { cout << "총쏘기 !! 탕탕" << endl; }
};

int main() {
  srand((unsigned)time(NULL));
  // 홀: cha, 짝: computer
  int turn = 1;
  // 컴퓨터 생성
  Character *com = new Character("computer");

  // 유저 생성
  string name;
  cout << "캐릭터 이름 입력 : ";
  cin >> name;
  Character *cha = new Character(name);

  // 둘다 안죽었을 경우 게임 진행
  while (1) {
    if (turn % 2 != 0) {
      cha->printUser();
    } else {
      com->printUser();
    }

    int move, sel;
    cout << "어떤 동작을 하겠습니까? (1.무기 줍기  2.공격): ";
    if (turn % 2 != 0) {
      cin >> move;
    } else {
      move = (rand() % 2) + 1;
      cout << endl;
    }
    // cout << move;

    if (move == 1) {
      cout << "어떤 무기를 줍겠습니까?(1.칼  2.총) :";
      cin >> sel;
      cha->setPick(sel);
    } else if (move == 2) {
      if (turn % 2 != 0) {
        int i = cha->getPick();
        if (i == 1) {
        }

        // cha->attack
      }
    }

    // if (cha.useHp() != 0 && com.useHp() != 0) {
    // }
    turn++;

    if (move == 3) {
      break;
    }
  }

  // if( cha)
}