#include <iostream>
#include <string>
using namespace std;

// // [Naive Approach] Using Nested Loop
// // O(n^2) Time and O(1) Space
// char nonRep(string &s) {
//   int n = s.length();
//   for (int i = 0; i < n; ++i) {
//     bool found = false;

//     for (int j = 0; j < n; ++j) {
//       if (i != j && s[i] == s[j]) {
//         found = true;
//         break;
//       }
//     }
//     if (!found)
//       return s[i];
//   }

//   return '$';
// }

// int main() {
//   string s = "racecar";
//   cout << nonRep(s);
//   return 0;
// }

// [Efficient Approach 1] Using Frequency Array (Two Traversal)
// O(2*n) Time and O(MAX_CHAR ) Space
const int MAX_CHAR = 26;

char nonRep(const string &s) {
  vector<int> freq(MAX_CHAR, 0);
  for (char c : s) {
    freq[c - 'a']++;
  }

  for (char c : s) {
    if (freq[c - 'a'] == 1) {
      return c;
    }
  }
  return '$';
}

int main() {
  string s = "geeksforgeeks";
  cout << nonRep(s) << endl;
  return 0;
}

// // [Efficient Approach 2] By Storing Indices (Single Traversal)
// // O(n) Time and O(MAX_CHAR ) Space
// const int MAX_CHAR = 26;

// char nonRep(const string &s) {
//   vector<int> vis(MAX_CHAR, -1);
//   for (int i = 0; i < s.length(); ++i) {
//     int index = s[i] - 'a';
//     if (vis[index] == -1) {

//       vis[index] = i;
//     } else {

//       vis[index] = -2;
//     }
//   }

//   int idx = -1;

//   for (int i = 0; i < MAX_CHAR; ++i) {
//     if (vis[i] >= 0 && (idx == -1 || vis[i] < vis[idx])) {
//       idx = i;
//     }
//   }
//   return (idx == -1) ? '$' : s[vis[idx]];
// }

// int main() {
//   string s = "aabbccc";
//   cout << nonRep(s) << endl;
//   return 0;
// }