#include <iostream>
#include <string>
using namespace std;

// // Using Loop
// // O(n) Time and O(n) Space
// string deleteChar(string s, int pos) {
//   string newStr = "";

//   // Build a new string by skipping the
//   // character at the given position.
//   for (int i = 0; i < s.length(); i++) {
//     if (i != pos) {
//       newStr += s[i];
//     }
//   }

//   return newStr;
// }

// int main() {
//   string s = "GeeksforGeeks";
//   int pos = 5;

//   cout << deleteChar(s, pos) << endl;

//   return 0;
// }

// Using Built-in Functions
// O(n) Time and O(1) Space
int main() {
  string str = "GeeksforGeeks";
  int pos = 5;

  str.erase(pos, 3);

  cout << str << endl;

  return 0;
}