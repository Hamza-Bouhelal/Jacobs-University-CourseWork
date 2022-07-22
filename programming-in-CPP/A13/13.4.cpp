#include<iostream>
using namespace std;
/*
CH-230-A
a13 p4.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};

class B: virtual public A{
public:
  B()  { setX(10); }
};
class C:  virtual public A
{
public:
  C()  { setX(20); }
};
//each of B and C have their x, adding virtual keyword makes
// sure the program does not overlap
class D: public B, public C {
};
int main()
{
    D d;
    d.print();
    //will print 20
    return 0;
}
