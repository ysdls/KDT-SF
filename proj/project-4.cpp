#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "3이상 홀수를 입력하세요 : ";
  cin >> n;

  int row = 0;
  int col = n / 2;
  int arr[n][n];

  for (int i = 1; i <= n * n; i++) {
    arr[row][col] = i;
    if (i % n == 0) {
      row++;
    } else {
      if (--row < 0) {
        row = n - 1;
      }
      if (++col == n) {
        col = 0;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}