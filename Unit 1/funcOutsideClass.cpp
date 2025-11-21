#include <iostream>
using namespace std;
class hello{
    public:
    static string data;
    string data1 = "Lil";
    public:
    static string func(string data, hello h2);
};

string hello::func(string data, hello h2){
  return h2.data+data;
}

string hello::data = "Big";

int main(){
  hello h1;
  hello h2;
  string hello::*ptr = &hello::data1;

  string pahul = h1.func(" Nig",h2);
  cout<<pahul;
  cout<<endl;
  cout<<h1.*ptr;
}