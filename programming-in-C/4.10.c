#include <stdio.h>
#include <string.h>
#include <math.h>

/*
CH-230-A
a4 p10.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
void proddivpowinv(float a, float b, float *prod, float *div,float *pwr, float *invb)
{
*prod = a*b;
*div=a/b;
*pwr=pow(a,b);
*invb=(float)1/b;
}
int main() {
float a,b, prod, div, pwr, invb;
printf("a:");
scanf("%f", &a);
printf("b:");
scanf("%f", &b);
proddivpowinv(a,b,&prod,&div,&pwr,&invb);
printf("The product: %f\n", prod);
printf("The division: %f\n", div);
printf("The power: %f\n", pwr);
printf("The invert: %f\n", invb);
return 0;
}


