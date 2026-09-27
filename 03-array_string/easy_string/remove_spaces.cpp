#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

// // [Naive Approach] Using Brute Force
// // O(n*n) Time and O(1) Space
// string removeSpaces(string &s) {
//   int n = s.length();

//   for (int i = 0; i < n; i++) {
//     if (s[i] == ' ') {

//       for (int j = i; j < n - 1; j++) {
//         s[j] = s[j + 1];
//       }
//       n--;
//       i--;
//     }
//   }

//   return s.substr(0, n);
// }

// int main() {
//   string s = "g  eeks   for ge  eeks  ";
//   cout << removeSpaces(s);
//   return 0;
// }

// // [Expected Approach] Using Two Pointer
// // O(n) Time and O(1) Space
// string removeSpaces(string &s) {
//   int n = s.length();
//   int i = 0, itr = 0;

//   while (i < n) {

//     if (s[i] != ' ') {

//       s[itr++] = s[i];
//     }
//     i++;
//   }

//   return s.substr(0, itr);
// }

// int main() {
//   string s = "g  eeks   for ge  eeks  ";
//   cout << removeSpaces(s);
//   return 0;
// }

// Using Built-in functions
// O(n) Time and O(1) Space
string removeSpaces(string &s) {

  auto new_end = remove(s.begin(), s.end(), ' ');

  s.erase(new_end, s.end());

  return s;
}

int main() {
  string s = "g  eeks   for ge  eeks  ";
  cout << removeSpaces(s);
  return 0;
}