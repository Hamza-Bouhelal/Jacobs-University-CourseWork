#include <stdio.h>
#include <stdlib.h>
/*
CH-230-A
a6 p4.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
#define INTERMEDIATE
#define SCALAR_PRODUCT
int main()
{
int n, sp=0;
scanf("%d", &n);
int v[n], w[n], x[n];
for(int i=0;i<n;i++)
scanf("%d", &v[i]);
for(int i=0;i<n;i++)
scanf("%d", &w[i]);
for(int i=0;i<n;i++)
x[i]=v[i]*w[i];
#ifdef INTERMEDIATE
printf("The intermediate product values are:\n");
for(int i=0;i<n;i++)
printf("%d\n", v[i]*w[i]);
#endif //INTERMEDIATE
for(int i=0;i<n;i++)
sp=sp+x[i];
printf("The scalar product is: %d\n", sp);
return 0;
}


