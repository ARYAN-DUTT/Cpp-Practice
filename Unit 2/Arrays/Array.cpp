// Sum of array elements and average of array elements

#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr[i];
  }
  cout<<"Sum of array elements is: "<<sum<<endl;
  double average = static_cast<double>(sum)/n;
  cout<<"Average of array elements is: "<<average<<endl;
  return 0;
}