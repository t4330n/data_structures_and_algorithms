#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// // [Naive Approach] Using Nested Loops
// // O(n^2) Time and O(1) Space
// vector<int> leaders(vector<int> &arr) {
//   vector<int> res;
//   int n = arr.size();

//   for (int i = 0; i < n; i++) {
//     int j;

//     for (j = i + 1; j < n; j++) {

//       if (arr[i] < arr[j])
//         break;
//     }

//     if (j == n)
//       res.push_back(arr[i]);
//   }

//   return res;
// }

// int main() {
//   vector<int> arr = {16, 17, 4, 3, 5, 2};
//   vector<int> result = leaders(arr);
//   for (int res : result) {
//     cout << res << " ";
//   }
//   cout << endl;

//   return 0;
// }

// [Expected Approach] Using Suffix Maximum
// O(n) Time and O(1) Space
vector<int> leaders(vector<int> &arr) {
  vector<int> res;
  int n = arr.size();

  int maxRight = arr[n - 1];

  res.push_back(maxRight);

  for (int i = n - 2; i >= 0; i--) {

    if (arr[i] >= maxRight) {
      maxRight = arr[i];
      res.push_back(maxRight);
    }
  }

  reverse(res.begin(), res.end());

  return res;
}

int main() {
  vector<int> arr = {16, 17, 4, 3, 5, 2};
  vector<int> res = leaders(arr);
  for (int x : res) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}