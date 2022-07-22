#include "Shapes.h"
#include <iostream>
/*
CH-230-A
a11 p5.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;
int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 3);
  Rectangle r("first rectangle", 0,0,3,5);
  Square s("first square", 0,0,3);

  c.printName();
  cout<<"The perimeter of the circle: "<<c.peritmeter()<<endl;
  cout<<"The area of the circle: "<<c.area()<<endl<<endl;

  r.printName();
  cout<<"The perimeter of the rectangle: "<<r.peritmeter()<<endl;
  cout<<"The area of the rectangle: "<<r.area()<<endl<<endl;

  s.printName();
  cout<<"The perimeter of the square: "<<s.peritmeter()<<endl;
  cout<<"The area of the square: "<<s.area()<<endl;



  return 0;

}
