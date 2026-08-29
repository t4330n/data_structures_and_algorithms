#include <iostream>
using namespace std;

// Using Nested Loops – O(n*m) Time and O(1) Space
void printHollowRect(int n, int m) {
  int i, j;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= m; j++) {
      if (i == 1 || i == n || j == 1 || j == m)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}

int main() {
  int n = 6, m = 20;
  printHollowRect(n, m);
  return 0;
}