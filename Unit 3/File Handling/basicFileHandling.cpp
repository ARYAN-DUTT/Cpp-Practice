#include <iostream>
#include <fstream>
using namespace std;

int main(){
  char filename[100];
  cout << "Enter the filename with: ";
  cin>>filename;
  ofstream fout(filename);
  fout<<"Hello world";
  fout.close();
  cout<<"File created and written successfully."<<endl;
  ifstream ifs(filename);
  string str;
  getline(ifs,str);
  ifs.close();
  ofstream fout1("Newfile.txt");
  fout1<<str;
  fout1.close();
  cout<<"Content copied to Newfile.txt successfully."<<endl;
}