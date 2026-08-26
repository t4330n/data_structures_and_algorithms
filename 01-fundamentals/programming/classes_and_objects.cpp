#include <iostream>
using namespace std;

class Car {
 public:
  string color;
  string model;

  void startEngine() { cout << model << " engine started" << endl; }

  void stopEngine() { cout << model << " engine stopped" << endl; }
};

int main() {
  Car myCar;
  myCar.color = "Red";
  myCar.model = "Toyota";

  // Use attributes and methods
  cout << "My car color: " << myCar.color << endl;
  myCar.startEngine();
  myCar.stopEngine();

  return 0;
}