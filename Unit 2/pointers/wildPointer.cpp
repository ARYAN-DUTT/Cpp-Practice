#include <iostream>
using namespace std;
int main(){
    int *wld;
    cout<<*wld<<endl; // undefined behavior
    cout<<"Hello Universe"<<endl;
    return 0;
}