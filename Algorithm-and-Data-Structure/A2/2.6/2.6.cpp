#include <iostream>
#include <map>
#include <fstream>
#include <string>

using namespace std;

int main(){
map<string, string> mapping;
ifstream file("data.txt");
string name;
string bday;
while(getline(file, name)){
getline(file, bday);
mapping[name]=bday;
}
file.close();
cout<<"enter quit to break the loop"<<endl;
while(name!="quit"){
  cout<<"Enter a name: ";
  getline(cin,name);
  cout<<"age: ";
  if(mapping[name]=="")
      cout<<"Name not found!"<<endl;
  else
  cout<<mapping[name]<<endl;}
return 0;
}

