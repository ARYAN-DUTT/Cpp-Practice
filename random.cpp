#include <iostream>
using namespace std;
int main() {
    int a = 42;
    int *ptr=&a;
    void *ptr1 = ptr;
    cout<<"Value of 'a' using ptr1: "<<*(int*)ptr1<<endl;
    int *ptr2 = (int*)ptr1;
    cout<<"Value of 'a' using ptr2: "<<*ptr2<<endl;
    return 0;
}