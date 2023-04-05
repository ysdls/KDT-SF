#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>

using namespace std;

int main() {

  int num[6];
  int i, j;

  srand((unsigned)time(NULL));

  for (i = 0; i < 6; i++) {
    num[i] = (rand() % 45) + 1;
    for (j = 0; j < i; j++) {
      if (num[i] == num[j])
        i--;
    }
  }

  for (i = 0; i < 6; i++) {
    printf("%d ", num[i]);
  }
}