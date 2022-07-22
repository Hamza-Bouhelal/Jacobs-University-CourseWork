#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
vector<int> vect;
for(int i=1;i<31;i++)
    vect.push_back(i);
vect.push_back(5);
reverse(vect.begin(), vect.end());
vector<int>::iterator it=vect.begin();
for(int i=0;i<vect.size();i++){
    cout<<*it<<" ";
    it++;}
cout<<endl;
replace(vect.begin(), vect.end(), 5, 129);
it=vect.begin();
for(int i=0;i<vect.size();i++){
    cout<<*it<<" ";
    it++;}
cout<<endl;
return 0;
}