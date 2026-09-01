#include <iostream>
#include <vector>
using namespace std;

// [Approach 1] Using Built-In Methods
// Time Complexity: O(n)
int main() {
  vector<int> arr = {10, 20, 30, 40};
  int element = 50;
  cout << "Array before insertion\n";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  arr.insert(arr.begin(), element);

  cout << "\nArray after insertion\n";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

// // [Approach 2] Using Custom Method
// // Time Complexity: O(n)
// int main() {
//   vector<int> arr = {10, 20, 30, 40, 0};
//   int n = 4;
//   int element = 50;
//   cout << "Array before insertion\n";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

//   for (int i = n - 1; i >= 0; i--) {
//     arr[i + 1] = arr[i];
//   }

//   arr[0] = element;

//   cout << "\nArray after insertion\n";
//   for (int i = 0; i <= n; i++) {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }