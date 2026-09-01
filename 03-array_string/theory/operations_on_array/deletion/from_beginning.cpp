#include <iostream>
#include <vector>
using namespace std;

// [Approach 1] Using Built-In Methods
// Time Complexity: O(n)
// Auxiliary Space: O(1)
int main() {
  vector<int> arr = {10, 20, 30, 40};

  cout << "Array before deletion\n";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  arr.erase(arr.begin());

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
//   vector<int> arr = {10, 20, 30, 40};
//   int n = arr.size();

//   cout << "Array before deletion\n";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

//   for (int i = 1; i < n; i++) {
//     arr[i - 1] = arr[i];
//   }

//   n--;

//   cout << "\nArray after deletion\n";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }