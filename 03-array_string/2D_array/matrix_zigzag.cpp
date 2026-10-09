#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Time complexity: O(n*m)
// Auxiliary space: O(1)
void zigZagMatrix(vector<vector<int>> &mat) {
  int n = mat.size();
  int m = mat[0].size();
  int row = 0, col = 0;

  bool row_inc = 0;

  int mn = min(m, n);
  for (int len = 1; len <= mn; ++len) {
    for (int i = 0; i < len; ++i) {
      cout << mat[row][col] << " ";

      if (i + 1 == len)
        break;

      if (row_inc)
        ++row, --col;
      else
        --row, ++col;
    }

    if (len == mn)
      break;

    if (row_inc)
      ++row, row_inc = false;
    else
      ++col, row_inc = true;
  }

  if (row == 0) {
    if (col == m - 1)
      ++row;
    else
      ++col;
    row_inc = 1;
  } else {
    if (row == n - 1)
      ++col;
    else
      ++row;
    row_inc = 0;
  }

  int MAX = max(m, n) - 1;
  for (int len, diag = MAX; diag > 0; --diag) {
    len = (diag > mn) ? mn : diag;
    for (int i = 0; i < len; ++i) {
      cout << mat[row][col] << " ";

      if (i + 1 == len)
        break;

      if (row_inc)
        ++row, --col;
      else
        ++col, --row;
    }

    if (row == 0 || col == m - 1) {
      if (col == m - 1)
        ++row;
      else
        ++col;
      row_inc = true;
    } else if (col == 0 || row == n - 1) {
      if (row == n - 1)
        ++col;
      else
        ++row;
      row_inc = false;
    }
  }
}

int main() {
  vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  zigZagMatrix(mat);

  return 0;
}