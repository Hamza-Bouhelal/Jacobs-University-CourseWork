#include <stdio.h>
/*
CH-230-A
a1 p1.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
double result; /* The result of our calculation */
result = (double) (3 + 1) / 5;
//Here, in order for our program to return the valid result
//we need to specify that its value is going to be a double
//otherwise, our program will return an integer
printf("The value of 4/5 is %lf\n", result);
return 0;
}

