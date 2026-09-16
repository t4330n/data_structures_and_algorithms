#include <iostream>
#include <vector>
using namespace std;

// Generate All Subarrays Iteratively
// O(n^3) Time and O(n) Space
vector<vector<int>> getSubArrays(vector<int>& arr) {
  vector<vector<int>> ans;
  int n = arr.size();

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      vector<int> subarray;

      for (int k = i; k <= j; k++) {
        subarray.push_back(arr[k]);
      }

      ans.push_back(subarray);
    }
  }

  return ans;
}

int main() {
  vector<int> arr = {1, 2, 3};

  vector<vector<int>> ans = getSubArrays(arr);

  cout << "[";
  for (int i = 0; i < ans.size(); i++) {
    cout << "[";
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j];
      if (j + 1 < ans[i].size()) {
        cout << ", ";
      }
    }
    cout << "]";

    if (i + 1 < ans.size()) {
      cout << ", ";
    }
  }
  cout << "]";

  return 0;
}

// // Generate All Subarrays Recursively
// // O(n^3) Time and O(n) Space
// void generate(int start, int end, vector<int>& arr, vector<int>& curr,
//               vector<vector<int>>& ans) {
//   if (end == arr.size()) return;

//   curr.push_back(arr[end]);
//   ans.push_back(curr);

//   generate(start, end + 1, arr, curr, ans);

//   curr.pop_back();
// }

// void generateSubarrays(int start, vector<int>& arr, vector<vector<int>>& ans)
// {
//   if (start == arr.size()) return;

//   vector<int> curr;

//   generate(start, start, arr, curr, ans);

//   generateSubarrays(start + 1, arr, ans);
// }

// vector<vector<int>> getSubArrays(vector<int>& arr) {
//   vector<vector<int>> ans;

//   generateSubarrays(0, arr, ans);

//   return ans;
// }

// int main() {
//   vector<int> arr = {1, 2, 3};

//   vector<vector<int>> ans = getSubArrays(arr);

//   cout << "[";
//   for (int i = 0; i < ans.size(); i++) {
//     cout << "[";
//     for (int j = 0; j < ans[i].size(); j++) {
//       cout << ans[i][j];
//       if (j + 1 < ans[i].size()) cout << ", ";
//     }
//     cout << "]";

//     if (i + 1 < ans.size()) cout << ", ";
//   }
//   cout << "]";

//   return 0;
// }