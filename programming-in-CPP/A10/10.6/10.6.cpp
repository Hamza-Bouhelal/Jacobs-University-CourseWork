#include <iostream>
#include <cstdlib>
#include "Critter.h"
/*
CH-230-A
a10 p6.[c or cpp or h]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
using namespace std;

int main(int argc, char** argv)
{
	Critter a;
  a.setHunger(2);
	a.print();

  Critter b("b");
  b.setHunger(2);
  b.print();

  Critter c("c", 2, 8, 12);
  c.print();

  Critter d("d", 2, 40);
  d.print();

  Critter e("e", 2, 15, 16, 14);
  e.print();
  return 0;
}
