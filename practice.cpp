//The member function definition aryan::hack(){ ... } is missing a return type. It should be void aryan::hack() { ... }. Because C++ requires the return type when defining methods outside the class, the current code is ill-formed and won't compile.



#include <iostream>
#include <iomanip>
using namespace std;
class aryan{
  private:
    int a;
    int b;
    static int c;
  public:
    void hack();
    friend void hacker();
    void printer(aryan a){
      a.hack();
    }

};

void hacker(){
  /*
    In this way friend function can access private data members.
  */
  cout<<aryan::c<<endl;
}


/*
  return type is needed to be written to define member
  function outside a class.
*/
// Scope resolution is important here.
void aryan::hack(){
  cout<<"Aryan has become a hacker"<<endl;
  cout<<"the count is : "<<c<<endl;
  c++;
}
/*
  we need to intialize a static variable outise a class
  to use it.
*/
// Scope resolution is important here.
int aryan::c=0;

int main(){
  aryan obj1;
  aryan obj2;
  obj1.hack();
  obj1.hack();

  // cout<<obj1.a<<endl;
  // You can't acces private variables like this.
  // This is actually the reaason why we use classes.
  hacker();
  cout<<"--------------"<<endl;
  /*
    this calls a member funcition that has an object as input
  */
  obj1.printer(obj2);
}
