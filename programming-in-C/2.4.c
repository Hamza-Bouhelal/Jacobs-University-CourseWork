#include <stdio.h>
/*
CH-230-A
a2 p4.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
float a, b, h;
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &h);
float squ= a*a;
float rec= a*b;
float tri= a*h/2;
float tra= (a+b)/2*h;
printf("square area=%f\n", squ);
printf("rectangle area=%f\n", rec);
printf("triangle area=%f\n", tri);
printf("trapezoid area=%f\n", tra);

return 0;
}

