#include <stdio.h>
/*
CH-230-A
a2 p1.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main()
{
double a, b;
scanf("%lf", &a);
getchar();
scanf("%lf", &b);
getchar();
//we got our doubles now
//we can compute the sum, the difference and the square
printf("sum of doubles=%lf\n", a+b);
printf("difference of doubles=%lf\n", a-b);
printf("square=%lf\n", a*a);
int c, d;
scanf("%d", &c);
getchar();
scanf("%d", &d);
getchar();
//we got our integers
//we can compute the sum and the product
printf("sum of integers=%d\n", c+d);
printf("product of integers=%d\n", c*d);
char e, f;
scanf("%c", &e);
getchar();
scanf("%c", &f);
getchar();
//we got our chars
//we can compute the sum and the product
printf("sum of chars=%d\n", e+f);
printf("product of chars=%d\n", e*f);
printf("sum of chars=%c\n", e+f);
printf("product of chars=%c\n", e*f);
return 0;
}
