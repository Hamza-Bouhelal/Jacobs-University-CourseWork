#include<iostream>
using namespace std;
/*
CH-230-A
a13 p5.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};

class B: virtual public A
{
public:
  B():A(10) {  }
};

class C:  virtual public A
{
public:
  C():A(10) {  }
};

class D: public B,  public C {
public:
D() : A(10), B(), C() { }
//D constructor that sets x to 10;
};

int main()
{
    D d;
    d.print();
    //will print 10
    return 0;
}
