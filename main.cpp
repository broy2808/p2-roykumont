#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
struct info1{
  int number;
  int start;
  int end;
  int block;
  std::vector<int> size1;
}info;

int main(){
int memorysize=2000;
int pagesize=0;
int memory=0,totalprocess=0;
vector<info1> prlist;
cout<<"Please enter page size where(1=100,2=200,3=300) > ";
cin>>pagesize;
if (pagesize==1){
  pagesize=100;
}else if(pagesize==2){
  pagesize=200;
}else if(pagesize==3){
  pagesize=300;
}else{
  cout<<"Invalid Value. Please enter correct value. "<<endl;
}

ifstream inputfile;
inputfile.open("in1.txt");
inputfile>>totalprocess;

while(totalprocess>0){

  inputfile>>info.number;
  inputfile>>info.start;
  inputfile>>info.end;
  inputfile>>info.block;
  int b1=info.block;
  while(b1>0){
    inputfile>>memory;
    info.size1.push_back(memory);
    b1--;
  }
  totalprocess--;
  prlist.push_back(info);
}
inputfile.close();
cout<<prlist.size();
return 0;
}
