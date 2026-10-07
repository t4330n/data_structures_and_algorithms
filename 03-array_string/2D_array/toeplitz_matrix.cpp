#include <iostream>
#include <vector>
using namespace std;

// // [Expected Approach - 1] - Checking Each Diagonal
// // O(n × n) Time and O(1) Space
// bool checkDiagonal(vector<vector<int>> &mat, int x, int y) {
//   int n = mat.size(), m = mat[0].size();

//   for (int i = x + 1, j = y + 1; i < n && j < m; i++, j++) {
//     if (mat[i][j] != mat[x][y])
//       return false;
//   }
//   return true;
// }

// bool isToeplitz(vector<vector<int>> &mat) {
//   int n = mat.size(), m = mat[0].size();

//   for (int i = 0; i < m; i++)
//     if (!checkDiagonal(mat, 0, i))
//       return false;

//   for (int i = 0; i < n; i++)
//     if (!checkDiagonal(mat, i, 0))
//       return false;

//   return true;
// }

// int main() {
//   vector<vector<int>> mat = {{6, 7, 8}, {4, 6, 7}, {1, 4, 6}};
//   if (isToeplitz(mat)) {
//     cout << "true";
//   } else {
//     cout << "false";
//   }
//   return 0;
// }

// [Expected Approach - 2] - Checking Diagonally Above Element
// O(n × n) Time and O(1) Space
#include <iostream>
#include <vector>
using namespace std;

bool isToeplitz(vector<vector<int>> &mat) {
  int n = mat.size(), m = mat[0].size();

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (mat[i][j] != mat[i - 1][j - 1])
        return false;
    }
  }

  return true;
}

int main() {
  vector<vector<int>> mat = {{6, 7, 8}, {4, 6, 7}, {1, 4, 6}};
  if (isToeplitz(mat)) {
    cout << "true";
  } else {
    cout << "false";
  }
  return 0;
}