#include <iostream>
#include <vector>
using namespace std;

// Time Complexity: O(N)
// Auxiliary Space: O(1)
int search(vector<int>& arr, int x) {
  for (int i = 0; i < arr.size(); i++)
    if (arr[i] == x) {
      return i;
    }
  return -1;
}

int main() {
  vector<int> arr = {2, 3, 4, 10, 40};
  int x = 10;
  int res = search(arr, x);
  if (res == -1) {
    cout << "Element is not present in the array";
  } else {
    cout << "Element is present at index " << res;
  }
  return 0;
}