// 13 October 2025

#include <iostream>
using namespace std;
union book{ //shared memory allocation
  //cant initialize members of union
  //memory allocated is equal to the size of the largest member
  char title[50];
  int noOfPages;
  float price;
};
int main(){
  book b1;
  cout<<"Memory Occupied by object b1 is : "<<sizeof(b1);
  return 0;
}
// data is stored in 8bit chunks which can be broken down to 4bits max.