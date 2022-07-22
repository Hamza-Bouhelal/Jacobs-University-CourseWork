/*
	CH-231-A
	hw1_p5.cpp
	Hamza Bouhelal
	h.bouhelal@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
vector<string> vect;
string str;
while(1){
    cin>>str;
    if(str=="END")
        break;
    vect.push_back(str);
}
vector<string> temp_vect;
if(vect.size()>4){
    for(int i=0;i<vect.size();i++)
        if(i==2)
            temp_vect.push_back(vect[4]);
        else if(i==5)
            temp_vect.push_back(vect[1]);
        else
        temp_vect.push_back(vect[i]);
    vect=temp_vect;}
else
    cout<<"Not enough element to swap 2nd and 3rd element."<<endl;
vect[vect.size()-1]="???";
vector<string>::iterator it= vect.begin();
for(int i =0;i<vect.size();i++){
    if(i!=vect.size()-1)
        cout<<*it<<",";
    else
        cout<<*it;
    it++;
}
cout<<endl;
it=vect.begin();
for(int i =0;i<vect.size();i++){
    if(i!=vect.size()-1)
        cout<<*it<<";";
    else
        cout<<*it;
    it++;
}
it--;
cout<<endl;
for(int i =0;i<vect.size();i++){
    if(i!=vect.size()-1)
        cout<<*it<<" ";
    else
        cout<<*it;
    it--;
}
return 0;
}
