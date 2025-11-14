#include <iostream>
#include <cstring> //this is required for string functions
using namespace std;
int main(){
    char arr[10]="Hello";
    char *ptr = "World";
    int arr2[10]={1,2,3,4,5};
    cout<<*arr2<<endl;
    cout<<*arr<<endl;
    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptr[0]<<endl;

    cout<<"****************"<<endl;
    string str1="string";
    cout<<str1<<endl;
    cout<<str1.length()<<endl;
    cout<<str1.size()<<endl;
    str1.append(" example");
    cout<<str1<<endl;
    str1.push_back('!');
    cout<<str1<<endl;
    str1.pop_back();
    cout<<str1<<endl;
    str1.erase(0,7);
    cout<<str1<<endl;
    str1.replace(0,6,"nig");
    cout<<str1<<endl;
    return 0;
}