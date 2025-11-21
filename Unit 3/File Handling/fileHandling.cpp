#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream ofs("K24QA.txt");//create and open the file for writing
  ofs<<"hello";
  ofs.close(); //save the content of file and close it
  cout<<"File created and written"<<endl;
  char s[100];
  ifstream ifs("K24QA.txt");
  ifs>>s;
  cout<<s;
  ifs.close();
  //the reason for using close() is to free up resources and ensure that all data is properly written to the file before the program continues or terminates.
  //the reason for making character array is to store the data read from the file
}
