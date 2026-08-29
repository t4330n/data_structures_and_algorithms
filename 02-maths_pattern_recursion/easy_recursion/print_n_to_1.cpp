#include <iostream>
using namespace std;

void printNos(int n) {
  if (n == 0) return;

  cout << n << " ";

  printNos(n - 1);
}

int main() {
  int n = 3;
  printNos(n);
}