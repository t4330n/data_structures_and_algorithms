#include <iostream>
using namespace std;

// Iterative Solution
// O(n) Time and O(1) Space
int factorial(int n) {
  // Calculating factorial of number
  int ans = 1;
  for (int i = 2; i <= n; i++) {
    ans = ans * i;
  }
  return ans;
}

int main() {
  int num = 5;
  cout << factorial(num) << endl;
  return 0;
}

// // Recursive Solution
// // O(n) Time and O(n) Space
// #include <iostream>
// using namespace std;

// int factorial(int n) {
//   // Calculating factorial of number
//   if (n == 0 || n == 1) return 1;
//   return n * factorial(n - 1);
// }

// int main() {
//   int num = 5;
//   cout << factorial(num) << endl;
//   return 0;
// }