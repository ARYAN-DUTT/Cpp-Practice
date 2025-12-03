#include <iostream>
using namespace std;
class Distance {
  int meter;
public:
  Distance(int m=0) {
    meter = m;
  }
  friend Distance operator - (Distance d1, Distance d2);
  void display(){
    cout << meter << " meters" << endl;
  }
};

Distance operator - (Distance d1, Distance d2){
  Distance temp;
  temp.meter = d1.meter - d2.meter;
  return temp;
}

int main(){
  Distance d1(50), d2(20);
  Distance d3 = d1-d2;
  cout << "Result of Subtraction: ";
  d3.display();
  return 0;
}