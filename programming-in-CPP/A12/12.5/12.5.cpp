#include <iostream>
#include "fraction.h"
/*
CH-230-A
a12 p5.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;

int main(void)
{
	Fraction a;
  cout<<"enter a fraction: "<<endl;
  cin>>a;
  Fraction b;
  cout<<"enter an other fraction: "<<endl;
  cin>>b;
  cout<<"The first fraction is: "<<a<<endl<<"The second Fraction is "<<b<<endl;
  Fraction c=a;
  cout<<"the copy of the first fraction: "<<c<<endl;
  cout<<"f1 * f2= "<<a*b<<endl;
  cout<<"f1 / f2= "<<a/b<<endl;
  cout<<"f1 + f2= "<<a+b<<endl;
  cout<<"f1 - f2= "<<a-b<<endl;
  if(a<b){
  cout<<"f1 is smaller than f2"<<endl;
  }
  else if(c>b)
  cout<<"f2 is smaller than f1"<<endl;
  else
  cout<<"both fractions have the same value"<<endl;

  return 0;
}

