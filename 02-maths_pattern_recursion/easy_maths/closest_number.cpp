#include <climits>
#include <iostream>
using namespace std;

// // [Naive Approach] Iterative Checking - O(m) Time and O(1) Space
// int closestNumber(int n, int m) {
//   int closest = 0;
//   int minDifference = INT_MAX;

//   for (int i = n - abs(m); i <= n + abs(m); ++i) {
//     if (i % m == 0) {
//       int difference = abs(n - i);

//       if (difference < minDifference ||
//           (difference == minDifference && abs(i) > abs(closest))) {
//         closest = i;
//         minDifference = difference;
//       }
//     }
//   }
//   return closest;
// }

// int main() {
//   int n = 13, m = 4;
//   cout << closestNumber(n, m) << endl;

//   return 0;
// }

// [Expected Approach] By finding Quotient - O(1) Time and O(1) Space
int closestNumber(int n, int m) {
  int q = n / m;

  int n1 = m * q;

  int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));

  if (abs(n - n1) < abs(n - n2)) return n1;

  return n2;
}

int main() {
  int n = 13, m = 4;
  cout << closestNumber(n, m) << endl;

  return 0;
}