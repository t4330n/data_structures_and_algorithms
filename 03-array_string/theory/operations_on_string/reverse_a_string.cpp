#include <iostream>
#include <string>
#include <vector>
using namespace std;

// // Using Backward Traversal
// // O(n) Time and O(n) Space
// string reverseString(string& s) {
//   string res;

//   for (int i = s.size() - 1; i >= 0; i--) {
//     res += s[i];
//   }
//   return res;
// }

// int main() {
//   string s = "abdcfe";
//   string res = reverseString(s);
//   cout << res;
//   return 0;
// }

// // Using Two Pointers
// // O(n) Time and O(1) Space
// string reverseString(string& s) {
//   int left = 0, right = s.length() - 1;

//   while (left < right) {
//     swap(s[left], s[right]);
//     left++;
//     right--;
//   }

//   return s;
// }

// int main() {
//   string s = "abdcfe";
//   cout << reverseString(s);
//   return 0;
// }

// // Using Recursion
// // O(n) Time and O(n) Space
// void reverseStringRec(string& s, int l, int r) {
//   if (l >= r) return;

//   swap(s[l], s[r]);

//   reverseStringRec(s, l + 1, r - 1);
// }

// string reverseString(string& s) {
//   int n = s.length();
//   reverseStringRec(s, 0, n - 1);
//   return s;
// }

// int main() {
//   string s = "abdcfe";
//   cout << reverseString(s) << endl;
//   return 0;
// }

// // Using Stack
// // O(n) Time and O(n) Space
// string reverseString(string& s) {
//   stack<char> st;

//   for (int i = 0; i < s.size(); i++) {
//     st.push(s[i]);
//   }

//   for (int i = 0; i < s.size(); i++) {
//     s[i] = st.top();
//     st.pop();
//   }

//   return s;
// }

// int main() {
//   string s = "abdcfe";
//   cout << reverseString(s);
//   return 0;
// }

// Using Inbuilt methods
string reverseString(string& s) {
  reverse(s.begin(), s.end());
  return s;
}

int main() {
  string s = "abdcfe";
  cout << reverseString(s);
  return 0;
}