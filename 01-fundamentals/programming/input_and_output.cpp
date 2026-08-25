#include <iostream>
using namespace std;

int main() {
  int age;
  float height;
  char grade;
  string name;

  cout << "Enter your age, height, grade, and name: ";
  cin >> age >> height >> grade >> name;

  cout << "Your age: " << age << "\n";
  cout << "Your height: " << height << "\n";
  cout << "Your grade: " << grade << "\n";
  cout << "Your name: " << name << "\n";

  return 0;
}