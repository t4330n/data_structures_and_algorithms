#include <iostream>
using namespace std;

// // On the basis of Size

// // 1. Fixed Sized Arrays
// int main() {
//   int arr[5];

//   for (int i = 0; i < 5; i++) {
//     arr[i] = i + 1;
//   }

//   cout << "Array elements are: ";
//   for (int i = 0; i < 5; i++) {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }

// // 2. Dynamic Sized Arrays
// #include <vector>

// int main() {
//   vector<int> arr;

//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);

//   cout << "Array elements are: ";
//   for (int i = 0; i < arr.size(); i++) {
//     cout << arr[i] << " ";
//   }

//   arr.pop_back();

//   cout << "\nAfter removing last element: ";
//   for (int i = 0; i < arr.size(); i++) {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }

// // On the basis of Dimensions

// // 1. One-dimensional Array
// int main() {
//   int arr[5] = {1, 2, 3, 4, 5};

//   for (int i = 0; i < 5; i++) {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }

// // 2. Two-dimensional (2D) array
// int main() {
//   int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 3; j++) {
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

// // 3. Three-dimensional array
// int main() {
//   int arr[2][2][3] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};

//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 2; j++) {
//       for (int k = 0; k < 3; k++) {
//         cout << arr[i][j][k] << " ";
//       }
//       cout << endl;
//     }
//     cout << endl;
//   }

//   return 0;
// }