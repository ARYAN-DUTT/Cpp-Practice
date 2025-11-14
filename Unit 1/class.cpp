// 13 October 2025

#include <iostream>
using namespace std;
class student{
  private:
    int rollNum;
    float fees;
    string name;
  public :void getData(int r, float f, string n);
  public :void showData();
};

void student::getData(int r, float f, string n){
  rollNum = r;
  fees = f;
  name = n;
}
void student::showData(){ //we have to use scope resolution operator to define the function outside the class
  cout<<"Roll Number: "<<rollNum<<endl;
  cout<<"Fees: "<<fees<<endl;
  cout<<"Name: "<<name<<endl;
}
int main() {
  student s1;
  s1.getData(101, 5000.50, "John Doe");
  s1.showData();
  return 0;
}

