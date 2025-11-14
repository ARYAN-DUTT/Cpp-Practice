#include <iostream>
#include <cstring> //this is required for string functions
using namespace std;
int main(){
  string str1 = "Aryan Dutt";
  string str2 = "Dutt Aryan";
  cout<<str1.compare(6,4,str2,0,4)<<endl; //compares "Dutt" with "Dutt"
}
//output: 0 (because both are equal)
// Other possible outputs:
// A negative value if the first string is less than the second string.
// A positive value if the first string is greater than the second string.