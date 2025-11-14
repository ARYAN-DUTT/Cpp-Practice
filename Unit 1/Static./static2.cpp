#include<iostream>
using namespace std;
class student{
  static int count=0;
  int rollNum;
  string name;
  public:
  void getData(){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter roll number: ";
    cin>>rollNum;
    count++;
  }
}