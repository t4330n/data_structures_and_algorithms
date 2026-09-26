#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

// erase-remove idiom
// [Approach 1] Using Built-In Method
// O(n) Time and O(1) Space
int main() {
  string s = "ababca";
  char c = 'a';

  s.erase(remove(s.begin(), s.end(), c), s.end());

  cout << s;
  return 0;
}

// // [Approach 2] Writing Your Own Method
// // O(n) Time and O(1) Space
// void removeChar(string &s, char c) {

//   int j = 0;
//   for (int i = 0; i < s.size(); i++) {
//     if (s[i] != c) {
//       s[j++] = s[i];
//     }
//   }

//   s.resize(j);
// }

// int main() {
//   string s = "geeksforgeeks";
//   removeChar(s, 'g');
//   cout << s;
//   return 0;
// }