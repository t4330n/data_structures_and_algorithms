#include <iostream>
#include <string>
using namespace std;

// // Using nested loops
// // O(m*n) Time and O(1) Space
// int findSubstring(string& txt, string& pat) {
//   int n = txt.size();
//   int m = pat.size();

//   for (int i = 0; i <= n - m; i++) {
//     int j;
//     for (j = 0; j < m; j++) {
//       if (txt[i + j] != pat[j]) {
//         break;
//       }
//     }

//     if (j == m) {
//       return i;
//     }
//   }

//   return -1;
// }

// int main() {
//   string txt = "geeksforgeeks";
//   string pat = "eks";
//   cout << findSubstring(txt, pat);

//   return 0;
// }

// Using in-built library functions
int main() {
  string txt = "geeksforgeeks";
  string pat = "eks";
  size_t idx = txt.find(pat);

  if (idx != string::npos)
    cout << idx;
  else
    cout << -1;

  return 0;
}