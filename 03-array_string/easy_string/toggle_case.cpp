#include <cctype>
#include <iostream>
#include <string>
using namespace std;

// // Library-Based Case Toggling
// // O(n) Time and O(n) Space
// string toggleChar(string &str) {
//   string result = "";

//   for (int i = 0; i < str.length(); i++) {
//     char ch = str[i];

//     if (isupper(ch))
//       result += tolower(ch);
//     else
//       result += toupper(ch);
//   }
//   return result;
// }

// int main() {
//   string str = "GeEkSfOrGeEkS";
//   string x = toggleChar(str);
//   cout << x << endl;
//   return 0;
// }

// // Using ASCII values
// // O(n) Time and O(1) Space
// string toggleChar(string &str) {
//   int ln = str.length();

//   for (int i = 0; i < ln; i++) {
//     if (str[i] >= 'a' && str[i] <= 'z')

//       str[i] = str[i] - 32;
//     else if (str[i] >= 'A' && str[i] <= 'Z')

//       str[i] = str[i] + 32;
//   }
//   return str;
// }

// int main() {
//   string str = "GeEkSfOrGeEkS";

//   str = toggleChar(str);

//   cout << str;
//   return 0;
// }

// Toggle Case Using XOR on 5th Bit
// O(n) Time and O(1) Space
string toggleChar(string S) {
  for (auto &ch : S) {

    ch ^= (1 << 5);
  }
  return S;
}

int main() {
  string S = "GeEkSfOrGeEkS";
  cout << toggleChar(S);
  return 0;
}