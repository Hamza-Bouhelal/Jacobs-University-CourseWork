#include <stdio.h>
/*
CH-230-A
a2 p6.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
double x, y;
double *ptr_one, *ptr_two, *ptr_three;
//assigning them to x and y
ptr_one= &x;
ptr_two= &x;
ptr_three= &y;
printf("Give a value to x: ");
scanf("%lf", &x);
printf("Give a value to y: ");
scanf("%lf", &y);
//introducing the pointers
//printing the addresses
printf("ptr_one = %p\n",ptr_one);
printf("ptr_two = %p\n", ptr_two);
printf("ptr_three = %p", ptr_three);
return 0;
}


