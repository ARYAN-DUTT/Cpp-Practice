#include <iostream>
using namespace std;
inline int Max(int x, int y){
    return((x>y)?x:y);
}
int main() {
    cout<<"Max(20,10):"<<Max(20,10)<<endl;
    cout<<"Max(0,200):"<<Max(0,200)<<endl;
    cout<<"Max(100,1010):"<<Max(100,1010)<<endl;

    return 0;
}

//code 2
#include <iostream>
using namespace std;
class student(){
  public:
  void func1(){} //implicitly treated as inline by the complier
  void func2();
};

inline void func2(){

} //explicitly set as inline function