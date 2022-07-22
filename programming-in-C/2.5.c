#include <stdio.h>
/*
CH-230-A
a2 p5.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
int a;
printf("give a value to a: ");
scanf("%d", &a);
printf("a=%d\n", a);
int *ptr_a; //introducing the pointer
ptr_a= &a; //pointing to a
printf("The address of a: %d\n", ptr_a);
//increasing a's value from its pointer
*ptr_a= *ptr_a +5;
printf("a after addition = %d\n", a);
printf("The address of a after addition : %d\n", ptr_a);
//the address of a stays the same
return 0;
}


