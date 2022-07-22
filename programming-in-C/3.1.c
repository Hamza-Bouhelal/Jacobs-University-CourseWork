#include <stdio.h>
/*
CH-230-A
a p1.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
float x ;
int n;
scanf("%f", &x);
scanf("%d", &n);
int i = 0 ;
while ( n<=0)
{
    printf("enter valid input: ");
scanf("%d", &n);
}
    for(i=0; i<n; i++)
    {
      printf("%d\n", n);
    }

return 0;
}

