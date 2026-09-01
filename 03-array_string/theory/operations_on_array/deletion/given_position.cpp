#include <iostream>
#include <vector>
using namespace std;

// [Approach 1] Using Built-In Methods
// Time Complexity: O(n)
// Auxiliary Space: O(1)
int main() {
  vector<int> arr = {10, 20, 30, 40};
  int pos = 2;

  cout << "Array before deletion\n";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  arr.erase(arr.begin() + pos - 1);

  cout << "\nArray after deletion\n";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

// // [Approach 2] Using Custom Method
// // Time Complexity: O(n)
// // Auxiliary Space: O(1)
// int main() {
//   vector<int> arr = {10, 20, 30, 40};
//   int n = arr.size();
//   int pos = 2;

//   cout << "Array before deletion\n";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

//   for (int i = pos; i < n; i++) {
//     arr[i - 1] = arr[i];
//   }

//   if (pos <= n) {
//     n--;
//   }

//   cout << "\nArray after deletion\n";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }