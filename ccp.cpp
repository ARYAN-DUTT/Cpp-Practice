//
// Created by DELL on 18-11-2025.
//
#include <iostream>
#include <cstring>
using namespace std;
class dynamic{
  char *name;
  int length;
    public:
      dynamic()
          //first constructor
          {
              length=0;
              name=new char[length+1];//+1 for null character
          }
      dynamic(char *str)
          //second constructor
          {
              length=strlen(str);
              name=new char[length+1];
              strcpy(name,str);
          }
      void show(){
          cout<<"Name: "<<name<<endl;
          cout<<"Number of characters in the string is: "<<strlen(name)<<endl;
      }
      void join (dynamic &a,dynamic &b){
            length=a.length+b.length;
            delete name; //deallocating previous memory
            name=new char[length+1];
            //dynamic allocation of name using new keyword
            strcpy(name,a.name);
            strcat(name,b.name);
        }
//      ~dynamic(){
//          delete[] name;
//      }
};
int main(){
  char *first="Hello !";
  dynamic name1(first);
  dynamic name2("Technology");
  dynamic name3("Lovers");
    dynmaic s1,s2