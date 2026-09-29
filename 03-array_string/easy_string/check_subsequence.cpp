#include <iostream>
#include <string>
using namespace std;

// // [Approach 1] Using Recursion
// // O(n) Time and O(n) Space
// bool isSubSeqRec(string &s1, string &s2, int m, int n) {

//   if (m == 0)
//     return true;
//   if (n == 0)
//     return false;

//   if (s1[m - 1] == s2[n - 1])
//     return isSubSeqRec(s1, s2, m - 1, n - 1);

//   return isSubSeqRec(s1, s2, m, n - 1);
// }

// bool isSubSeq(string &s1, string &s2) {
//   int m = s1.length();
//   int n = s2.length();
//   if (m > n)
//     return false;
//   return isSubSeqRec(s1, s2, m, n);
// }

// int main() {
//   string s1 = "gksrek";
//   string s2 = "geeksforgeeks";
//   if (isSubSeq(s1, s2))
//     cout << "true";
//   else
//     cout << "false";
//   return 0;
// }

// [Approach 2] Iterative Way
// O(n)Time and O(1) Space
bool isSubSeq(string &s1, string &s2) {

  int m = s1.length(), n = s2.length();

  if (m > n)
    return false;

  int i = 0, j = 0;
  while (i < m && j < n) {
    if (s1[i] == s2[j])
      i++;
    j++;
  }

  return i == m;
}

int main() {
  string s1 = "gksrek";
  string s2 = "geeksforgeeks";
  isSubSeq(s1, s2) ? cout << "true" : cout << "false";
  return 0;
}