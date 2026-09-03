#include <iostream>
#include <string>
using namespace std;

// [Approach-1] Using Built-In Methods
// Time Complexity: O(n)
string insertChar(string& s, char c, int pos) {
  s.insert(s.begin() + pos, c);
  return s;
}

int main() {
  string s = "Geeks";
  cout << insertChar(s, 'A', 3);
  return 0;
}

// // [Approch-2] Using Custom Method
// // Time Complexity: O(n)
// string insertChar(string& s, char c, int pos) {
//   string res = "";
//   for (int i = 0; i < s.length(); i++) {
//     if (i == pos) {
//       res.push_back(c);
//     }

//     res.push_back(s[i]);
//   }

//   if (pos >= s.length()) {
//     res.push_back(c);
//   }

//   return res;
// }

// int main() {
//   string s = "Geeks";
//   cout << insertChar(s, 'A', 3);
//   return 0;
// }