#include <iostream>
using namespace std;
int main(){
  int a = 100;
  int *p; //its not compulsory to initialize pointer variable during declaration
  p =&a;
  int b = 200;
  int &i= b; // its compulsory to initialize reference variable during declaration
  // int &i=a; // this isnt possible after int &i= b; imppppppppportant
  i=300; // this is possible.

  cout<<"Value of pointer p: "<<p<<endl;
  cout<<"Value of &i: "<<&i<<endl;
  // both of these are the same thing

  
  return 0;
}