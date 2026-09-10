#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// // Iterative approach
// // O(n) Time and O(1) Space
// bool isSorted(vector<int>& arr) {
//   for (int i = 1; i < arr.size(); i++)
//     if (arr[i - 1] > arr[i]) return false;

//   return true;
// }

// int main() {
//   vector<int> arr = {10, 20, 30, 40, 50};
//   cout << (isSorted(arr) ? "true\n" : "false\n");
//   return 0;
// }

// // Recursive approach
// // O(n) Time and O(n) Space
// bool isSortedHelper(vector<int>& arr, int n) {
//   if (n == 0 || n == 1) {
//     return true;
//   }
//   return arr[n - 1] >= arr[n - 2] && isSortedHelper(arr, n - 1);
// }

// bool isSorted(vector<int>& arr) { return isSortedHelper(arr, arr.size()); }

// int main() {
//   vector<int> arr = {10, 20, 30, 40, 50};
//   cout << (isSorted(arr) ? "true\n" : "false\n");
//   return 0;
// }

// Using Built-in Methods (Applicable for C++ and Python Only)
// O(n) Time and O(1) Space
bool isSorted(vector<int>& arr) { return (is_sorted(arr.begin(), arr.end())); }

int main() {
  vector<int> arr = {10, 20, 30, 40, 50};
  if (isSorted(arr))
    cout << "true" << endl;
  else
    cout << "false" << endl;
  return 0;
}