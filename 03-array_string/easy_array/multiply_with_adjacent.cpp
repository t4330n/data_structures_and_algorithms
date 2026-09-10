#include <iostream>
using namespace std;

// // [Naive Approach] Using Auxiliary Array
// // O(n) Time, O(n) Space
// void updateArray(vector<int>& arr) {
//   int n = arr.size();

//   vector<int> temp(n);

//   for (int i = 0; i < n; i++) {
//     int prev = (i == 0) ? 1 : arr[i - 1];

//     int next = (i == n - 1) ? 1 : arr[i + 1];

//     temp[i] = prev * arr[i] * next;
//   }

//   arr = temp;
// }

// int main() {
//   vector<int> arr = {2, 4, 5};
//   updateArray(arr);
//   for (auto it : arr) {
//     cout << it << " ";
//   }

//   return 0;
// }

// [Expected Approach] In-Place using Previous Tracking
// O(n) Time, O(1) Space
void updateArray(vector<int>& arr) {
  int n = arr.size();

  int prev = 1;

  for (int i = 0; i < n; i++) {
    int curr = arr[i];

    int next = (i == n - 1) ? 1 : arr[i + 1];

    arr[i] = prev * curr * next;

    prev = curr;
  }
}

int main() {
  vector<int> arr = {2, 4, 5};
  updateArray(arr);
  for (auto it : arr) {
    cout << it << " ";
  }

  return 0;
}