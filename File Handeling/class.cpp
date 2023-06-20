#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
};

int main() {
  Car *carObj1 = new Car();
  carObj1->model = "BMW";
  carObj1->brand = "X5";
  cout << carObj1 ;

  return 0;
}