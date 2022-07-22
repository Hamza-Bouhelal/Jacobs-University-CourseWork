
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*
CH-230-A
a7 p7.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/

int main(){
Stack *sta;
sta=(Stack *)malloc(sizeof(Stack));
sta->count=0;
unsigned int n;
scanf("%d", &n);
for (unsigned int ncpy = n; ncpy != 0; ncpy /= 2){
push(sta, ncpy % 2);}
printf("The binary representation of %d is ", n);
printsta(sta);
printf("\n");
free(sta);
return 0;
}





