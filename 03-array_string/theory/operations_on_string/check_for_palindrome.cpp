#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

// Using Two-Pointers
// O(n) time and O(1) space
bool isPalindrome(string& s) {
  int left = 0;
  int right = s.length() - 1;

  while (left < right) {
    if (s[left] != s[right]) return false;

    left++;
    right--;
  }

  return true;
}

int main() {
  string s = "abba";

  cout << boolalpha << isPalindrome(s) << endl;

  return 0;
}

// // Using Single Variable
// // O(n) time and O(1) space
// bool isPalindrome(string& s) {
//   int len = s.length();

//   for (int i = 0; i < len / 2; i++) {
//     if (s[i] != s[len - i - 1]) return false;
//   }

//   return true;
// }

// int main() {
//   string s = "abba";
//   cout << boolalpha << isPalindrome(s) << endl;

//   return 0;
// }

// // Using Recursion
// // O(n) time and O(n) space
// bool isPalindromeUtil(string& s, int left, int right) {
//   if (left >= right) return true;

//   if (s[left] != s[right]) return false;

//   return isPalindromeUtil(s, left + 1, right - 1);
// }

// bool isPalindrome(string s) {
//   int left = 0, right = s.length() - 1;
//   return isPalindromeUtil(s, left, right);
// }

// int main() {
//   string s = "abba";
//   cout << boolalpha << isPalindrome(s) << endl;

//   return 0;
// }

// // By Reversing String
// // O(n) time and O(n) space
// bool isPalindrome(string& s) { return s == string(s.rbegin(), s.rend()); }

// int main() {
//   string s = "abba";
//   cout << boolalpha << isPalindrome(s) << endl;

//   return 0;
// }