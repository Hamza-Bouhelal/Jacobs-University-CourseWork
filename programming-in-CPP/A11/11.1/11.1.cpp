#include <iostream>
#include "Box.h"
/*
CH-230-A
a11 p1.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/

using namespace std;
int main() {
  int n;
  cout<<"enter n: ";
  cin>>n;
  Box *b_arr=new Box [2*n];
  double h[n], w[n], d[n];
  cout<<endl;
  for(int i=0;i<n;i++){
    cout<<"enter height: ";
    cin>>h[i];
    cout<<"enter width: ";
    cin>>w[i];
    cout<<"enter depth: ";
    cin>>d[i];
    cout<<endl;
  }
  for(int i=0;i<n;i++){
  b_arr[i].setHeight(h[i]);
  b_arr[i].setWidth(w[i]);
  b_arr[i].setDepth(d[i]);
}
for(int i=0;i<n;i++){
b_arr [n+i] = b_arr[i];
}
for(int i=0;i<2*n;i++){
  cout<<"Box "<< i <<"'s volume is "<<b_arr[i].getWidth()*b_arr[i].getHeight()*b_arr[i].getDepth()<<endl;
}
return 0;
}
