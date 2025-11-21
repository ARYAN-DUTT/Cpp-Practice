//
// Created by DELL on 21-11-2025.
//
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream ofs;
    ofs.open("K24QA.txt", ios::out | ios::in); //open file for both reading and writing
    ofs<<"Hello World"; //writing to file
    ofs.close();
    cout<<"File written successfully"<<endl;
    char s[100];
    //ifstream ifs;
    ofs.open("K24QA.txt", ios::out|ios::in); //open file for reading
    ofs>>s; //reading from file
    cout<<s<<endl;
    cout<<"File read successfully"<<endl;
    ofs.close();
    
    
    //following code demostrates how to use getline with fstream:-
    ofs.open("K24QA.txt", ios::out | ios::in); //open file for both reading and writing
    ofs<<"This is a sample line.\nThis is another line."; //writing multiple lines to file
    ofs.close();
    ofs.open("K24QA.txt", ios::out | ios::in); //open file for reading
    ofs.getline(s, 100); //reading first line from file
    cout<<s<<endl;
    ofs.getline(s, 100); //reading second line from file
    cout<<s<<endl;
    cout<<"File read successfully using getline"<<endl;
    ofs.close();
    return 0;
    
}