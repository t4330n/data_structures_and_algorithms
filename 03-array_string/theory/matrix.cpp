#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Declaration
int main() {
  int rows = 3, cols = 3;

  vector<vector<int>> arr(rows, vector<int>(cols));

  return 0;
}

// Initialization
int main() {
  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  return 0;
}

// Operations
// 1. Access Elements of Matrix
int main() {
  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  cout << "First element of first row: " << arr[0][0] << "\n";
  cout << "Third element of second row: " << arr[1][2] << "\n";
  cout << "Second element of third row: " << arr[2][1] << "\n";

  return 0;
}

// 2. Traversal of a Matrix
int main() {
  vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[i].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

// 3. Searching in a Matrix
bool searchInMatrix(vector<vector<int>>& arr, int x) {
  int m = arr.size(), n = arr[0].size();

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i][j] == x) return true;
    }
  }
  return false;
}

int main() {
  int x = 8;
  vector<vector<int>> arr = {{0, 6, 8, 9, 11},
                             {20, 22, 28, 29, 31},
                             {36, 38, 50, 61, 63},
                             {64, 66, 100, 122, 128}};

  if (searchInMatrix(arr, x))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}

// Approach to Sort Each Row of a 2D Array
void sortRows(vector<vector<int>>& mat) {
  for (auto& row : mat) {
    sort(row.begin(), row.end());
  }
}

int main() {
  vector<vector<int>> mat = {
      {77, 11, 22, 3}, {11, 89, 1, 12}, {32, 11, 56, 7}, {11, 22, 44, 33}};

  sortRows(mat);

  cout << "[\n";

  for (const auto& row : mat) {
    cout << "    [";

    for (int j = 0; j < row.size(); j++) {
      if (j > 0) cout << ", ";

      cout << row[j];
    }

    cout << "]\n";
  }

  cout << "]\n";

  return 0;
}

// Approach to Sort Each Column of a 2D Array
vector<vector<int>> transpose(vector<vector<int>> mat, int row, int col) {
  vector<vector<int>> tr(col, vector<int>(row));

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      tr[j][i] = mat[i][j];
    }
  }

  return tr;
}

void RowWiseSort(vector<vector<int>>& B) {
  for (int i = 0; i < (int)B.size(); i++) {
    sort(B[i].begin(), B[i].end());
  }
}

void sortCol(vector<vector<int>> mat, int N, int M) {
  vector<vector<int>> B = transpose(mat, N, M);

  RowWiseSort(B);

  mat = transpose(B, M, N);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << mat[i][j] << " ";
    }
    cout << '\n';
  }
}

int main() {
  vector<vector<int>> mat = {{1, 6, 10}, {8, 5, 9}, {9, 4, 15}, {7, 3, 60}};

  int N = mat.size();
  int M = mat[0].size();

  sortCol(mat, N, M);

  return 0;
}