// there us a feature in C++ called friend functions that allows a function to access the private and protected members of a class.


#include<iostream>
using namespace std;
class pqr;//forward declaration
class abc{
private:
    int a=10;
    int b=20;
public:
    void display(){
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
    friend int sum(abc obj, pqr ob);//friend function declaration
};
class pqr{
private:
    int c=100;
    int d=200;
public:
    void display(){
        cout<<"c: "<<c<<endl;
        cout<<"d: "<<d<<endl;
    }
    friend int sum(abc obj, pqr ob);//friend function declaration
};


int sum(abc obj,pqr ob1){//friend function definition
    obj.display();
    ob1.display();

    return obj.a + obj.b+ ob1.c + ob1.d;
}
int main(){
    abc obj1;
    pqr ob2;
    int result;
    result=sum(obj1,ob2);
    cout<<"Sum of all the elements is: "<<result<<endl;
    return 0;
}