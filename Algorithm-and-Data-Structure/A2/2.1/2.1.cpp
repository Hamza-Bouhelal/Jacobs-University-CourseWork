#include <iostream>
#include <list>
#include <fstream>

using namespace std;

int main(){
list<int> A;
list<int> B;
int a = 1;
while (a>0){
    cin>>a;
    if (a>0){
        A.push_back(a);
        B.push_front(a);
    }
}
cout<<"List A: ";
list<int>::iterator it=A.begin();
for(int i=0;i<A.size();i++){
    cout<<*it<<" ";
    it++;
}
FILE *f=fopen("listB.txt", "w");
fclose(f);
ofstream myfile;
myfile.open("listB.txt");
it=B.begin();
for(int i=0;i<B.size();i++){
    myfile<<*it<<" ";
    it++;
}
myfile.close();
cout<<endl;
list<int> A_temp;
it=A.begin();
int t=*it;
it++;
for(int i=0;i<A.size()-1;i++){
    A_temp.push_back(*it);
    it++;
}
A_temp.push_back(t);
A = A_temp;
list<int> B_temp;
it=B.begin();
t=*it;
it++;
for(int i=0;i<B.size()-1;i++){
    B_temp.push_back(*it);
    it++;
}
B_temp.push_back(t);
B=B_temp;
cout<<"List A now: ";
it = A.begin();
for(int i=0;i<A.size()-1;i++){
  cout<<*it<<",";
  it++;
}
cout<<*it<<endl;
cout<<"List B now: ";
it = B.begin();
for(int i=0;i<B.size()-1;i++){
  cout<<*it<<",";
  it++;
}
cout<<*it<<endl;
it = B.begin();
for(int i=0;i<B.size();i++){
  A.push_back(*it);
  it++;
}
cout<<"List A+B: ";
it = A.begin();
for(int i=0;i<A.size();i++){
  cout<<*it<<" ";
  it++;
}
return 0;
}