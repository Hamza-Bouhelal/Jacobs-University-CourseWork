#include <iostream>
#include <cstdlib>
#include "Critter.h"

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
  return 0;
}
