// Operator Overloading in C++

// the five operator that cannot be overloaded are:
// 1. Scope resolution operator (::)
// 2. Sizeof operator (sizeof)
// 3. Member selection operator (.)
// 4. Member selection through pointer to member operator (.*)
// 5. Ternary/conditional operator (?:)

#include <iostream>
using namespace std;

class abc{
    int a,b;
    public:
    abc(){
        a=0;
        b=0;
    }
    abc(int x, int y){
        a=x;
        b=y;
    }
    abc operator +(abc ob4){ // operator overloading
        abc temp;
        temp.a = a + ob4.a;
        temp.b = b + ob4.b;
        return temp;
    }
    void display(){
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;   
    }
};

int main(){
    abc ob1(10,20);
    abc ob2(30,40);
    abc ob3;
    ob3 = ob1 + ob2;
    ob3.display();
    return 0;

}