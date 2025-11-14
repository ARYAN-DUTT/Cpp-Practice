#include<iostream>
using namespace std;
static void display(){
  // int a=10;
  int a=10; //static variable
  cout<<"a = "<<a<<endl;
  a++;
}

int main(){
  display();
  display();
  display();
  return 0;
}
