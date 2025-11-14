// void pointer is basically a pointer which can point to any data type

#include <iostream>
using namespace std;
int main(){
    int a = 40;
    void *p;
    p = &a; 
    cout<<"Value of 'a' is: "<<*(int *)p<<endl;
    cout<<"Value of 'a' is: "<<*(int*)p<<endl;
    char c = 'b';
    p = &c;
    cout<<"Value of 'c' is: "<<*(char*)p<<endl;
    return 0;
}