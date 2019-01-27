#include <iostream>
#include <cmath>

int main() {
  // Initialize all necessary variables
  double a;
  double b;
  double c;
  double root1;
  double root2;
  // Get 'a' value from user
  std::cout << "Enter 'a' value: \n";
  std::cin >> a;
  // Get 'b' value from user
  std::cout << "Enter 'b' value: \n";
  std::cin >> b;
  // Get 'c' value from user
  std::cout << "Enter 'c' value: \n";
  std::cin >> c;
  // Use quadratic formula to calculate both root values
  root1 = (-b + (sqrt(b*b - 4*a*c))) / (2*a);
  root2 = (-b - (sqrt(b*b - 4*a*c))) / (2*a);
  // Display both roots to the console
  std::cout << "Root #1 is: " << root1 << "\n";
  std::cout << "Root #2 is: " << root2 << "\n";
}