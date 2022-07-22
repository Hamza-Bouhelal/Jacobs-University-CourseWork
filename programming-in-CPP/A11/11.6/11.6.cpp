#include <iostream>
#include "Vector.h"
/*
CH-230-A
a11 p6.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
int main() {
Vector v1;
cout<<"empty constructor(vector 1): ";
v1.print();
double *w2=new double [3]{6.3,10.9,0.48};
Vector v2(3, w2);
cout<<"constructor for setting the properties(vector 2): ";
v2.print();
Vector v3(v2);
cout<<"copy constructor(vector 3): ";
v3.print();
double *w4=new double[3]{1.6,0.9,6.48};
Vector v4(3, w4);
cout<<"constructor for setting the properties(vector 4): ";
v4.print();
cout<<"The norm of v2 Vector: "<<v2.norm()<<endl;
cout<<"The scalar product of v2 and v4= "<< v2.scal(v4)<<endl;
cout<<"The sum= ";
(v2.add(v4)).print();
cout<<"The difference= ";
v2.diff(v4).print();
return 0;
}
