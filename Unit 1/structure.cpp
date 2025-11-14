// 13 October 2025

#include <iostream>
using namespace std;
struct book{ //continuous memory allocation
  char title[50] = "C++";
  int noOfPages = 1000;
  float price = 100.4;
};
int main(){
  book b1;
  cout<<"Memory Occupied by object b1 is : "<<sizeof(b1);
  cout<<"\nTitle: "<<b1.title;
  cout<<"\nNo of Pages: "<<b1.noOfPages;
  cout<<"\nPrice: "<<b1.price;
  return 0;
}
// data is stored in 8bit chunks which can be broken down to 4bits max.