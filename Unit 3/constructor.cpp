#include <iostream>
using namespace std;
class Student {
private:
    int roll;
public:
    Student() {          // constructor
        roll = 100;      // initialization
        cout << "Constructor called\n";
        cout << "Roll number: " << roll << endl;
    }
};

int main() {
    Student s1,s2,s3;   // constructor runs automatically
}
