#include <stdio.h>
/*
CH-230-A
a2 p8.[c]
Hamza Bouhelal
H.bouhelal@jacobs-university.de
*/
int main() {
int a;
scanf("%d", &a);
if(a%7==0 && a%2==0){
    printf("The number is divisible by 2 and 7\n");
}
else{
    printf("The number is NOT divisible by 2 and 7\n");
}
return 0;
}



