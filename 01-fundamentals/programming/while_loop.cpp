#include <iostream>
using namespace std;

void printNumbers() {
  int count = 0;

  while (count < 5) {
    cout << count << endl;
    count++;
  }
}

int main() {
  printNumbers();

  return 0;
}