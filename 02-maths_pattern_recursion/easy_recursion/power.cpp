#include <iostream>

using namespace std;

// // [Naive Approach 1] Using Iteration
// // O(e) Time and O(1) Space
// double power(double b, int e) {
//   double pow = 1;

//   for (int i = 0; i < abs(e); i++) pow = pow * b;

//   if (e < 0) return 1 / pow;

//   return pow;
// }

// int main() {
//   double b = 3.0;
//   int e = 5;
//   double res = power(b, e);
//   cout << res;
//   return 0;
// }

// // [Naive Approach 2] Using Recursion
// // O(e) Time and O(e) Space
// double power(double b, int e) {
//   if (e == 0) return 1;

//   if (e < 0) return 1 / power(b, -e);

//   return b * power(b, e - 1);
// }

// int main() {
//   double b = 3.0;
//   int e = 5;
//   double res = power(b, e);
//   cout << res;
//   return 0;
// }

// // [Expected Approach] Using Divide and Conquer
// // O(log e) Time and O(log e) Space
// double power(double b, int e) {
//   if (e == 0) return 1;

//   if (e < 0) return 1 / power(b, -e);

//   double temp = power(b, e / 2);

//   if (e % 2 == 0)
//     return temp * temp;
//   else
//     return b * temp * temp;
// }

// int main() {
//   double b = 3.0;
//   int e = 5;
//   double res = power(b, e);
//   cout << res;
//   return 0;
// }

// Using Inbuilt Functions
// O(log e) Time and O(1) Space
#include <cmath>

double power(double b, int e) { return pow(b, e); }

int main() {
  double b = 3.0;
  int e = 5;
  cout << power(b, e);
}