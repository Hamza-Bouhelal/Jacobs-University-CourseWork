#include <string>
#include <iostream>
/*
CH-230-A
a9 p8.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
void subtract_max(int *a,int n){
int m=a[0];
for(int i=0;i<n;i++){
    if(a[i]>m)
        m=a[i];
    }
for(int i=0;i<n;i++)
    a[i]=a[i]-m;
}
void deallocate(int *a){
delete[] a;
a=NULL;
}
int main(){
int n;
cin>>n;
int *a=new int [n];
if(a==NULL)
    return 0;
for(int i=0;i<n;i++)
    cin>>a[i];
cout<<"The elements in the array before modification: ";
for(int i=0;i<n;i++){
    cout<<a[i]<< " ";
}
cout<<endl;
subtract_max(a,n);
cout<<"The elements in the array after modification: ";
for(int i=0;i<n;i++){
    cout<<a[i]<< " ";
}
cout<<endl;
deallocate(a);

return 0;
}

