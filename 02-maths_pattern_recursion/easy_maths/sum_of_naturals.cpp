#include <iostream>
using namespace std;

// // [Naive Approach] Using Loop - O(n) Time and O(1) Space
// int findSum(int n){
//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }
// int main()
// {
//     int n = 5;
//     cout << findSum(n);
//     return 0;
// }

// // [Alternative Approach] Using Recursion -O(n) and O(n) Space
// int findSum (int  n){
//     if (n == 1 )
//      return  1 ;
//     return n + findSum(n - 1);
// }
// int main() {
//     int n = 5 ;
//     cout <<  findSum(n);
//     return 0;
// }

// [Expected Approach] Formula Based Method- O(1) Time and O(1) Space
int findSum(int n) { return n * (n + 1) / 2; }
int main() {
  int n = 5;
  cout << findSum(n);
  return 0;
}