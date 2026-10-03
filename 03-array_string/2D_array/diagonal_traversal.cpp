#include <iostream>
#include <vector>
using namespace std;

// [Naive Approach] Using Brute Force
// O(n*n) Time and O(n*n) Space
void diagonalTraversal(vector<vector<int>> &mat) {
  int n = mat.size();
  vector<vector<int>> diag(2 * n - 1);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      diag[i + j].push_back(mat[i][j]);
    }
  }

  for (int d = 0; d < 2 * n - 1; d++) {
    for (int val : diag[d]) {
      cout << val << " ";
    }
  }
}

int main() {
  vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  diagonalTraversal(mat);
  return 0;
}

// // [Expected Approach] Using Direct Diagonal Traversal
// // O(n*n) Time and O(1) Space
// void diagonalTraversal(vector<vector<int>> &mat) {
//   int n = mat.size();

//   for (int col = 0; col < n; col++) {
//     int i = 0, j = col;
//     while (i < n && j >= 0) {
//       cout << mat[i][j] << " ";
//       i++;
//       j--;
//     }
//   }

//   for (int row = 1; row < n; row++) {
//     int i = row, j = n - 1;
//     while (i < n && j >= 0) {
//       cout << mat[i][j] << " ";
//       i++;
//       j--;
//     }
//   }
// }

// int main() {
//   vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//   diagonalTraversal(mat);
//   return 0;
// }