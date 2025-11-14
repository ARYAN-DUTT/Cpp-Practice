// This program demonstrates the use of static data members in a class and how they behave in an array of objects.
// It also shows the size of individual objects and the entire array.

#include <iostream>
using namespace std;

class student {
    int rollNum; 
    float fees; 
    string name;
    // int sCount=0;
    // non static static data member
    static int sCount; // static data member

public:
    void input() {
        cin >> rollNum >> name >> fees;
        sCount++;
    }

    void display() {
        cout << "Roll Number: " << rollNum << endl;
        cout << "Name: " << name << endl;
        cout << "Fees: " << fees << endl;
    }

    static void displayCount() {
        // cout << "Roll Number: " << rollNum << endl;
        // cout << "Name: " << name << endl;
        // cout << "Fees: " << fees << endl;
        // if wee keep these lines it will give error because static member functions can access only static data members of the class
        cout << "Count: " << sCount << endl;
    }
};

// Definition of static data member
int student::sCount = 0;

int main() {
    student obj1;
    obj1.input();
    obj1.display();
    student::displayCount();
    return 0;
}
