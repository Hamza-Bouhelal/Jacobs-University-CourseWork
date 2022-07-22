#include <iostream>
#include "Complex.h"
/*
CH-230-A
a10 p8.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
int main() {
 Complex a(5, 8);
 Complex b(7, 9);
 cout<<"a = ";
 a.print();
cout<<"b = ";
 b.print();
 cout<<"a's conjugate: ";
 a.conjugate().print();
 cout<<"a + b = ";
 a.add(b).print();
 cout<<"b - a = ";
 b.subs(a).print();
 cout<<"a * b = ";
 b.multi(a).print();
 return 0;
}
