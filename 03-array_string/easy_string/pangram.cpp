#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// // [Naive Approach] By Searching for each Character
// // O(26 * n) Time and O(1) Space
// bool checkPangram(string &s) {

//   for (char ch = 'a'; ch <= 'z'; ch++) {
//     bool found = false;

//     for (int i = 0; i < s.length(); i++) {
//       if (ch == tolower(s[i])) {
//         found = true;
//         break;
//       }
//     }

//     if (!found)
//       return false;
//   }

//   return true;
// }

// int main() {

//   string s = "The quick brown fox jumps over the lazy dog";

//   if (checkPangram(s))
//     cout << "true";
//   else
//     cout << "false";

//   return 0;
// }

// [Expected Approach] Using Visited Array
// O(n) Time and O(26) Space
bool checkPangram(string &s) {

  vector<bool> vis(26, false);

  for (int i = 0; i < s.length(); i++) {

    if ('A' <= s[i] && s[i] <= 'Z')
      vis[s[i] - 'A'] = true;

    else if ('a' <= s[i] && s[i] <= 'z')
      vis[s[i] - 'a'] = true;
  }

  for (int i = 0; i < 26; i++) {
    if (!vis[i])
      return false;
  }

  return true;
}

int main() {

  string s = "The quick brown fox jumps over the lazy dog";

  if (checkPangram(s))
    cout << "true";
  else
    cout << "false";

  return 0;
}