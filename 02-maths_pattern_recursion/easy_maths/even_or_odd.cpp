#include <iostream>
using namespace std;

// // [Naive Approach] By Finding the Remainder - O(1) Time and O(1) Space
// bool isEven(int n) {
//   int rem = n % 2;
//   if (rem == 0) {
//     return true;
//   } else {
//     return false;
//   }
// }

// int main() {
//   int n = 15;
//   if (isEven(n))
//     cout << "true";
//   else
//     cout << "false";

//   return 0;
// }

// [Efficient Approach] Using Bitwise AND Operator - O(1) Time and O(1) Space
bool isEven(int n) {
  if ((n & 1) == 0)
    return true;
  else
    return false;
}

int main() {
  int n = 15;
  if (isEven(n) == true)
    cout << "true";
  else
    cout << "false";

  return 0;
}