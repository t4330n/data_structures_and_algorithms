#include <iostream>
#include <string>
using namespace std;

// // Approach - By traversing the string
// // O(n) Time and O(1) Space
// int findChar(string& s, char ch) {
//   int n = s.length();
//   for (int i = 0; i < n; i++) {
//     return i;
//   }

//   return -1;
// }

// int main() {
//   string s = "geeksforgeeks";
//   char ch = 'k';

//   cout << findChar(s, ch) << "\n";
//   return 0;
// }

// Approach - By Using in-built library functions
// O(n) Time and O(1) Space
int findCharacterIndex(const string& s, char ch) {
  size_t idx = s.find(ch);

  if (idx != string::npos) {
    return idx;
  } else {
    return -1;
  }
}

int main() {
  string s = "geeksforgeeks";
  char ch = 'k';

  int index = findCharacterIndex(s, ch);
  cout << index << endl;

  return 0;
}