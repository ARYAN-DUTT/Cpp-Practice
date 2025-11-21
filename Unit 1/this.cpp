// this is a program to demonstrate the use of the 'this' pointer in C++
#include <iostream>
using namespace std;
class Box {
  private:
    double length;
    double width;
  public:
    void setDimensions(double length, double width);
    void showDimensions();
};

void Box::setDimensions(double length, double width) {
    this->length = length;
    this->width = width;
}

void Box::showDimensions() {
    cout << "Length: " << this->length << endl;
    cout << "Width: " << this->width << endl;
}
int main() {
    Box box;
    box.setDimensions(10.5, 7.8);
    box.showDimensions();
    return 0;
}