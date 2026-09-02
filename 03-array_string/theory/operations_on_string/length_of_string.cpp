#include <iostream>
#include <string>
using namespace std;

// Using In-built methods
int main() {
  string s = "gfg";
  cout << s.size() << endl;
  return 0;
}

// // Writing your Method
// Time Complexity: O(n)
// Auxiliary space: O(1)
// int getLength(const string& s) {
//   int i = 0, cnt = 0;
//   while (s[i]) {
//     i++;
//     cnt++;
//   }
//   return cnt;
// }

// int main() {
//   string s = "GeeksforGeeks";
//   cout << getLength(s) << endl;
//   return 0;
// }