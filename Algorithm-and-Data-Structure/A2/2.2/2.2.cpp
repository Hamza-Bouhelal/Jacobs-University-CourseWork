#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<float> A;
    float temp=1.0;
    while(temp!=0){
        cin>>temp;
        if(temp>0)
            A.push_back(temp);
        else if(temp<0)
            A.push_front(temp);
    }
    deque<float>::iterator it=A.begin();
    for(int i=0;i<A.size();i++){
        cout<<*it<<" ";
        it++;}
        cout<<endl;
    deque<float> A_temp;
    it=A.begin();
    int x = 0;
    for(int i=0;i<A.size();i++){
        if(*it<0)
            A_temp.push_back(*it);
        else if(*it>0){
            if(x==0){
                A_temp.push_back(x);
                A_temp.push_back(*it);
                x++;}
            else
                A_temp.push_back(*it);
        }
        it++;
    }
    A = A_temp;
    it=A.begin();
    for(int i=0;i<A.size();i++){
        if(i==A.size()-1)
            cout<<*it;
        else
            cout<<*it<<" ; ";
        it++;
    }
        cout<<endl;
    return 0;
}