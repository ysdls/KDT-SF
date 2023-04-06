#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// control
class RemoteControl {
public:
  virtual void turnOn() = 0;
  virtual void turnOff() = 0;
};

class TV : public RemoteControl {
public:
  void turnOn() { cout << "tv 켬" << endl; }
  void turnOff() { cout << "tv 끔" << endl; }
};

class Radio : public RemoteControl {
public:
  void turnOn() { cout << "radio 켬" << endl; }
  void turnOff() { cout << "radio 끔" << endl; }
};

int main() { return 0; }