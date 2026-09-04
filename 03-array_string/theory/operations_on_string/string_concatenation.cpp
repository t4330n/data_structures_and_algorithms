#include <iostream>
#include <string>
using namespace std;

// Using '+' Operator
// O(n+m) Time and O(n+m) Space
int main() {
  string s1 = "Hello, ";
  string s2 = "World!";

  string res = s1 + s2;

  cout << res << endl;
  return 0;
}

// Write your Own Method
// O(n+m) Time and O(n+m) Space
string concat(string s1, string s2) {
  string res;

  for (char c : s1) {
    res += c;
  }

  for (char c : s2) {
    res += c;
  }

  return res;
}

int main() {
  string s1 = "Hello, ";
  string s2 = "World!";

  string res = concat(s1, s2);

  cout << res << endl;

  return 0;
}