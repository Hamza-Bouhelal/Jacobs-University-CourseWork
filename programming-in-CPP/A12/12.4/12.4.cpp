#include <iostream>
#include "fraction.h"
/*
CH-230-A
a12 p4.[c or cpp or h]
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
  cout<<"f1 * f2= "<<a*b<<endl;
  cout<<"f1 / f2= "<<a/b<<endl;
  return 0;
}
