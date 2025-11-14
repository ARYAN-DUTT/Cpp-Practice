#include <iostream>
using namespace std;
int main(){
  int arr[5] = {10,20,30,40,50};
  int *ptr = arr; // pointing to first element of array
  int *ptr1=&arr[4];
  cout<<"value of 3 index using ptr "<<3[ptr]<<endl;
  cout<<"value of 3 index using ptr "<<3[arr]<<endl;
  cout<<"value of 3 index using ptr "<<arr[3]<<endl;
  cout<<"value of 3 index using ptr "<<ptr[3]<<endl;
  

}