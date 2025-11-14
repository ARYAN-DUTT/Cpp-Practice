//factorial using recursion and call by address
#include <iostream>
using namespace std;
void factorial(int n, int *fact){
    if(n==0 || n==1){
        *fact = 1;
        return;
    }
    factorial(n-1, fact);
    *fact = (*fact) * n;
}
int main(){
    int num;
    int fact = 1;
    cout<<"Enter a number: ";
    cin>>num;
    factorial(num, &fact);
    cout<<"Factorial of "<<num<<" is "<<fact<<endl;
    return 0;
}