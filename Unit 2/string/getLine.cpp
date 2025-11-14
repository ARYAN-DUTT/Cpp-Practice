#include <iostream>
using namespace std;
int main(){
  string str;
  //getline function for taking space seperated strings
  getline(cin,str);
  cout<<str<<endl;
  // find function for checking wether one string is in other
  string str1 = "abc";
  // find function returns the index of the first occurence of str1 in str
  cout<<str.find(str1);
  // rfind function returns right side index
  cout<<str.rfind(str1);
  cout<<str.find_first_of(str1);
  cout<<str.find_first_not_of(str1);
  cout<<str.find_last_of(str1);
  cout<<str.find_last_not_of(str1);
  str.swap(str1);
  cout<<"str = "<<str<<endl<<
       "str1 = "<<str1<<endl;

}