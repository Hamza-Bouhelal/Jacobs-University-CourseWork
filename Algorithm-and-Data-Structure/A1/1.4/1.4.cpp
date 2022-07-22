/*
	CH-231-A
	hw1_p4.cpp
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
for(int i=0;i<vect.size();i++)
    cout<<vect[i]<<" ";
cout<<endl;
vector<string>::iterator it=vect.begin();
for(int i =0;i<vect.size();i++){
    if(i!=vect.size()-1)
        cout<<*it<<",";
    else
        cout<<*it;
    it++;
}
return 0;
}


