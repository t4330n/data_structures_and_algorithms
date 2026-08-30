#include <iostream>
#include <vector>
using namespace std;

// // [Naive Approach] Checking All Consecutive Sums
// // O(n**2) Time O(1) Space
// bool isSumOfConsecutive(int n) {
//   for (int i = 1; i < n; i++) {
//     int sum = 0;

//     for (int j = i; j < n; j++) {
//       sum += j;

//       if (sum == n && j > i) {
//         return true;
//       }

//       if (sum > n) {
//         break;
//       }
//     }
//   }

//   return false;
// }

// int main() {
//   int n = 10;

//   if (isSumOfConsecutive(n)) {
//     cout << "true";
//   } else {
//     cout << "false";
//   }

//   return 0;
// }

// [Expected Approach] Using Power of 2 Property
// O(1) Time O(1) Space
bool isSumOfConsecutive(int n) {
  if (n == 1) {
    return false;
  }

  if ((n & (n - 1)) == 0) {
    return false;
  }

  return true;
}

int main() {
  int n = 10;
  if (isSumOfConsecutive(n))
    cout << "true";
  else
    cout << "false";
  return 0;
}