#include <iostream>
using namespace std;
int main(){
  int a = 10;
  int *const ptr = &a;
  cout<<*ptr<<endl; // Output: 10
  // ptr = &b; // Error: cannot change the address stored in a constant pointer
  *ptr = 20; // Allowed: can change the value pointed to by the pointer
  cout<<*ptr<<endl; // Output: 20

  int b = 30;
  const int *ptr2 = &b; // Pointer to a constant integer
  cout<<*ptr2<<endl; // Output: 30
  // *ptr2 = 40; // Error: cannot change the value pointed to by
}