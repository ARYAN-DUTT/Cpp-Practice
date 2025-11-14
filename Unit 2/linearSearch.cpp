#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n;
    cin>>n;
    bool found = false;
    for(int i=0; i<5; i++){
        if(arr[i] == n){
            found = true;
            break;
        }
    }
    if(found){    
        cout<<"Element found in the array"<<endl;
    } else {
        cout<<"Element not found in the array"<<endl;
    }
    return 0;