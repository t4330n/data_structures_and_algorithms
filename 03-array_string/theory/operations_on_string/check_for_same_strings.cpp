#include <iostream>
#include <string>
using namespace std;

// Using (==) in C++/Python/C#, equals in Java and === in JavaScript
// O(n) Time and O(1) Space
bool areStringsSame(const string& s1, const string& s2) { return s1 == s2; }

int main() {
  string s1 = "abc";
  string s2 = "abcd";

  if (areStringsSame(s1, s2)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}

// // Using String Comparison Functions
// // O(n) Time and O(1) Space
// bool areStringsSame(char s1[], char s2[]) { return strcmp(s1, s2) == 0; }

// int main() {
//   char s1[] = "hello";
//   char s2[] = "hello";

//   if (areStringsSame(s1, s2)) {
//     cout << "Yes" << endl;
//   } else {
//     cout << "No" << endl;
//   }

//   return 0;
// }

// // Writing your Own Method
// // O(n) Time and O(1) Space
// bool areStringsEqual(string& s1, string& s2) {
//   if (s1.length() != s2.length()) {
//     return false;
//   }

//   for (size_t i = 0; i < s1.length(); ++i) {
//     if (s1[i] != s2[i]) {
//       return false;
//     }
//   }

//   return true;
// }

// int main() {
//   string s1 = "hello";
//   string s2 = "hello";

//   if (areStringsEqual(s1, s2)) {
//     cout << "Yes" << endl;
//   } else {
//     cout << "No" << endl;
//   }

//   return 0;
// }