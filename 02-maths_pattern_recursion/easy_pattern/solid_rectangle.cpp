#include <iostream>
using namespace std;

// Using Nested Loops – O(n*m) Time and O(1) Space
int main() {
  int n = 3, m = 5;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cout << "* ";
    }

    // Move to the next row
    cout << "\n";
  }

  return 0;
}