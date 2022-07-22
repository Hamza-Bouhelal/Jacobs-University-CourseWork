#include <stdio.h>
/*
CH-230-A
a1 p3.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
//# was missing, so the program couldn't
//get back to the library
int main() {
float result; /* The result of the division */
int a = 5;
float b = 13.5;
//b is a decimal, not an integer
result =  (a / b);
printf("The result is %lf\n", result);
//result is a decimal not an integer
return 0;
}
