#include<iostream>
using namespace std;
class employee{
  private:
  int eid;
  string name;
  string dept;
  int salary;
  public:
  void getData(int e, string n, string d, int s);
  void showData();
}e1;

void employee::getData(int e, string n, string d, int s){
  int eid = e;
  string name = n;
  string dept = d;
  int salary = s;
}
void showData(){
  cout<<"Employee Id"<<e<<endl;
  cout<<"Employee name"<<n<<endl;
  cout<<"Employee dept"<<d<<endl;
  cout<<"Employee salary"<<s<<endl;
}

int main(){
  cin>>e1.e>>e1.n>>e1.d>>e1.s;
  
}