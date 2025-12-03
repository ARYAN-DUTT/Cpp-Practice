#include <iostream>
using namespace std;

class time{
int hrs,minute;
public:
  time(int x){
    hrs = x/60; minute = x%60;
  }
  void display(){
    cout<<"Hours :"<<hrs<<" Minutes : "<<minute<<endl;
  }
};

int main(){
  time t1(90);
  t1.display();
}