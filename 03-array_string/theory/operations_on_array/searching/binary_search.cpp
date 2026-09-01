#include <iostream>
#include <vector>
using namespace std;

// Iterative Algorithm
// Time Complexity: O(log N)
// Auxiliary Space: O(1)
int binarySearch(vector<int>& arr, int x) {
  int low = 0;
  int high = arr.size() - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x) {
      return mid;
    }

    if (arr[mid] < x) {
      low = mid + 1;
    }

    else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  vector<int> arr = {2, 3, 4, 10, 40};
  int x = 10;
  int result = binarySearch(arr, x);
  if (result == -1) {
    cout << "Element is not present in array";
  } else {
    cout << "Element is present at index " << result;
  }
  return 0;
}

// // Recursive Algorithm
// // Time Complexity: O(log N)
// // Auxiliary Space: O(log N)
// int binarySearch(vector<int>& arr, int low, int high, int x) {
//   if (high >= low) {
//     int mid = low + (high - low) / 2;

//     if (arr[mid] == x) {
//       return mid;
//     }

//     if (arr[mid] > x) {
//       return binarySearch(arr, low, mid - 1, x);
//     }

//     return binarySearch(arr, mid + 1, high, x);
//   }
//   return -1;
// }

// int main() {
//   vector<int> arr = {2, 3, 4, 10, 40};
//   int query = 10;
//   int n = arr.size();
//   int result = binarySearch(arr, 0, n - 1, query);
//   if (result == -1) {
//     cout << "Element is not present in array";
//   } else {
//     cout << "Element is present at index " << result;
//   }
//   return 0;
// }