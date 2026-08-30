#include <iostream>
using namespace std;

// Using Nested Loops
// O(n²) Time and O(1) Space
void printfloydtriangle(int n) {
  int val = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << val++ << " ";
    }
    cout << endl;
  }
}

int main() {
  printfloydtriangle(6);
  return 0;
}