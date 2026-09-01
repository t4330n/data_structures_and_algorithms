#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// [Approach 1] Using Built-In Methods
// Time Complexity: O(n)
// Auxiliary Space: O(1)
int main() {
  vector<int> arr = {10, 20, 20, 20, 30};
  int ele = 20;

  cout << "Array before deletion\n";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  auto it = find(arr.begin(), arr.end(), ele);

  if (it != arr.end()) {
    arr.erase(it);
  }

  cout << "\nArray after deletion\n";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

// // [Approach 2] Using Custom Methods
// // Time Complexity: O(n)
// // Auxiliary Space: O(1)
// int main() {
//   vector<int> arr = {10, 20, 20, 20, 30};
//   int n = arr.size();
//   int ele = 20;

//   cout << "Array before deletion\n";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

//   bool found = false;
//   for (int i = 0; i < n; i++) {
//     if (found) {
//       arr[i - 1] = arr[i];
//     }

//     else if (arr[i] == ele) {
//       found = true;
//     }
//   }

//   if (found == true) {
//     n--;
//   }

//   cout << "\nArray after deletion\n";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }