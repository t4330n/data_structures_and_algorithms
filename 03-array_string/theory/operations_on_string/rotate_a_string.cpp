#include <iostream>
#include <numeric>
#include <string>
using namespace std;

// // [Naive Approach] Left Rotate one by one
// // Time Complexity: O(n*d)
// // Auxiliary Space: O(1)
// void rotateString(string& s, int d) {
//   int n = s.size();

//   for (int i = 0; i < d; i++) {
//     int first = s[0];
//     for (int j = 0; j < n - 1; j++) s[j] = s[j + 1];

//     s[n - 1] = first;
//   }
// }

// int main() {
//   string s = "GeeksforGeeks";
//   int d = 2;
//   rotateString(s, d);
//   cout << s << endl;
//   return 0;
// }

// // [Better Approach] Using Temporary Char Array
// // Time Complexity: O(n)
// // Auxiliary Space: O(n)
// string rotateString(string& s, int d) {
//   int n = s.length();

//   d = d % n;
//   char temp[n];

//   for (int i = 0; i < n - d; i++) temp[i] = s[d + i];

//   for (int i = 0; i < d; i++) temp[n - d + i] = s[i];

//   return string(temp, n);
// }

// int main() {
//   string s = "GeeksforGeeks";
//   int d = 2;
//   string rotatedString = rotateString(s, d);
//   cout << rotatedString << endl;
//   return 0;
// }

// // [Expected Approach - 1] Using Juggling Algorithm
// // Time Complexity: O(n)
// // Auxiliary Space: O(1)
// void rotateString(string& s, int d) {
//   int n = s.size();

//   d %= n;

//   int cycles = gcd(n, d);

//   for (int i = 0; i < cycles; i++) {
//     char startChar = s[i];

//     int currIdx = i, nextIdx;

//     while (true) {
//       nextIdx = (currIdx + d) % n;

//       if (nextIdx == i) break;

//       s[currIdx] = s[nextIdx];
//       currIdx = nextIdx;
//     }

//     s[currIdx] = startChar;
//   }
// }

// int main() {
//   string s = "GeeksforGeeks";
//   int d = 2;
//   rotateString(s, d);
//   cout << s << endl;
//   return 0;
// }

// [Expected Approach - 2] Using Reversal Algorithm
// Time Complexity: O(n)
// Auxiliary Space: O(1)
void rotateString(string& s, int d) {
  int n = s.size();

  d %= n;

  reverse(s.begin(), s.begin() + d);

  reverse(s.begin() + d, s.end());

  reverse(s.begin(), s.end());
}

int main() {
  string s = "GeeksforGeeks";
  int d = 2;
  rotateString(s, d);
  cout << s << endl;
  return 0;
}