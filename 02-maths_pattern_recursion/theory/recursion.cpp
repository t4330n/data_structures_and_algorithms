#include <iostream>
using namespace std;

// // Sum of Natural Numbers
// int sum(int n) {
//   if (n == 1) return 1;

//   return n + sum(n - 1);
// }

// int main() {
//   int n = 5;
//   cout << sum(n);
//   return 0;
// }

// // Factorial of a Number
// int fact(int n) {
//   if (n == 0) return 1;

//   return n * fact(n - 1);
// }

// int main() {
//   cout << "Factorial of 5 : " << fact(5);
//   return 0;
// }

// Fibonacci with Recursion
// Function for fibonacci
// 0 1 1 2 3 ...
int fib(int n) {
  if (n == 0) return 0;

  if (n == 1 || n == 2)
    return 1;

  else
    return (fib(n - 1) + fib(n - 2));
}

int main() {
  int n = 5;
  cout << "Fibonacci series of 5 numbers is: ";

  for (int i = 0; i < n; i++) {
    cout << fib(i) << " ";
  }
  return 0;
}