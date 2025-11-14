#include<iostream>
#include<iomanip> //header file for manipulators
using namespace std;
int main(){
  int a=100;
  cout<<setbase(16)<<a<<endl; //hexadecimal
  cout<<setbase(8)<<a<<endl; //octal
  cout<<setbase(10)<<a<<endl; //decimal \\how this works?
  cout <<hex<<a<<endl; //hexadecimal
  cout <<oct<<a<<endl; //octal
  cout <<dec<<a<<endl; //decimal

  //set width and setfill
  string b = "Hello";
  cout<<setw(20)<<setfill('n')<<b<<endl;

  //setprecision
  float c = 36786.14159;
  cout<<setprecision(3)<<c<<endl;

  //ends
  // The ends is a manipulator used ti attach a null terminating character('\0') at the end of a string. The ends manipulator takes no argument whenever it is invoked.

  // Ws
  // The manipulator ws is used to extract and ignore any whitespace characters from the input stream. The ws manipulator takes no argument whenever it is invoked.

  
}