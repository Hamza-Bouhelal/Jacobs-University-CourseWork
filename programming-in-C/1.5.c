#include <stdio.h>
/*
CH-230-A
a1 p5.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
int x =2138;
printf("x=%9d\n", x);
//to print a value over an amount of space, we need to
//write this amount between % and the type of that value
float y =-52.358925;
printf("y=%11.5lf\n", y);
//to precise a floating point precision, we need to add
// .(the precison)
char z = 'G';
printf("z=%c\n", z);
double u =61.295339687;
printf("u=%.7lf\n", u);
return(0);
}

