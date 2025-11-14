#include <iostream>
using namespace std;
int sum(int a, int b){
  return a + b;
}
double sum(double a, double b){
  return a + b;
}
int main() {
  int intResult = sum(5, 10); // Calls the first sum function
  double doubleResult = sum(5.5, 10.2); // Calls the second sum function
  cout << "Sum of integers: " << intResult << endl;
  cout << "Sum of doubles: " << doubleResult << endl;
  return 0;
}
