#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    arr[5]=100;
    arr[6]=200;
    for(int i=0; i<7; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    return 0;
} // no compile-time error, but runtime error due to out-of-bounds access
// output is printing value of arr[5] correctly