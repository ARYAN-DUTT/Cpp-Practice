#include <iostream>
using namespace std;
int main(){
  enum weekend {
    sundie,
    mondie,
    tuesdie,
    wednesdie,
    thursdie,
    frydie,
    saturdie
  };

  cout<<sundie<<endl;
  weekend day = frydie;
  cout<<day<<endl;
}