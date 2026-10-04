#include <iostream>
#include <vector>
using namespace std;

// [Naive Approach] Using Diagonal and Row-Column Sum Verification
// O(n * n) Time and O(n * n) Space
bool magicSquare(vector<vector<int>> &mat) {
  int n = mat.size();
  int target = 0;

  for (int j = 0; j < n; j++)
    target += mat[0][j];

  vector<int> visited(n * n + 1, 0);

  for (int i = 0; i < n; i++) {
    int rowSum = 0, colSum = 0;

    for (int j = 0; j < n; j++) {
      rowSum += mat[i][j];
      colSum += mat[j][i];

      int val = mat[i][j];

      if (val < 1 || val > n * n || visited[val]) {
        return false;
      }
      visited[val] = 1;
    }

    if (rowSum != target || colSum != target) {
      return false;
    }
  }

  int d1 = 0, d2 = 0;

  for (int i = 0; i < n; i++) {
    d1 += mat[i][i];
    d2 += mat[i][n - i - 1];
  }

  return d1 == target && d2 == target;
}

int main() {
  vector<vector<int>> mat = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
  cout << (magicSquare(mat) ? "true" : "false");
  return 0;
}

// // [Expected Approach] Using a Single Pass
// // O(n * n) Time and O(n * n) Space
// bool magicSquare(vector<vector<int>> &mat) {
//   int n = mat.size();
//   int target = n * (n * n + 1) / 2;

//   vector<int> visited(n * n + 1, 0);

//   int d1 = 0, d2 = 0;

//   for (int i = 0; i < n; i++) {
//     int rowSum = 0, colSum = 0;

//     for (int j = 0; j < n; j++) {
//       int valRow = mat[i][j];
//       int valCol = mat[j][i];

//       if (valRow < 1 || valRow > n * n || visited[valRow])
//         return false;
//       visited[valRow] = 1;

//       rowSum += valRow;
//       colSum += valCol;

//       if (i == j)
//         d1 += valRow;
//       if (i + j == n - 1)
//         d2 += valRow;
//     }

//     if (rowSum != target || colSum != target)
//       return false;
//   }

//   return d1 == target && d2 == target;
// }

// int main() {
//   vector<vector<int>> mat = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};

//   cout << (magicSquare(mat) ? "true" : "false");
//   return 0;
// }