#include <iostream>
#include <vector>
using namespace std;

// [Approach 1] Using Built-In Methods
// Time Complexity: O(1)
// Auxiliary Space: O(1)
int main() {
  vector<int> arr = {10, 20, 30, 40};
  int ele = 50;
  cout << "Array before insertion\n";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  arr.push_back(ele);

  cout << "\nArray after insertion\n";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

// // [Approach 2] Using Custom Method
// // Time Complexity: O(1)
// // Auxiliary Space: O(1)
// int main() {
//   int n = 4;
//   vector<int> arr = {10, 20, 30, 40, 0};
//   int ele = 50;
//   cout << "Array before insertion\n";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

//   arr[n] = ele;

//   cout << "\nArray after insertion\n";
//   for (int i = 0; i <= n; i++) {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }