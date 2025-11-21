// Initializer list is created before the creation of the object


#include <iostream>
using namespace std;
class Student {
private:
    int roll;
public:
    Student(int r) : roll(r) {  // member initializer list
        cout << "Constructor called\n";
        cout << "Roll number: " << roll << endl;
    }
};
int main() {
    Student s1(101);  // passing roll number
    Student s2(202);
    Student s3(303);
    return 0;
}