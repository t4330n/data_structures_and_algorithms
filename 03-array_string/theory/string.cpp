#include <iostream>
#include <string>
using namespace std;

// C++ program to demonstrate String
// using Standard String representation
int main() {
  string str1 = "Welcome to GeeksforGeeks!";

  string str2("A Computer Science Portal");

  cout << str1 << endl << str2;

  return 0;
}

// // In C/C++, string literals (assigned to pointers) are immutable.
// int main() {
//     const char* str = "Hello, world!";
//     str[0] = 'h';  // Error : Assignment to read only
//     cout << str;

//     return 0;
// }

// // In C++, string objects are mutable.
// int main() {
//     string str = "Hello, world!";
//     str[0] = 'h';  // OK : 정상적으로 변경됨
//     cout << str;   // 출력: hello, world!

//     return 0;
// }