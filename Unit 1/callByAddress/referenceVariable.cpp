#include <iostream>
using namespace std;
int main(){
  int n=1000;
  int &x = n;
  int *ptr = &n;
  cout<<"Value of n: "<<n<<endl;
  cout<<"Value of x: "<<x<<endl;
  cout<<"Value of ptr: "<<*ptr<<endl;
  x = 2000; // Modifying n using reference variable x
  cout<<"After modifying x:"<<endl;
  cout<<"Value of n: "<<n<<endl;
  cout<<"Value of x: "<<x<<endl;
  cout<<"Value of ptr: "<<*ptr<<endl;
  return 0;
  // This reference variable bro has solved ridi rada of call by reference in c.
  // you can know the address of a variable from a pointer but you cannot know the address of a variable from a reference variable.
}