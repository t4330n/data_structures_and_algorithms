#include <iostream>
#include <vector>
using namespace std;

// alternately using Two pointers
// Time Complexity : O(n)
// Auxiliary Space : O(n)
void rearrange(vector<int>& arr) {
  vector<int> pos, neg;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] >= 0)
      pos.push_back(arr[i]);
    else
      neg.push_back(arr[i]);
  }

  int posIdx = 0, negIdx = 0;
  int i = 0;

  while (posIdx < pos.size() && negIdx < neg.size()) {
    if (i % 2 == 0)
      arr[i++] = pos[posIdx++];
    else
      arr[i++] = neg[negIdx++];
  }

  while (posIdx < pos.size()) {
    arr[i++] = pos[posIdx++];
  }

  while (negIdx < neg.size()) {
    arr[i++] = neg[negIdx++];
  }
}

int main() {
  vector<int> arr = {1, 2, 3, -4, -1, 4};
  rearrange(arr);
  for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";

  return 0;
}