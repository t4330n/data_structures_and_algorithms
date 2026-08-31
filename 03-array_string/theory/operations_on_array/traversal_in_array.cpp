#include <iostream>
using namespace std;

// // Types of Array Traversal

// // 1. Linear Traversal
// // Time Complexity: O(n)
// // Auxiliary Space: O(1)
// int main() {
//   int arr[] = {1, 2, 3, 4, 5};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   cout << "Linear Traversal: ";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;

//   return 0;
// }

// // 2. Reverse Traversal
// // Time Complexity: O(n)
// // Auxiliary Space: O(1)
// int main() {
//   int arr[] = {1, 2, 3, 4, 5};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   cout << "Reverse Traversal: ";
//   for (int i = n - 1; i >= 0; i--) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;

//   return 0;
// }

// // Methods of Array Traversal

// // 1. Using For Loop
// // Time Complexity: O(n)
// // Auxiliary Space: O(1)
// int main() {
//   int arr[] = {10, 20, 30, 40, 50};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   cout << "Traversal using for loop: ";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;

//   return 0;
// }

// // 2. Using While Loop
// // Time Complexity: O(n)
// // Auxiliary Space: O(1)
// int main() {
//   int arr[] = {10, 20, 30, 40, 50};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   int i = 0;

//   cout << "Traversal using while loop: ";
//   while (i < n) {
//     cout << arr[i] << " ";
//     i++;
//   }
//   cout << endl;

//   return 0;
// }

// // 3. Using Foreach Loop (Range-based For Loop)
// // Time Complexity: O(n)
// // Auxiliary Space: O(1)
// int main() {
//   int arr[] = {10, 20, 30, 40, 50};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   cout << "Traversal using foreach (range-based for) loop: ";
//   for (int value : arr) {
//     cout << value << " ";
//   }
//   cout << endl;

//   return 0;
// }

// // Applications of Array Traversal

// // 1. Searching Elements
// // Time Complexity: O(n)
// // Auxiliary Space: O(1)
// int main() {
//   int arr[] = {10, 20, 30, 40, 50};
//   int target = 30;
//   int n = sizeof(arr) / sizeof(arr[0]);
//   bool found = false;

//   for (int i = 0; i < n; i++) {
//     if (arr[i] == target) {
//       found = true;
//       break;
//     }
//   }

//   if (found) {
//     cout << "Element found!" << endl;
//   } else {
//     cout << "Element not found!" << endl;
//   }

//   return 0;
// }

// // 2. Modifying Elements
// // Time Complexity: O(n)
// // Auxiliary Space: O(1)
// int main() {
//   int arr[] = {10, 20, 30, 40, 50};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   for (int i = 0; i < n; i++) {
//     arr[i] += 5;
//   }

//   cout << "Modified array: ";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;

//   return 0;
// }