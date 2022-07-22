#include <stdio.h>
/*
CH-230-A
a2 p7.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main()
{
int i = 8;
// {} were missing in order for the loop to properly work
while (i >= 4)
{
  printf("i is %d\n", i);
  i--;
}
printf("That's it.\n");
return 0;
}


