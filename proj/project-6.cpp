#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;
double calculateFunc(double a, double b, char c);

class Operator {
private:
  double a, b;

public:
  Operator() {}
  Operator(double a, double b) {
    this->a = a;
    this->b = b;
  }
  virtual void calcPrint(double a, double b) { cout << "결과"; }
  virtual double calc(double a, double b) { return 0; }
  void numFunc() { cout << "숫자를 입력해 주세요 : "; }
  void calcFunc() { cout << "연산자를 입력해 주세요 : "; }
  void line() {
    cout << "-------------------------------------------------------" << endl;
  }
};

class Add : public Operator {
public:
  Add(double a, double b) : Operator(a, b) {}
  void calcPrint(double a, double b) {
    this->line();
    cout << "결과 : " << a + b << endl;
    this->line();
  }
  double calc(double a, double b) { return a + b; }
};
class Minus : public Operator {
public:
  Minus(double a, double b) : Operator(a, b) {}
  void calcPrint(double a, double b) {
    this->line();
    cout << "결과 : " << a - b << endl;
    this->line();
  }
  double calc(double a, double b) { return a - b; }
};
class Multiply : public Operator {
public:
  Multiply(double a, double b) : Operator(a, b) {}
  void calcPrint(double a, double b) {
    this->line();
    cout << "결과 : " << a * b << endl;
    this->line();
  }
  double calc(double a, double b) { return a * b; }
};
class Divide : public Operator {
public:
  Divide(double a, double b) : Operator(a, b) {}
  void calcPrint(double a, double b) {
    this->line();
    cout << "결과 : " << a / b << endl;
    this->line();
  }
  double calc(double a, double b) { return a / b; }
};

int main() {

  string conti;

  double a, b, result;
  char calc;
  Operator *oper = new Operator();
  oper->numFunc();
  cin >> a;
  oper->calcFunc();
  cin >> calc;
  oper->numFunc();
  cin >> b;

  result = calculateFunc(a, b, calc);
  while (1) {
    string contn;
    cout << "연산을 계속 진행하시겠습니까? (Y: 계속, AC: 초기화, EXIT: 종료) :";
    cin >> contn;

    if (contn == "Y" || contn == "y") {
      oper->calcFunc();
      cin >> calc;
      oper->numFunc();
      cin >> a;
      result = calculateFunc(result, a, calc);
    } else if (contn == "AC" || contn == "ac") {
      result = 0;
      oper->numFunc();
      cin >> a;
      oper->calcFunc();
      cin >> calc;
      oper->numFunc();
      cin >> b;
      result = calculateFunc(a, b, calc);
    } else if (contn == "EXIT" || contn == "exit") {
      break;
    }
  }
}

double calculateFunc(double a, double b, char c) {
  Operator *result = new Operator(a, b);
  Operator oper = Operator();
  if (c == '+') {
    result = new Add(a, b);
    result->calcPrint(a, b);
    return result->calc(a, b);
  } else if (c == '-') {
    result = new Minus(a, b);
    result->calcPrint(a, b);
    return result->calc(a, b);
  } else if (c == '*') {
    result = new Multiply(a, b);
    result->calcPrint(a, b);
    return result->calc(a, b);
  } else if (c == '/') {
    result = new Divide(a, b);
    result->calcPrint(a, b);
    return result->calc(a, b);
  } else {
    return 0;
  }
  delete result;
}