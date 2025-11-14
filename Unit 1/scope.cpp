#include <iostream>
using namespace std;
int x = 10; // Global scope variable
int main() {
  {
    int x = 20;
    cout << x << endl;
  }
  cout << x;
    return 0;
}